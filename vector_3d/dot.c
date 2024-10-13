#include "vector.h"

double vector_dot(vector v1, vector v2) {
    double res;
    res = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;  

    return res;
}
