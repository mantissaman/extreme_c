#include<stdio.h>

int main(int argc, char** argv){
    int var = 100;
    int* ptr = NULL; // in C++ you could use nullptr
    ptr = &var;
    *ptr = 200;

    printf("var = %d; ptr = %p\n", var, ptr);
    return 0;
}