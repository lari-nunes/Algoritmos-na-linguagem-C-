#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    int qtdLaranjas;
    float valor;
    
    cout << "Quantas laranjas foram compradas? ";
    cin >> qtdLaranjas;
    
    if(qtdLaranjas < 12){
        valor = qtdLaranjas * 0.40;
    }
    else{
        valor = qtdLaranjas * 0.28;
    }
    
    cout << "VALOR FINAL: " << valor;
    
    return 0;
    
}
