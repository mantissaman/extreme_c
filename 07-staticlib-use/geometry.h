#ifndef GEOMETRY_H
#define GEOMETRY_H
#define PI 3.14159265359

typedef struct {
    double x;
    double y;
} cartesian_pos_2d_t;

typedef struct {
    double length;
    double theta; //angle in degrees not radians
} polar_pos_2d_t;

typedef struct {
    double x;
    double y;
    double z;

} cartesian_pos_3d_t;

typedef struct {
    double length;
    double theta; //angle in degrees not radians
    double phi; //angle in degrees not radians
} polar_pos_3d_t;

double to_radian(double deg);
double to_degree(double rad);
double cos_deg(double deg);
double acos_deg(double deg);
double sin_deg(double deg);
double asin_deg(double deg);

cartesian_pos_2d_t convert_to_2d_cartesian_pos(const polar_pos_2d_t* polar_pos);
polar_pos_2d_t convert_to_2d_polar_pos(const cartesian_pos_2d_t* cartesian_pos);
cartesian_pos_3d_t convert_to_3d_cartesian_pos(const polar_pos_3d_t* polar_pos);
polar_pos_3d_t convert_to_3d_polar_pos(const cartesian_pos_3d_t* cartesian_pos);

#endif

// atulsharma@pop-os:~/projects/extreme_c/06-staticlib$ gcc -c trigon.c -o trigon.o
// atulsharma@pop-os:~/projects/extreme_c/06-staticlib$ gcc -c convert2d.c -o convert2d.o
// atulsharma@pop-os:~/projects/extreme_c/06-staticlib$ gcc -c convert3d.c -o convert3d.o
// atulsharma@pop-os:~/projects/extreme_c/06-staticlib$ ar crs libgeometry.a trigon.o convert2d.o convert3d.o