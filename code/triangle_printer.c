#include <stdio.h>

char triangle(int n){
    int height = n;
    int width = 2 * n - 1;
    int i, empty, star;
    for (i = 0; i < height; i++){
        star = width - (2 * (n-1));
        empty = (width - star) / 2;
        while (empty > 0){
            printf(" ");
            empty--;
        }
        while (star > 0){
            printf("*");
            star--;
        }
        star = width - (2 * (n-1));
        empty = (width - star) / 2;
        while (empty > 0){
            printf(" ");
            empty--;
        }
        printf("\n");
        n--;

    }
}

int main()
{
    triangle(15);
    return 0;
}