#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c);

Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);
Complex complex_conj(Complex c);

double magnitude(Complex c);
double phase(Complex c);

void hdler_a(Complex (*complex_fn)(Complex, Complex), Complex c1, Complex c2);

void hdler_b(double (*complex_fn)(Complex), Complex c1);
