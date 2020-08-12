#include <iostream>

using namespace std;

int n1;
int n2;
int main() {
    cin >> n1;
    cin >> n2;
    if((n1+n2) % 2 == 0){
        cout << "A soma é par!";
    }
    return 0;
}
