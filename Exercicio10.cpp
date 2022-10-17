#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float salario, reajuste;
    
    cout << "Qual o salario da pessoa? ";
    cin >> salario;
    
    if(salario <= 1320){
        reajuste = salario * 0.11;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " <<salario<< endl;
    }
    else if(salario >= 1321 && salario <= 3000){
        reajuste = salario * 0.09;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " << salario<< endl;
    }
    else if(salario >= 3001 && salario <= 7000){
        reajuste = salario * 0.06;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " <<salario<< endl;
    }
    else if(salario >= 7001){
        reajuste = salario * 0.01;
        salario = salario + reajuste;
        cout << "O salario atual da pessoa será de: " <<salario<< endl;
    }

    return 0;
}