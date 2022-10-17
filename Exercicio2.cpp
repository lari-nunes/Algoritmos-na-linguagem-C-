/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, maior;
    
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
    
    maior = num1;
    
    if(num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num4 > maior) maior = num4;
    if (num5 > maior) maior = num5;
    
    cout << "MAIOR NUMERO: " << maior << endl;

    return 0;
}