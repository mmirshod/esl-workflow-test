    #ifndef VECTOR_H
    #define VECTOR_H

    typedef struct
    {
        double x;
        double y;
        double z;
    } vector;


    /**
     * Adds two 3D vectors and returns the result.
     * @param v1 The first vector.
     * @param v2 The second vector.
     * @return The result of v1 + v2.
     */
    vector vector_add(vector v1, vector v2);

    /**
     * Subtracts the second vector from the first and returns the result.
     * @param v1 The first vector.
     * @param v2 The second vector.
     * @return The result of v1 - v2.
     */
    vector vector_subtract(vector v1, vector v2);

    /**
     * Calculates the dot product of two 3D vectors.
     * @param v1 The first vector.
     * @param v2 The second vector.
     * @return The dot product of v1 and v2.
     */
    double vector_dot(vector v1, vector v2);

    /**
     * Calculates the cross product of two 3D vectors and returns the result.
     * @param v1 The first vector.
     * @param v2 The second vector.
     * @return The cross product of v1 and v2.
     */
    vector vector_cross(vector v1, vector v2);

    #endif