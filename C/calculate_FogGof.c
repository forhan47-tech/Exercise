#include <stdio.h>

double f(double x) { 
    return (x * x) + 2; // Define function f(x) = x^2 + 2
}

double g(double x) { 
    return (3 * x) - 4; // Define function g(x) = 3x - 4
}

double fog(double x) { 
    return f(g(x)); // Compute fog(x) = f(g(x))
}

double gof(double x) { 
    return g(f(x)); // Compute gof(x) = g(f(x))
}

int main() {
    double x = 5;  
    printf("fog(%lf) = %lf\n", x, fog(x));
    printf("gof(%lf) = %lf\n", x, gof(x));  
    return 0;
}
