#include <iostream>
using namespace std;
class Vector {
private:
    int elementos[5];

public:
    Vector() {
        cargarDatos();
    }

    void cargarDatos() {
        cout << "Ingrese 5 elementos:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Elemento " << (i + 1) << ": ";
            cin >> elementos[i];
        }
    }

    void imprimir() {
        cout << "Elementos del vector:";
        for (int i = 0; i < 5; i++) {
            cout << " " << elementos[i];
        }
        cout << endl;
    }

    void imprimir(int hasta) {
        for (int i = 0; i < hasta && i < 5; i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int desde, int hasta) {
        for (int i = desde; i < hasta && i < 5; i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Vector v;
    v.imprimir();
    v.imprimir(3);
    v.imprimir(1, 4);
    return 0;
}
