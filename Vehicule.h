#pragma once
#include<iostream>
using namespace std;
class Vehicule
{
private:
	string marque;
	int vitesse;
public:
	Vehicule(string ="", int=0);
	 virtual void afficher()const;
	 virtual~Vehicule();
	
};

