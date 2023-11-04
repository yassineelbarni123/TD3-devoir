#include<iostream>
using namespace std;
class NombreComplexe{
private:
	double reel;
	double imaginaire;
public:
	NombreComplexe(double r, double i):reel(r),imaginaire(i){}
	  void afficher(){
	  	cout<<reel<<"+"<<imaginaire<<"i"<<endl;
	  	
	  }
	  //dommande de surcharge  l'operateur dommander
	  NombreComplexe operator+(const NombreComplexe& autre ){
	  	double nouvelleReel=reel+autre.reel;
	  	double nouvelleImaginaire=imaginaire+autre.imaginaire;
	  	return NombreComplexe(nouvelleReel,nouvelleImaginaire);
	  	
	  }
	  NombreComplexe operator-(const NombreComplexe& autre ){
	  	double nouvelleReel=reel-autre.reel;
	  	double nouvelleImaginaire=imaginaire-autre.imaginaire;
	  	return NombreComplexe(nouvelleReel,nouvelleImaginaire);
	  	
	  }
	  
};
  int main(){
  	NombreComplexe a(2,3);
  	NombreComplexe b(1,4);
  	NombreComplexe somme=a+b;
  	NombreComplexe sustraction=a-b;
  	a.afficher();
  	b.afficher();
  	somme.afficher();
  	sustraction.afficher();
  	return 0;
  }



