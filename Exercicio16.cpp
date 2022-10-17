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
    
    int lados, area, base, altura;
    
    cout << "O numero de lados de um poligono regular(em cm): ";
    cin >> lados;
    
    if(lados == 3){
        area = base * altura / 2;
        cout << "TRIANGULO";
    }
    else if(lados == 4){
        area = lados * lados;
        cout << "QUADRADO";
    }
    else if(lados == 5){
        cout << "PENTAGONO";
    }
    else if(lados < 3){
        cout << "NÃO É UM POLIGONO";
    }
    else if(lados > 5){
        cout << "POLIGONO NÃO IDENTIFICADO";
    }
    
    return 0;
}