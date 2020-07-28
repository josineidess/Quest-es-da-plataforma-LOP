#include <iostream>
#include <string.h>

using namespace std;

string nome=" ";
int vezes=0;

int main() {
    cin >> nome;
    cin >> vezes;
    while(vezes>0){
        cout << nome << "\n";
        vezes--;
    }
    return 0;
}
