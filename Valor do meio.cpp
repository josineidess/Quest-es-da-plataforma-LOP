#include <iostream>

using namespace std;
int n1;
int n2;
int n3;

int main() {
    cin >> n1;
    cin >> n2;
    cin >> n3;
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            cout << n2;
        }else{
            cout << n3;
        }
    }else if(n2 > n1 && n2 > n3){
        if(n1>n3){
            cout << n1;
        }else{
            cout << n3;
        }
    }else if(n3 > n1 && n3 > n2){
        if(n1 > n2){
            cout << n1;
        }else{
            cout << n2;
        }
    }
    return 0;
}
