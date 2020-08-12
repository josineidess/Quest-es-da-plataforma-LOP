#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    if(n%2==0 && n != 0){
        if(n > 0){
            cout << "O numero digitado e PAR e POSITIVO";
        }else{
            cout << "O numero digitado e PAR e NEGATIVO";
        }
    }else if(n == 0){
        cout << "O numero digitado e ZERO";
    }
    else{
        if(n > 0){
            cout << "O numero digitado e IMPAR e POSITIVO";
        }else{
            cout << "O numero digitado e IMPAR e NEGATIVO";
        }
    }
    return 0;
}
