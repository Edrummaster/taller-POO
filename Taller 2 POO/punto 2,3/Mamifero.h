//mamifero.h
#ifndef __MAMIFERO_H_
#define __MAMIFERO_H_
#include <iostream>
using namespace std;

class Mamifero{
	protected:
		int edad;
	public:
		Mamifero(void);
		~Mamifero(void);
		void Mover();
		void Hablar();
};

#endif