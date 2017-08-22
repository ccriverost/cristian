#include<iostream>
#include<cmath>


double sol1(double a, double b,double c);
double sol2(double a, double b,double c);
double sol11(double a, double b,double c);
double sol22(double a, double b,double c);

    
    
    
    
    int main(void)
{
  double a = 1;
  double b = 1;
  double c =1/10;
  double sol1, sol2, sol11, sol22;

  sol1 = sol1(a,b,c);
  sol2 = sol2(a,b,c);
  sol11 = sol11(a,b,c);
    sol22 = sol22(a,b,c);
  
  
  std::cout << sol1 << "\t" << sol2 << "\t" << sol11 << "\t" << sol22 << std::endl;
   
  return 0;
}





double sol1(double a, double b, double c){
  double s1 = (- b + sqrt(pow(b,2) - 4*a*c))/(2*a);
  return s1;
}

double sol2(double a, double b, double c){

  double s2 = (- b - sqrt(pow(b,2) - 4*a*c))/(2*a);
  return s2;
}

double sol11(double a, double b, double c){
  double  s11 = (- 2*c)/(b +  sqrt(pow(b,2) - 4*a*c));
		       return s11;
		       }
    
    double sol22(double a, double b, double c){
      double s22 = (- 2*c)/(b -  sqrt(pow(b,2) - 4*a*c));
			return s22;
			}
    
