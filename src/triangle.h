#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "vector.h"
#include <stdio.h>

typedef struct {
  int a;
  int b;
  int c;
} face_t;

typedef struct {
  vec2_t points[3];
} triangle_t;

void print_face(face_t f);

#endif
