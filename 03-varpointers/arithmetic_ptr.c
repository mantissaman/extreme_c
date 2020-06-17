#include<stdio.h>
#define SIZE 5

int main(int argc, char** argv){
    int var = 1;

    int* int_ptr = NULL;
    int_ptr = &var;

    char* char_ptr = NULL;
    char_ptr = (char*) &var;

    printf("Before arithmetic int_ptr: %u, char_ptr: %u\n", 
        (unsigned int) int_ptr, (unsigned int) char_ptr);
    
    int_ptr++;
    char_ptr++;

    //Step size is determined by the data type
    //Int will increament by 4 whereas char will by 1
    printf("After arithmetic int_ptr: %u, char_ptr: %u\n", 
        (unsigned int) int_ptr, (unsigned int) char_ptr); 


    int arr[SIZE];
    arr[0] = 9;
    arr[1] = 12;
    arr[2] = 15;
    arr[3] = 18;
    arr[4] = 21;

    printf("Iterate by indices\n");
    for (int i=0; i<SIZE; i++){
        printf("%d\n", arr[i]);
    }

    int* ptr = arr; //int* ptr = &arr[0];

    printf("Iterate by pointer arithmetic\n");
    for(;;){
        printf("%d\n", *ptr);
        if(ptr == &arr[SIZE -1]){
            break;
        }
        ptr++;
    }

    return 0;   
}