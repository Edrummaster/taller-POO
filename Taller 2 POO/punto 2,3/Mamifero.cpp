//Mamifero.cpp
#include "Mamifero.h"
Mamifero::Mamifero(void){
	cout<<"Mamifero c o n s t r u c t o r . . . " <<endl;
}

Mamifero::~Mamifero(void){
	cout<< "Mamifero d e s t r u c t o r . . . " <<endl;
}

void Mamifero::Mover(){
	cout<<"El mamifero se mueve !" <<endl;
}

void Mamifero::Hablar(){
	cout<<"El mamifero habla? Changos!"<<endl;
}