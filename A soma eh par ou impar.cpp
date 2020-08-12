#include <iostream>

using namespace std;

int valor1;
int valor2;
int soma;

int main() {
    cin >> valor1;
    cin >> valor2;
    soma = valor1+valor2;
    if(soma%2==0){
        cout << "A soma é par!" << endl;
    }else{
        cout << "A soma é ímpar!" << endl;
    }
    return 0;
}
