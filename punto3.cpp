#include <iostream>
using namespace std;

class Punto {
private:
    int x, y;

public:
    Punto() : x(0), y(0) {}

    Punto(int x, int y) : x(x), y(y) {}

    void imprimir() {
        cout << "Punto: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    p1.imprimir();
    p2.imprimir();
    return 0;
}
