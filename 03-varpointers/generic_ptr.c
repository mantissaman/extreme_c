/*
Generic pointers cannot be dereferenced
Type and as such arithmetic step is not known
They are good for generic functions (remmber <T>)
*/
#include<stdio.h>

void print_bytes(void* data, size_t length){
    char delim = ' ';
    unsigned char* ptr = data; //to step one byte at a time

    for(size_t i=0; i<length; i++){
        printf("%c 0x%x", delim, *ptr);
        delim =',';
        ptr++;
    }

    printf("\n");
}

int main(int argc, char** argv){
    int a=919;
    double b=18.9;

    print_bytes(&a, sizeof(int));
    print_bytes(&b, sizeof(double));

    return 0;
}