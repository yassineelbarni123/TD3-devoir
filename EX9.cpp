a. Dans les instructions donn�es :
point<char> p(60, 65);
p.affiche();
Le type de donn�es sp�cifi� pour l'objet p est point<char>, ce qui signifie que T est d�fini comme char. Cependant, vous essayez d'initialiser p avec des valeurs enti�res (60 et 65). Cela provoque une conversion implicite des entiers en caract�res, car T est char, et donc les valeurs sont converties en caract�res ASCII correspondants. Donc, p contient les caract�res '<' (code ASCII 60) et 'A' (code ASCII 65), et lorsque vous appelez p.affiche(), il affiche ces caract�res.

b. Pour que les instructions affichent "Coordonnees : 60 65", vous devez modifier la d�finition de votre patron de classe pour autoriser les types int lors de la cr�ation d'un objet point. Vous pouvez modifier la d�finition de la classe point comme suit :

template <class T>
class point {
    T x, y; // coordonnees
public:
    point(T abs, T ord) { x = abs; y = ord; }
    void affiche() {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};
Maintenant, vous pouvez cr�er un objet point avec des entiers :

point<int> p(60, 65);
p.affiche();
Avec cette modification, l'objet p est de type point<int>, et il accepte des entiers en tant que coordonn�es, ce qui affiche "Coordonnees : 60 65" comme souhait�.
