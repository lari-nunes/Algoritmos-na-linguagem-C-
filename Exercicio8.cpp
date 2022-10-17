#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    string nome;
    float peso, altura, formula;
    
    cout << "Qual o nome da pessoa? ";
    getline(cin, nome);
    cout << "Qual o peso atual da pessoa(em Kg)? ";
    cin >> peso;
    cout << "Qual a altura atual da pessoa(em metros)? ";
    cin >> altura;
    
    formula = (peso / (altura * altura));
    
    if(formula <= 17){
        cout << "Muito abaixo do peso";
    }else if(formula <= 18.49){
        cout << "Abaixo do peso";
    }else if(formula <= 24.99){
        cout << "Peso normal";
    }else if(formula <= 29.99){
        cout << "Acima do peso";
    }else if(formula <= 34.99){
        cout << "Obesidade I";
    }else if(formula <= 39.99){
        cout << "Obesidade II (severa)";
    }else if(formula >= 40){
        cout << "Obesidade III (mórbida)";
    }

    return 0;
}