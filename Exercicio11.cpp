#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    int num1, num2, num3, menor, meio, maior;
  
    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite um numero: ";
    cin >> num2;
    cout << "Digite um numero: ";
    cin >> num3;
  
    if(num1 < num2){
        if(num2 < num3){
            menor = num1;
            meio = num2;
            menor = num3;
        }else if(num1 < num3){
            menor = num1;
            meio = num3;
            menor = num2;
        }else{
            menor = num3;
            meio = num1;
            maior = num2;
        }
    }else{
        if(num3 > num1){
            menor = num2;
            meio = num1;
            maior = num3;
        }else if(num3 < num2){
            menor = num3;
            meio = num2;
            maior = num3;
        }else{
            menor = num2;
            meio = num3;
            maior = num1;
        }
    }
        
    cout <<num3<< ", " <<num2<< ", " <<num1<< endl;
  
  return 0;
}
