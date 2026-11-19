#pragma once
#include "Vehicule.h"
#include "Moteur.h"
class Voiture :public Vehicule
{
private:
	int qteflux;
	Moteur* moteur;
public:
	Voiture(int,string,int,Moteur*);
	 virtual void afficher() const override;
	~Voiture();
};


