#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int
main ()
{

  float lado1, lado2, lado3;

  cout << "Qual a medida de lado 1? ";
  cin >> lado1;
  cout << "Qual a medida de lado 2? ";
  cin >> lado2;
  cout << "Qual a medida de lado 3? ";
  cin >> lado3;
  
  if(lado1 == lado2 && lado1== lado3){
      cout << "Triângulo equilátero";
  }else if(lado1 != lado2 && lado1 != lado3){
      cout << "Triângulo escaleno";
  }else{
      cout << "Triângulo isósceles";
  }
  
  return 0;
}