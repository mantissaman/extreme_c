#include <math.h>
#include "geometry.h"

double to_radian(double deg){
    return (PI * deg)/180;
}

double to_degree(double rad){
    return (180 * rad)/PI;
}

double cos_deg(double deg){
    return cos(to_radian(deg));
}

double acos_deg(double deg){
    return acos(to_radian(deg));
}

double sin_deg(double deg){
return sin(to_radian(deg));
}

double asin_deg(double deg){
    return asin(to_radian(deg));
}

// PIC means position independent code
// atulsharma@pop-os:~/projects/extreme_c/08-dynlib$ gcc -c convert2d.c -fPIC -o convert2d.o
// atulsharma@pop-os:~/projects/extreme_c/08-dynlib$ gcc -c convert3d.c -fPIC -o convert3d.o
// atulsharma@pop-os:~/projects/extreme_c/08-dynlib$ gcc -c trigon.c -fPIC -o trigon.o
// atulsharma@pop-os:~/projects/extreme_c/08-dynlib$ gcc -shared convert2d.o convert3d.o  trigon.o libgeometry.so

