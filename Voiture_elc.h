#pragma once
#include "Voiture.h"
class Voiture_elc :public Voiture
{
private:
	int nvBaterie;
public:
	Voiture_elc(int nv,int nbrflux,string marque,int vitesse ,Moteur* moteur);
	void afficher()const override;
	~Voiture_elc();
};

