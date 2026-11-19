#include "Moteur.h"
#include<iostream>
Moteur::Moteur(int a, int p)
{
	this->annee = a;
	this->puissance = p;
}
void Moteur::afficher()const
{
	std::cout << " l'année de fabrication  est:" << this->annee << std::endl;
	std::cout << "la puissace du moteur est:" << this->puissance << std::endl;
}
Moteur::~Moteur()
{

}