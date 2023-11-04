#include<iostream>
#include<set>
#include<vector>
#include<list>
 using namespace std;
 int main(){
 	//Q1: Créer un set paramètre pour le type int que vous remplirez avec tous les entiers de 1 a 100.
 set<int> S;
 for (int i = 1; i <= 100; i++) {
    S.insert(i);
}
 //Q2: Écrire une fonction de recherche qui renvoie un booléen pour indiquer si une valeur donnée est 
 //présente ou non dans un set que vous passerez en paramètre avec la valeur à rechercher

 bool recherche(const set<int>& ensemble, int valeur) {
    return ensemble.find(valeur) != ensemble.end();
}
 
 //q3 :Modifiez cette fonction en lui passant maintenant en paramètres 2 littérateurs de set<int>(début et 
 //fin) ainsi que la valeur à rechercher.
  
    template <typename InputIt>
bool recherche(InputIt begin, InputIt end, int info) {
    return find(begin, end, info) != end;
}
 //q4 Passer la fonction en Template de façon à ce qu'elle marche peu importe le type d'itérateur qui lui 
 //est fourni (itérateur de liste, de vecteur, d'ensemble, ...)
   
   
   template <typename InputIt, typename T>
bool recherche(InputIt begin, InputIt end, const T& valeur) {
    return std::find(begin, end, valeur) != end;
}
    

 
 
 	return 0;
 }

 


