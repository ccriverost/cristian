#include <iostream>
#include <cstdlib>

typedef int REAL;


int main(int argc, char **argv)
{
  REAL under = 1;
  REAL over = 1;
  
  for (int i = 0 ; i <atoi(argv[1]); i++)
    {
      under = under + 100;
      over = over - 100;
      std :: cout << i << "\t" << under << "\t"  << over << "\n"; 
    }
  
  return 0;
}
