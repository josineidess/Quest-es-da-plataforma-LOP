#include <iostream>

using namespace std;
int macas;
int main() {
    cin >> macas;
    if(macas >= 12){
        cout <<"R$ " << macas*0.25;
    }else{
        cout << "R$ " <<macas*0.3;
    }
    return 0;
}
