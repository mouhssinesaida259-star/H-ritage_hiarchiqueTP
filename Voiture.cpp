#include "Voiture.h"
Voiture::Voiture(int q,string m,int v,Moteur* moteur):Vehicule(m,v)
{
	this->qteflux = q;
	this->moteur = moteur;
	cout << "constructeur Voiture" << endl;
};

void Voiture::afficher()const {
	cout << "le flux de voiture est :" << this->qteflux << endl;
	cout << "le moteur de voiture est :";
	this->moteur->afficher();
	this->Vehicule::afficher();
	cout << "afficher de class voiture" << endl;
}
Voiture::~Voiture()
{
	delete moteur;
	cout << "Destructeur Voiture" << endl;
};

