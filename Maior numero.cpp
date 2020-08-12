#include <iostream>

using namespace std;
int vezes;
float numero;
float maior;
int main() {
    cin >> vezes;
    for(int e=0;e < vezes; e++){
        cin >> numero;
        if(e==0){
            maior=numero;
        }else{
            if(numero > maior){
                maior = numero;
            }
        }
        
    }
    cout << maior;
    return 0;
}
