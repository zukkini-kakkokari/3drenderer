#include <math.h>
#include <stdio.h>
#include "vector.h"

// Implementations of Vector 2D function
float vec2_length(vec2_t v) {
  return sqrt(v.x * v.x + v.y * v.y);  
}

// Implementations of Vector 3D function
float vec3_length(vec3_t v) {
  return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);  
}


vec3_t vec3_rotate_x(vec3_t v, float angle) {
  vec3_t rotated_vector = {
    .x = v.x,
    .y = v.y * cos(angle) - v.z * sin(angle),
    .z = v.y * sin(angle) + v.z * cos(angle)
  };
  return rotated_vector;
}

vec3_t vec3_rotate_y(vec3_t v, float angle) {
  vec3_t rotated_vector = {
    .x = v.x * cos(angle) - v.z * sin(angle),
    .y = v.y,
    .z = v.x * sin(angle) + v.z * cos(angle)
  };
  return rotated_vector;
}

vec3_t vec3_rotate_z(vec3_t v, float angle) {
  vec3_t rotated_vector = {
    .x = v.x * cos(angle) - v.y * sin(angle),
    .y = v.x * sin(angle) + v.y * cos(angle),
    .z = v.z
  };
  return rotated_vector;
}

// Debug
void print_vec3_t(vec3_t v) {
  printf("x: %f, y: %f, z: %f\n", v.x, v.y, v.z);
}
