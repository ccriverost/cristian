#include<iostream>
using namespace std;


//funtion returning the max between two numbers
int max( int num1, int num2)
{
  //local variable declaration
  int result;
  if (num1 > num2)
    result = num1;
  else if (num1 == num2)
    cout << "los numeros son iguales" << '\n';
  else if (num2 > num1)
    result = num2;
}
int main (){
  //local variable declaration:
  double a;
  cout << "ingese variable a: " ; 
  cin >> a;
  double b;
  cout << "ingese variable b: " ;
  cin >> b;
  double ret;
  // calling a funtion you get max value.
  ret = max(a, b);
  cout << "max value is : " << ret << endl;
  
}
