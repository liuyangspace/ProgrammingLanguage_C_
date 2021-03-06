/*
参考:
    <math.h>
    <stdlib.h>
    <float.h>
*/

#define M_E		2.7182818284590452354
#define M_LOG2E 	1.4426950408889634074
#define M_LOG10E	0.43429448190325182765
#define M_LN2		0.69314718055994530942
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846
#define M_PI_2		1.57079632679489661923
#define M_PI_4		0.78539816339744830962
#define M_1_PI		0.31830988618379067154
#define M_2_PI		0.63661977236758134308
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2 	1.41421356237309504880
#define M_SQRT1_2	0.70710678118654752440

double sin (double);
double cos (double);
double tan (double);
double sinh (double);
double cosh (double);
double tanh (double);
double asin (double);
double acos (double);
double atan (double);
double atan2 (double, double);
double exp (double);
double log (double);
double log10 (double);
double pow (double, double);
double sqrt (double);
double ceil (double);
double floor (double);
double fabs (double);
double ldexp (double, int);
double frexp (double, int*);
double modf (double, double*);
double fmod (double, double);

int abs (int);
long labs (long)

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
div_t div (int, int);
ldiv_t ldiv (long, long)

// 随机函数
int rand (void);
void srand (unsigned int);

//
#undef FLT_MAX
#undef FLT_MIN
#undef DBL_MAX
#undef DBL_MIN