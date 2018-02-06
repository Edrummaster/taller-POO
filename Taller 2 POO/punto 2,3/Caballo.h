#ifndef __CABALLO_H_
#define __CABALLO_H_

#include "Mamifero.h"
#include <iostream>
using namespace std;

class Caballo : public Mamifero{
	protected:
		int edad;
	public:
		Caballo(void);
		~Caballo(void);
		void Mover();
		void Hablar();
};

#endif