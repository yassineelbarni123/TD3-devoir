#include <iostream>
#include <list>

using namespace std;

// Fonction pour afficher le contenu d'une liste
void afficherListe(const list<int>& liste) {
    for (const int& element : liste) {
        cout << element << " ";
    }
    cout << endl;
}

// Tri à bulles
void triABulles(list<int>& liste) {
    bool echange;
    do {
        echange = false;
        auto it1 = liste.begin();
        auto it2 = next(it1);
        while (it2 != liste.end()) {
            if (*it1 > *it2) {
                swap(*it1, *it2);
                echange = true;
            }
            ++it1;
            ++it2;
        }
    } while (echange);
}

// Tri par sélection
void triParSelection(list<int>& liste) {
    auto debutTri = liste.begin();
    while (debutTri != liste.end()) {
        auto minimum = debutTri;
        auto it = debutTri;
        ++it;
        while (it != liste.end()) {
            if (*it < *minimum) {
                minimum = it;
            }
            ++it;
        }
        swap(*debutTri, *minimum);
        ++debutTri;
    }
}

// Tri par insertion
void triParInsertion(list<int>& liste) {
    auto it = next(liste.begin());
    while (it != liste.end()) {
        int element = *it;
        auto position = it;
        while (position != liste.begin() && *prev(position) > element) {
            *position = *prev(position);
            --position;
        }
        *position = element;
        ++it;
    }
}

int main() {
    list<int> liste;

    int n;
    cout << "Entrez des entiers (0 pour arrêter la saisie) : ";
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        liste.push_back(n);
    }

    // Copiez la liste pour effectuer les trois tris
    list<int> copieListeBulles = liste;
    list<int> copieListeSelection = liste;
    list<int> copieListeInsertion = liste;

    // Tri à bulles
    triABulles(copieListeBulles);
    cout << "Tri à bulles : ";
    afficherListe(copieListeBulles);

    // Tri par sélection
    triParSelection(copieListeSelection);
    cout << "Tri par sélection : ";
    afficherListe(copieListeSelection);

    // Tri par insertion
    triParInsertion(copieListeInsertion);
    cout << "Tri par insertion : ";
    afficherListe(copieListeInsertion);

    return 0;
}

       



