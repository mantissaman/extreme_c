#include<stdio.h>
 #include<stdlib.h>

#define LOOP_4(X, ...) \
    printf("%s\n", #X);
#define LOOP_3(X, ...) \
    printf("%s\n", #X); \
    LOOP_4(__VA_ARGS__)
#define LOOP_2(X, ...) \
    printf("%s\n", #X); \
    LOOP_3(__VA_ARGS__)
#define LOOP_1(X, ...) \
    printf("%s\n", #X); \
    LOOP_2(__VA_ARGS__)
#define LOOP(...) \
    LOOP_1(__VA_ARGS__)

int main(int argc, char** argv){
    LOOP(copy, paste)
    LOOP(copy, paste, cut)
    LOOP(copy, paste, cut, select)
    return EXIT_SUCCESS;
}