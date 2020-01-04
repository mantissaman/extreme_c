#include<stdio.h>
//#define CONDITION

int main(int argc, char** argv){

    #ifdef CONDITION
    int i =0;
    i++;
    printf("i=%d;\n", i);
    #endif

    int j=0;
    printf("j=%d\n", j);
    return 0;

}