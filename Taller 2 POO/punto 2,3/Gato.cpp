//Mamifero.cpp
#include "Gato.h"

Gato::Gato(void){
	cout<<"Gato c o n s t r u c t o r . . . " <<endl;
}


Gato::~Gato(void){
	cout<< "Gato d e s t r u c t o r . . . " <<endl;
}


void Gato::Mover(){
	cout<<"El Gato Trepa !" <<endl;
}

void Gato::Hablar(){
	cout<<"Gato Maulla !"<<endl;
}