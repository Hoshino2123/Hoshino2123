#include <iostream>

int main (void) {
    int tabuada = 90;
    int multiplicador = 0;
    while (multiplicador <= 10) {
        std::cout << tabuada << " x " << multiplicador << " = " << tabuada * multiplicador << std::endl;
        multiplicador++;
    }
    return 0;
}