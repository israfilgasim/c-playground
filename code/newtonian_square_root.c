#include <stdio.h>

void newtonian_square_root(double n, int precision){

    double x_zero = 10;
    double x_next;

    for (int i = 0; i < precision; i++){
        x_next = x_zero - (((x_zero * x_zero) - n) / (2 * x_zero));
        x_zero = x_next;
    }

    printf("%.12f", x_next);
}

int main(){

    newtonian_square_root(612, 10);
    return 0;
}