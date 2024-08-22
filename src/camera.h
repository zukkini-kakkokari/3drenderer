#ifndef CAMERA_H
#define CAMERA_H

#include "vector.h"

typedef struct {
    vec3_t position;
    vec3_t direction;
    vec3_t forward_velocity;
    float yaw;
    float pitch;
} camera_t;


void init_camera(vec3_t position, vec3_t direction, vec3_t forward_velocity, float yaw, float pitch);

vec3_t camera_get_position();
vec3_t camera_get_direction();

void camera_rotate(vec3_t target);

void camera_decrease_pos_y(float amount);
void camera_increase_pos_y(float amount);
void camera_move_forward(float amount);
void camera_move_backward(float amount);
void camera_decrease_yaw(float amount);
void camera_increase_yaw(float amount);
void camera_decrease_pitch(float amount);
void camera_increase_pitch(float amount);

#endif
