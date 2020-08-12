#include <iostream>

using namespace std;

float n1;
float n2;
float n3;
float media;
int main() {
    cin >> n1;
    cin >> n2;
    cin >> n3;
    media = (n1+n2+n3)/3;
    if(media >= 5){
        cout << "Aprovado";
    }else if(media < 5 && media >= 3){
        cout << "Final";
    }else{
        cout << "Reprovado";
    }
    return 0;
}
