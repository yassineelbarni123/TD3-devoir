#include<iostream>
#include<list>
#include<string>
#include<iterator>

using namespace std;
  class personne{
  	private:
  		string nom;
  		string prenom;
  		int age;
  		
  	public:
  		personne(string n , string p, int a):nom(n),prenom(p),age(a){}
  		string getnom(){return nom;}
  		string getprenom(){return prenom;}
  		int getage(){return age;}
 bool comparepersonne(personne p1, personne p2){
 	 if(p1.getnom() != p2.getnom()){
 	 	return p1.getnom() < p2.getnom();
	  }
	  else return p1.getprenom()<p2.getprenom();
 }
  
  };

 int main(){
 	list<personne> L;
 	personne p1 = personne("el barni","yassine",21);
 	personne p2 = personne("youbi","youssra",20);
 	personne p3 = personne("lousa","akram",24);
 	L.push_back(p1);
 	L.push_back(p2);
 	L.push_back(p3);
 	//trie les elements de la liste par objet 
 	L.sort(comparepersonne);
 	//afficher de la liste
 	cout<<"liste est trie personne et prenom est : \n"<<endl;
 	fot(personne i:L){
 		cout<<"le nom :"<<i.getnom()<<" "<<"prenom"<<i.getprenom()<<" "<<"age est :"<<i.getage()<<endl;
 		return 0;
	 }
 	
 	return 0;
 }

