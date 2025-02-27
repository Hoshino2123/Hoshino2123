#include <iostream>
using namespace std;

int main() {
    int expoente = 0;

    while (true) {
        int resultado = 1 << expoente; 
        cout << "2^" << expoente << " = " << resultado << endl;

        if (resultado > 1000) {
            break;
        }

        expoente++;
    }

    return 0;
}