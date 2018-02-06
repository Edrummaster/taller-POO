// Prueba1 . h
#ifndef __PRUEBA1_H_
#define __PRUEBA1_H_

#include <iostream>
using namespace std;

class Papa{
    public:
        void prueba();
};

class Hijo : public Papa{
    public:
        void prueba();
};

#endif
