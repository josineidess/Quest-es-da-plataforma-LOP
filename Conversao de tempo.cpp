#include <iostream>

using namespace std;
int entrada;
int dias; //86400
int horas; //3600
int minutos; //60
int segundos;

int main() {
    cin >> entrada;
    dias = entrada / 86400;
    if(dias == 0) {
        horas = entrada / 3600;
        entrada = entrada % 3600;
    }else {
        horas = entrada / 3600;
        entrada = entrada % 86400;
    }
    minutos = entrada / 60;
    entrada = entrada % 60;
    segundos = entrada;
    cout << dias << " dias, " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos.";
    return 0;
}
