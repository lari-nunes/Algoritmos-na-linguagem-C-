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
    int num1;
    
    cout << "Digite um numero: ";
    cin >> num1;
    
    if(num1 % 2 == 0){
        cout << "NUMERO PAR";
    }
    else{
        cout << "NUMERO IMPAR";
    }

    return 0;
}