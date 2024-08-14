#ifndef MESH_H
#define MESH_H

#include "triangle.h"
#include "vector.h"

#define N_CUBE_VERTECES 8
#define N_CUBE_FACES (6 * 2) // 6 cube faces, 2 triangles per face

extern vec3_t cube_vertices[N_CUBE_VERTECES];
extern face_t cube_faces[N_CUBE_FACES];

// Define a struct for dynamic size meshes
typedef struct {
  vec3_t* vertices;   // dynamic array of vertices
  face_t* faces;      // dynamic array of faces
  vec3_t rotation;    // rotation with x, y and z values
  vec3_t scale;       // scale with x, y, z values
  vec3_t translation; // translation with x, y, and z values
} mesh_t;

extern mesh_t mesh;

void load_cube_mesh_data(void);
void load_obj_file_data(char* filename);

void print_mesh(mesh_t m);

#endif


