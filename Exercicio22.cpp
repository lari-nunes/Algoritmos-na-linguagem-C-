#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    int ano;
    
    cout << "Qual o ano que a pessoa nasceu? ";
    cin >> ano;
    
    if(ano <= 2006){
        cout << "A pessoa poderá votar esse ano";
    }
    else{
        cout << "A pessoa nao poderá votar esse ano";
    }

    return 0;
}