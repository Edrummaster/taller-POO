#ifndef __GATO_H_
#define __GATO_H_

#include "Mamifero.h"
#include <iostream>
using namespace std;

class Gato : public Mamifero{
	protected:
		int edad;
	public:
		Gato(void);
		~Gato(void);
		void Mover();
		void Hablar();
};

#endif