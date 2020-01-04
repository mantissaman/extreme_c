#include<stdio.h>
#include<string.h>
#define CMD(NAME) \
    char NAME##_cmd[256] = ""; \
    strcpy(NAME##_cmd, #NAME);
#define PRINTS(a) printf("%s\n",a);

int main(int argc, char** arcgv){
    CMD(copy)
    CMD(paste)
    CMD(cut)

    char cmd[256];
    scanf("%s", cmd);

    if(strcmp(cmd, copy_cmd) == 0){
        PRINTS("copying")
    }
    if(strcmp(cmd, paste_cmd) == 0){
        PRINTS("pasting")
    }
    if(strcmp(cmd, cut_cmd) == 0){
        PRINTS("yanking")
    }

    return 0;
}