#include<iostream>
#include<set>
#include<vector>
#include<list>
 using namespace std;
 int main(){
 	//Q1: Cr�er un set param�tre pour le type int que vous remplirez avec tous les entiers de 1 a 100.
 set<int> S;
 for (int i = 1; i <= 100; i++) {
    S.insert(i);
}
 //Q2: �crire une fonction de recherche qui renvoie un bool�en pour indiquer si une valeur donn�e est 
 //pr�sente ou non dans un set que vous passerez en param�tre avec la valeur � rechercher

 bool recherche(const set<int>& ensemble, int valeur) {
    return ensemble.find(valeur) != ensemble.end();
}
 
 //q3 :Modifiez cette fonction en lui passant maintenant en param�tres 2 litt�rateurs de set<int>(d�but et 
 //fin) ainsi que la valeur � rechercher.
  
    template <typename InputIt>
bool recherche(InputIt begin, InputIt end, int info) {
    return find(begin, end, info) != end;
}
 //q4 Passer la fonction en Template de fa�on � ce qu'elle marche peu importe le type d'it�rateur qui lui 
 //est fourni (it�rateur de liste, de vecteur, d'ensemble, ...)
   
   
   template <typename InputIt, typename T>
bool recherche(InputIt begin, InputIt end, const T& valeur) {
    return std::find(begin, end, valeur) != end;
}
    

 
 
 	return 0;
 }

 


