#include <iostream>
#include <cmath>

double s1(int N);
double s2a(int N);
double s2b(int N);
double s3(int N);





int main(){  

  for(int i = 0 ; i<=30 ; i++ ){

    double s_1 = s1(i);
    double s_2 = s2a(i) + s2b(i);
    double s_3 = s3(i);

    std::cout.precision(10); std::cout.setf(std::ios::scientific);
    std::cout<< i << "\t" /* << s_1 << "\t" <<  s_2  << "\t" << s_3 << "\t"*/ << std::abs((s_3-(s_1))/s_3) <<"\t" <<std::abs((s_3-(s_2))/s_3) << std::endl;

  }

  return 0 ;
}


double s1(int N){
  double term = 0, sum = 0;
  for (int k = 0 ; k<=2*N ; k++)
    {
      term = std::pow(-1.0,k)*(k/(k+1.));
      sum += term;   
    }
 
  return sum;
}

double s2a(int N){

  double term = 0, sum = 0;
  for(int k = 1 ; k<=N ; k++){
    term = -(2.*k - 1)/(2.*k);
    sum += term;
  }
  return sum;
}

double s2b(int N){

  double  term = 0, sum = 0;
  for(int k = 0 ; k<=N ; k++){
    term = 2.*k/(2.*k+1);
    sum += term;
  }
  return sum;
}


double s3(int N){

  double term = 0, sum = 0;
  for(int k=1 ; k<=N; k++){
    term = 1./(2.*k*(2.*k+1));
    sum += term;
  }
  return sum;

}
