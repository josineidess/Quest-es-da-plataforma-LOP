#include <iostream>

using namespace std;

int inteiro;
float decimal;
double decimalpreciso;
char caractere;
bool booleano;

int main() {
    cin >> inteiro;
    cin >> decimal;
    cin >> decimalpreciso;
    cin >> caractere;
    cin >> booleano;
    cout << "int lido: " << inteiro <<"\nfloat lido: "
    << decimal << "\ndouble lido: " << decimalpreciso <<
    "\nchar lido: " << caractere << "\nbool lido: " << booleano << "\n";
    return 0;
    
}
