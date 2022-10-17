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
    int ano;
    
    cout << "Digite um ano: ";
    cin >> ano;
    
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        cout << "ANO BISSEXTO";
    }
    else{
        cout << "ANO NÃO BISSEXTO";
    }
    
    return 0;
}