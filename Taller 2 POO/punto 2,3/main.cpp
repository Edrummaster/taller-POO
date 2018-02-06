//main
#include "Mamifero.h"
#include "Perro.h"
int main(){
	Mamifero *perro1 = new Perro;
	perro1 ->Mover();
	perro1 ->Hablar();

	cout<<"           "<<endl;

	Perro *perro2 = new Perro;
	perro2 ->Mover();
	perro2 ->Hablar();
	return 0;

}


