


#include "Mamifero.h"
#include "Perro.h"
#include "Cuy.h"
#include "Gato.h"
#include "Caballo.h"

int main (){
	Mamifero* arreglo[5];
	Mamifero* p;
	int choice , i;
	for(i=0;i<5;i++){
		cout<<"(1) perro (2) gato" <<endl;
		cout<<"(3) caballo (4) cuy : " <<endl;
		cin>>choice;

		switch (choice){
			case 1 :p = new Perro;
			break;
			case 2 :p = new Gato;
			break;
			case 3 :p = new Caballo;
			break;
			case 4 :p = new Cuy;
			break;
			default : p = new Mamifero ;
			break;
		}
	arreglo[i] = p;
	}

	for(i=0;i<5;i++){
		arreglo[i]->Hablar();
	}
// S iempre hay que l i b e r a r
// l a memoria r e s e r v a d a
	for(i=0;i<5;i++){
		delete arreglo[i];
	}
	return 0 ;
}