
#include "Prueba1.h"
int main(void){
    Papa *p = new Papa ;
    // Imprime ” Clase papa ”
    p -> prueba() ;
    delete p;
    Hijo *h =new Hijo;
    // Imprime ” Clase hijo ”
    h ->prueba(); 
    delete h;
    return 0;
}
