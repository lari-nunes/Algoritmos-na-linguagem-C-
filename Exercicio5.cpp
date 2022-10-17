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
    int num1;
    
    cout << "Digite um numero: ";
    cin >> num1;
    
    if(num1 % 2 == 0 && num1 % 10 == 0){
        cout << "NUMERO PAR E DIVISIVEL POR 10";
    }
    else{
        cout << "NAO É PAR OU NAO É DIVISIVEL POR 10";
    }

    return 0;
}