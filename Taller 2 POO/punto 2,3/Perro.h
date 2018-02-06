#ifndef __PERRO_H_
#define __PERRO_H_

#include "Mamifero.h"
#include <iostream>
using namespace std;

class Perro : public Mamifero{
	protected:
		int edad;
	public:
		Perro(void);
		~Perro(void);
};

#endif