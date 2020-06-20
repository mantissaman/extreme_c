#include<unistd.h>

int main(int argc, char** argv){
    while(1){
        sleep(1);
    }
    return 0;
}
// ./a.out &
// ls -l /proc/83200/
// cat /proc/83200/maps
// 