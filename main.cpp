
#include <iostream>
#include "pilaDinamica.h"
using namespace std;

int main() {
    pilaDinamica p;
    char c;

    cin >> c;
    while (c != '.') {
        // processar valor
        // mostrar valor o * (amb espai)
        // si la pila ha canviat
        cin >> c;
    }
    
    // bucle per buidar la pila
    // mostrant valor o * (després de treure cada element)
    cout << endl;
}



/*leer caracteres hasta '.'

    mayúscula → Empila()
                 ↓
              mostrar Cim()

    minúscula → Desempila()
                 ↓
              mostrar Cim()

    cualquier otro → ignorar

al encontrar '.':
    vaciar la pila elemento a elemento
    mostrando Cim() después de cada Desempila()*/
