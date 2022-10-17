#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    float salario, reajuste;
    
    cout << "Qual a taxa de correção da pessoa? ";
    cin >> salario;
    
    if(salario <= 2000){
        reajuste = salario * 0.1;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " <<salario<< endl;
    }
    else if(salario >= 2000 && salario <= 5000){
        reajuste = salario * 0.12;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " << salario<< endl;
    }
    else if(salario >= 5000){
        reajuste = salario * 0.13;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " <<salario<< endl;
    }
    return 0;
    
}
