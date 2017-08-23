#include <iostream>
#include <cmath>

double sinm(const double);

int main (){

	std::cout.precision(16);
	std::cout.setf(std::ios::scientific);

	double sinx, sinxm, error;
	for(double x = 0; x <= 2*M_PI; x+=0.1){
		sinx = std::sin(x);
		sinxm = sinm(x);
		error = std::abs(sinxm - sinx);
    		std::cout << x << "\t" 			//x
			<< sinx << "\t" 		//sinx
			<< sinxm << "\t"		//sinxm
			<< error << std::endl;		//error
	}
	
	return 0;
}

double sinm(const double x){

	double res = x;
	double term = x;

	double temp = 0;
	double i = 1;
	while(std::abs(temp - res) > 1e-8){
		temp = res;
		term *= -x/(2*i+1) * x/(2*i);
		res += term;
		i++;
	}

	return res;
}
