
#include <iostream>
#include <cmath>

int factorial(int n);
double fnaive(double x, int N);
double fsmart(double x, int N);


int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double x = 1.1;
  for(int NMAX =1; NMAX <= 30 ; ++NMAX)
    {
      std::cout << NMAX
		<< "\t" << fnaive(x,NMAX)
		<< "\t" << fsmart(x,NMAX)
		<<std::endl;
    }
  return 0;
}

double fsmart(double x, int N)
{
  double term = 0, suma = 1;
  for(int k = 1; k <= N; N++)
    {
      term *= pow(-x,2)/((2*k+1)*(2*k));
      suma += term;
    }
  return suma; 
}

double fnaive(double x, int N)
{
  double term = 0, suma = 1;
  for(int k = 1; k <= N; k++)
    {
      term = std::pow(-x,(2*k)-1)/factorial((2*k)-1);
      suma +=term;
    }
  return suma;
}

int factorial(int n)
{
  if (n <= 0) return 1;
  return n*factorial(n-1);
}
