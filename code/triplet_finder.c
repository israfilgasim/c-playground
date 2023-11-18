#include <stdio.h>

int main() {
    
    int first = 0, second = 0, third = 0, given = 1, count = 0;
    
    
    while (given != 0){
        if (third > second && second > first && ((first != 0 && second != 0) && third != 0 )){
                count += 1;
                printf("Triplet #%d : %d, %d, %d\n", count, first, second, third);
                }
                

        printf("Give a number: ");
        scanf("%d", &given);
        
        
        
        if (first == 0){
            first = given;
        } else if (second == 0){
            second = given;
            if (first > second){
                first = second;
                second = 0;
            }
        } else if (third == 0){
            third = given;
            if (second > third){
                first = third;
                second = 0;
                third = 0;
            }
        }
        else {
            if (given > third){
                first = second;
                second = third;
                third = given;
            } else{
                first = given;
                second = 0;
                third = 0;
            }
        }
  
    }

    if (given == 0){
        printf("The program has ended.\n");
        return 0;
    }
}