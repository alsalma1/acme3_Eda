#include <iostream>

#include "pilaDinamica.h"

using namespace std;


pilaDinamica::pilaDinamica(){
    inici = nullptr;
}

pilaDinamica::~pilaDinamica(){
    while (!Buida()) {
        Desempila();
    }
}

bool pilaDinamica::Buida() const{
    bool esBuida = false;
    if(inici == nullptr) esBuida = true;

    return esBuida;
}

void pilaDinamica::Empila(element e) {
    node *p = new node;
    p->dada = e;
    if (Buida()) {
        inici = p;
        p->seguent = nullptr;
    }
    else {
        p->seguent = inici;
        inici = p;
    }
}

void pilaDinamica::Desempila(){
    if (!Buida()) {
        node *p = inici;
        inici = p->seguent;
        delete p;
    }

}

element pilaDinamica::Cim() const {
    element cim;

    if (Buida())
        cim = '*';
    else
        cim = inici->dada;

    return cim;
}
