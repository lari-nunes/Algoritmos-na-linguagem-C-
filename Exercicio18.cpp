#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int dia, mes, ano;
    
    cout << "Qual o dia? ";
    cin >> dia;
    cout << "Qual o mes? ";
    cin >> mes;
    cout << "Qualo ano? ";
    cin >> ano;
    
    if(dia == 9 && mes == 2 && ano == 2004){
        cout << "A data " <<dia<< "/" <<mes<< "/" <<ano<< " é valida";
    }
    else{
        cout << "A data " << dia<< "/" <<mes<< "/" <<ano<< " é invalida";
    }

    return 0;
}