#ifndef VECTOR_C_INCLUDED
#define VECTOR_C_INCLUDED
#include "vector.h"

double magnitude(Vector *vector)
{
    return sqrt(vector->x*vector->x + vector->y*vector->y + vector->z*vector->z);
}

Vector normalize(Vector *vector)
{
    Vector v;
    double m = magnitude(vector);
    v.x = vector->x/m;
    v.y = vector->y/m;
    v.z = vector->z/m;

    return v;
}

Vector reverse(Vector *vector)
{
    Vector v;
    v.x = -vector->x;
    v.y = -vector->y;
    v.z = -vector->z;

    return v;
}

Vector addition(Vector *vector1, Vector *vector2)
{
    Vector v;
    v.x = vector1->x + vector2->x;
    v.y = vector1->y + vector2->y;
    v.z = vector1->z + vector2->z;

    return v;
}

Vector substraction(Vector *vector1, Vector *vector2)
{
    Vector v;
    v.x = vector1->x - vector2->x;
    v.y = vector1->y - vector2->y;
    v.z = vector1->z - vector2->z;

    return v;
}

double dotProduct(Vector *vector1, Vector *vector2)
{
    return vector1->x*vector2->x + vector1->y*vector2->y + vector1->z*vector2->z;
}

Vector crossProduct(Vector *vector1, Vector *vector2)
{
    Vector v;
    v.x = vector1->y*vector2->z - vector1->z*vector2->y;
    v.y = -vector1->x*vector2->z + vector1->z*vector2->x;
    v.z = vector1->x*vector2->y - vector1->y*vector2->x;

    return v;
}

Vector multiplication(Vector *vector, double constant)
{
    Vector v;
    v.x = vector->x*constant;
    v.y = vector->y*constant;
    v.z = vector->z*constant;
    return v;
}

Vector division(Vector *vector, double constant)
{
    Vector v;
    v.x = vector->x/constant;
    v.y = vector->y/constant;
    v.z = vector->z/constant;
    return v;
}

double tripleScalar(Vector *vector1, Vector *vector2, Vector *vector3)
{
    double dx = vector2->y*vector3->z - vector2->z*vector3->y;
    double dy = -vector2->x*vector3->z + vector2->z*vector3->x;
    double dz = vector2->x*vector3->y - vector2->y*vector3->x;

    return vector1->x*dx + vector1->y*dy + vector1->z*dz;
}

#endif // VECTOR_C_INCLUDED
