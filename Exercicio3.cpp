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
    int num1, num2, num3, num4, num5, menor;
    
    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite um numero: ";
    cin >> num2;
    cout << "Digite um numero: ";
    cin >> num3;
    cout << "Digite um numero: ";
    cin >> num4;
    cout << "Digite um numero: ";
    cin >> num5;
    
    menor = num1;
    
    if(num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    if (num4 < menor) menor = num4;
    if (num5 < menor) menor = num5;
    
    cout << "MENOR NUMERO: " << menor << endl;

    return 0;
}