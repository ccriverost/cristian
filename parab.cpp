#include<iostream>
#include<cmath>


double sol1(double a, double b,double c);
double sol2(double a, double b,double c);
double sol11(double a, double b,double c);
double sol22(double a, double b,double c);

  
    
    int main(void)
{


  for(int k=1; k <= 30; k++){
    double a = 1;
    double b = 1;
    double c = pow(0.1,k); 
    double x1 = sol1(a,b,c);
    double x2 = sol2(a,b,c);
    double x11 = sol11(a,b,c);
    double x22 =sol22(a,b,c);
    std::cout.precision(16); std::cout.setf(std::ios::scientific);
     
    std::cout << k
	      <<"\t"<< x1
	    << "\t" << x2
	    << "\t" << x11
	    << "\t" << x22
	    << std::endl;
  }
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
