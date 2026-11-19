#include "Voiture_elc.h"

Voiture_elc::Voiture_elc(int nv, int nbrflux, string marque, int vitesse , Moteur* moteur):Voiture(nbrflux,marque,vitesse,moteur)
{
	this->nvBaterie = nv;
	cout << "le constructeur de classe voiture-elec" << endl;
}

void Voiture_elc::afficher() const
{
	cout << "le niveau de baterie est : " << this->nvBaterie << endl;
	this->Voiture::afficher();
	cout << "affichage de classe voiture_elec" << endl;
}

Voiture_elc::~Voiture_elc()
{

}
