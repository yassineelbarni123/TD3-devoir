a. Dans les instructions données :
point<char> p(60, 65);
p.affiche();
Le type de données spécifié pour l'objet p est point<char>, ce qui signifie que T est défini comme char. Cependant, vous essayez d'initialiser p avec des valeurs entières (60 et 65). Cela provoque une conversion implicite des entiers en caractères, car T est char, et donc les valeurs sont converties en caractères ASCII correspondants. Donc, p contient les caractères '<' (code ASCII 60) et 'A' (code ASCII 65), et lorsque vous appelez p.affiche(), il affiche ces caractères.

b. Pour que les instructions affichent "Coordonnees : 60 65", vous devez modifier la définition de votre patron de classe pour autoriser les types int lors de la création d'un objet point. Vous pouvez modifier la définition de la classe point comme suit :

template <class T>
class point {
    T x, y; // coordonnees
public:
    point(T abs, T ord) { x = abs; y = ord; }
    void affiche() {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};
Maintenant, vous pouvez créer un objet point avec des entiers :

point<int> p(60, 65);
p.affiche();
Avec cette modification, l'objet p est de type point<int>, et il accepte des entiers en tant que coordonnées, ce qui affiche "Coordonnees : 60 65" comme souhaité.
