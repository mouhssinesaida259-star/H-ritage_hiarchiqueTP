#include "Vehicule.h"
#include<iostream>
using namespace std;

Vehicule::Vehicule(string m, int v)
{
	this->marque = m;
	this->vitesse = v;
	cout << "constructeur de class vehicule" << endl;
}

void Vehicule::afficher() const
{
	cout << " la marque est :" << this->marque << endl;
	cout << " la vitesse est :" << this->vitesse << endl;
	cout << "afficher de class vehicule" << endl;
}

Vehicule::~Vehicule()
{
	cout << "destructeur de class vehicule" << endl;
}
