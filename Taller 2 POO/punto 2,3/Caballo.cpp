//Mamifero.cpp
#include "Caballo.h"

Caballo::Caballo(void){
	cout<<"Caballo c o n s t r u c t o r . . . " <<endl;
}


Caballo::~Caballo(void){
	cout<< "Caballo d e s t r u c t o r . . . " <<endl;
}


void Caballo::Mover(){
	cout<<" A Cabalgar !" <<endl;
}

void Caballo::Hablar(){
	cout<<"Caballo Relincha !"<<endl;
}