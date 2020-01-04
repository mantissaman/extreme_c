#include<stdio.h>
#define ADD(a, b) a+b
#define PRINT(i) \
    printf("%d\n", i)

int main(int argc, char** argv){
    int x = 2;
    int y = 3;
    int z = ADD(x, y);

    printf("%d\n", z);

    PRINT(y);

    return 0;
}