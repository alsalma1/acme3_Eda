#include <iostream>
#include "pilaDinamica.h"

using namespace std;

int main() {
    pilaDinamica p;
    char c;

    cin >> c;

    while (c != '.') {

        if (c >= 'A' && c <= 'Z') {
            p.Empila(c);
            cout << p.Cim() << " ";
        }
        else if (c >= 'a' && c <= 'z') {
            p.Desempila();
            cout << p.Cim() << " ";
        }

        cin >> c;
    }

    while (!p.Buida()) {
        p.Desempila();
        cout << p.Cim() << " ";
    }

    cout << endl;

    return 0;
}
