#include <iostream>

int main (void) {
    int tabuada = 90;
    int multiplicaçao = 0;
    while (multiplicaçao <= 30) {
        std::cout << tabuada << " x " << multiplicaçao << " = " << tabuada * multiplicaçao << std::endl;
       multiplicaçao++;
    }
    return 0;
}