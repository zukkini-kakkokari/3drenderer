#ifndef MESH_H
#define MESH_H

#include "upng.h"
#include "vector.h"
#include "triangle.h"

////////////////////////////////////////////////////////////////////////////////
// Define a struct for dynamic size meshes, with array of vertices and faces
////////////////////////////////////////////////////////////////////////////////
typedef struct {
    vec3_t* vertices;   // mesh dynamic array of vertices
    face_t* faces;      // mesh dynamic array of faces
    upng_t* texture;    // mesh PNG texture pointer
    vec3_t rotation;    // mesh rotation with x, y, and z values
    vec3_t scale;       // mesh scale with x, y, and z values
    vec3_t translation; // mesh translation with x, y, and z values
} mesh_t;

int get_num_meshes(void);

void load_mesh(char* obj_filename, char* png_filename, vec3_t scale, vec3_t translation, vec3_t rotation);
void load_mesh_obj_data(mesh_t* mesh, char* obj_filename);
void load_mesh_png_data(mesh_t* mesh, char* png_filename);

mesh_t* get_mesh(int index);

void free_meshes(void);

#endif
