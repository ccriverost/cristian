
#include <iostream>
#include <cmath>

int factorial(int);
double fnaive(double, int);
double fsmart(double, int);

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  double x = 1.123;
  
  for(int n =1; n <= 30 ; n++){
    double smart = fsmart(x,n);
    std::cout << n
		<< "\t" << fnaive(x, n)
		<< "\t" << smart
		<< "\t" << std::abs(1 - smart/std::sin(x))
		<<std::endl;
    }

  return 0;
}

double fnaive(double x, int N){

  double term = 0, suma = 1;
  
  for(int k = 1; k <= N; k++){
      term = std::pow(-x,2*k-1)/factorial(2*k-1);
      suma +=term;
    }

  return suma;
}

int factorial(int n)
{
  if (n == 0) return 1;
  return n*factorial(n-1);
}

double fsmart(double x, int N)
{
  double term = 1, suma = 1;
  for(int k = 1; k <= N; k++)
    {
      term *= std::pow(-x,2)/((2*k+1)*(2*k));
      suma += term;
    }
  return suma; 
}
