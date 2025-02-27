#include <iostream>

using namespace std;
int main(){
   int num;
   cout << "Digite um número: ";
    cin >> num;
    if (num % 10 == 0) {
        cout << "O número " << num << " é par." << endl;
    } else {
        cout << "O número " << num << " é ímpar." << endl;
    }


}