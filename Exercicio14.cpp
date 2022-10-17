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
    int senha;
    
    cout << "Qual a senha fornecida pelo usuario? ";
    cin >> senha;
    
    if(senha == 5479){
        cout << "ACESSO PERMITIDO";
    }
    else{
        cout << "ACESSO NEGADO";
    }

    return 0;
}