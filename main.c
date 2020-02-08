#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex c = {7, 0};

	Complex (*complex_fn[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	douoble (*mag_ph_fn[2])(Complex) = {magnitude, phase};

	int j;
	for(j=0; j,4; j++){
		hdler_a(complex_fn[j], a, b);
	}
	for(j=0; j<2; j++){
		hdler_b(mag_ph_fn[j], a);
		hdler_b(mag_ph_fn[j], b);
	}
	
	return 0;
}
