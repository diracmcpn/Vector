#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <math.h>

typedef struct Vector Vector;
struct Vector
{
    double x;
    double y;
    double z;
};

double magnitude(Vector *vector);
Vector normalize(Vector *vector);
Vector Reverse(Vector *vector);
Vector addition(Vector *vector1, Vector *vector2);
Vector substraction(Vector *vector1, Vector *vector2);
double dotProduct(Vector *vector1, Vector *vector2);
Vector crossProduct(Vector *vector1, Vector *vector2);
Vector multiplication(Vector *vector, double constant);
Vector division(Vector *vector, double constant);
double tripleScalar(Vector *vector1, Vector *vector2, Vector *vector3);

#endif // VECTOR_H_INCLUDED
