/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    int num1, num2, num3, num4, num5;
    
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o primeiro numero: ";
    cin >> num2;
    cout << "Digite o primeiro numero: ";
    cin >> num3;
    cout << "Digite o primeiro numero: ";
    cin >> num4;
    cout << "Digite o primeiro numero: ";
    cin >> num5;
    
    
   if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
       cout << "O NUMERO " <<num1<< " É MAIOR E FOI DIGITADO NA PRIMEIRA POSICAO";
   }
   else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
       cout << "O NUMERO " <<num2<< " É MAIOR E FOI DIGITADO NA SEGUNDA POSICAO";
   }
   else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
       cout << "O NUMERO " <<num3<< " É MAIOR E FOI DIGITADO NA TERCEIRA POSICAO";
   }
   else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
       cout << "O NUMERO " <<num4<< " É MAIOR E FOI DIGITADO NA QUARTA POSICAO";
   }
   else if(num5 > num1 and num5 > num2 and num5 > num3 and num5 > num4){
       cout << "O NUMERO " <<num5<< " É MAIOR E FOI DIGITADO NA QUINTA POSICAO";
   }

    return 0;
}