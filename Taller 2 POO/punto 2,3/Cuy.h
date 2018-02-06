#ifndef __CUY_H_
#define __CUY_H_

#include "Mamifero.h"
#include <iostream>
using namespace std;

class Cuy : public Mamifero{
	protected:
		int edad;
	public:
		Cuy(void);
		~Cuy(void);
		void Mover();
		void Hablar();
};

#endif