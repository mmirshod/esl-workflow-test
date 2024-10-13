#include "vector.h"
#include <stdio.h>

int main() {
    vector a = {1.3, 2.5, 3.2};
    vector b = {4.7, 5.3, 6.3};

    vector sum = vector_add(a, b);
    printf("Sum: (%f, %f, %f)\n", sum.x, sum.y, sum.z);
    
    vector sub = vector_subtract(a, b);
    printf("Sub: (%f, %f, %f)\n", sub.x, sub.y, sub.z);

    double dot = vector_dot(a, b);
    printf("Dot product: %f\n", dot);

    vector cross = vector_cross(a, b);
    printf("Cross product: (%f, %f, %f)\n", cross.x, cross.y, cross.z);

    return 0;
}