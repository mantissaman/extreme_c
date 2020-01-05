#include<stdio.h>
#include "average.h"

int main(int argc, char** argv){
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    double average = avg(arr, 5, NORMAL);
    printf("The average: %f\n", average);

    average = avg(arr, 5, SQUARED);
    printf("The squared average: %f\n", average);

    return 0;
}
// Compile only source files - do not compile header file
//gcc -Wall -E average.c
//gcc -Wall -s average.c
//as average.s -o average.o
// gcc -Wall -c average.c <-all above three steps

//gcc -Wall -c average.c -o impl.o
//gcc -Wall -c run.c -o main.o
//gcc impl.o main.o