#include <iostream>
#include<cstdlib>

typedef double REAL;


int main(int argc, char **argv)
{
  REAL under = 1.0;
  REAL over = 1.0;
  
  for (int i ; i <atoi(argv[1]); i++)
    {
      under = under /2.0;
      over = over * 2.0;
      std :: cout << i << "\t"
		  << under << "\t"
		  << over << "\n"; 
    }
  
  return 0;
}
