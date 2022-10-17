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
    
    if(num1 % 7 == 0 || num1 % 23 == 0){
        cout << "DIVISIVEL POR 7 OU POR 23. ";
    }
    else{
        cout << "NAO É DIVISIVEL POR 7 NEM POR 23. ";
    }
    return 0;
}