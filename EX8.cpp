#include<iostream>
 using namespace std;
template <typename T>
T carre(const T& valeur) {
    return valeur * valeur;
}

int main() {
    int entier = 5;
    double reel = 3.14;

    int carreEntier = carre(entier);
    double carreReel = carre(reel);

    cout << "Le carr� de " << entier << " est : " << carreEntier << endl;
    cout << "Le carr� de " << reel << " est : " << carreReel << endl;

    return 0;
}

