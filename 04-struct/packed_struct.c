#include<stdio.h>

typedef struct __attribute__((__packed__)) {
    char first;
    char second;
    char third;
    short fourth;
} sample_t;

void print_size(sample_t* var){
    printf("Size: %lu bytes\n", sizeof(*var));
}
void print_bytes(sample_t* var){
    unsigned char* ptr = (unsigned char*) var;
    for(int i =0 ; i<sizeof(*var); i++, ptr++){
        printf("%d ", (unsigned int) *ptr);
    }   
    printf("\n");
}

int main(int argc, char** argv){
    sample_t var;
    var.first='A';
    var.second='B';
    var.third='C';
    var.fourth=765;

    print_size(&var);
    print_bytes(&var);

    return 0;
}