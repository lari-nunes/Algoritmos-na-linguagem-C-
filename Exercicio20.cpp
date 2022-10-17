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
    
    int angulo1, angulo2, angulo3;
    
    cout << "Qual o valor do angulo 1 de um triangulo? ";
    cin >> angulo1;
    cout << "Qual o valor do angulo 2 de um triangulo? ";
    cin >> angulo2;
    cout << "Qual o valor do angulo 2 de um triangulo? ";
    cin >> angulo3;
    
    if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
        cout << "Triângulo Retângulo: possui um ângulo reto";
    }
    else if(angulo1 >= 90 || angulo2 >= 90 || angulo3 >=90 ){
        cout << "Triângulo Obtusângulo: possui um ângulo obtuso";
    }
    else if(angulo1 <= 90 && angulo2 <= 90 && angulo3 <= 90){
        cout << "Triângulo Acutângulo: possui três ângulos agudos";
    }
    
    return 0;
}