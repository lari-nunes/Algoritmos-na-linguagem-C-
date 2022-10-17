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
int
main ()
{
    int nota1, nota2, nota3, nota4, media;
    
    cout << "Digite a nota da prova 1: ";
    cin >> nota1;
    cout << "Digite a nota da prova 2: ";
    cin >> nota2;
    cout << "Digite a nota do trabalho 1: ";
    cin >> nota3;
    cout << "Digite a nota do trabalho 2: ";
    cin >> nota4;
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    cout << "MEDIA DO ALUNO: " << media << endl;
    
    if(media >= 70){
        cout << "ALUNO APROVADO";
    }
    else if(media >= 40 && media <= 69.9){
        cout << "ALUNO DE RECUPERACAO";
    }
    else if(media <= 40){
        cout << "ALUNO REPROVADO";
    }
    
    return 0;
}