#include "camera.h"
#include "matrix.h"
#include "vector.h"

static camera_t camera;

vec3_t camera_get_position() {
    return camera.position;
}

vec3_t camera_get_direction() {
    return camera.direction;
}

void init_camera(vec3_t position, vec3_t direction, vec3_t forward_velocity, float yaw, float pitch) {
    camera.position = position;
    camera.direction = direction;
    camera.forward_velocity = forward_velocity;
    camera.yaw = yaw;
    camera.pitch = pitch;
} 

void camera_rotate(vec3_t target) {
    mat4_t camera_yaw_rotation = mat4_make_rotation_y(camera.yaw);
    mat4_t camera_pitch_rotation = mat4_make_rotation_x(camera.pitch);
    mat4_t rotation_matrix = mat4_mul_mat4(camera_yaw_rotation, camera_pitch_rotation);
    camera.direction = vec3_from_vec4(mat4_mul_vec4(rotation_matrix, vec4_from_vec3(target)));
}


void camera_decrease_pos_y(float amount) {
    camera.position.y -= amount;
}

void camera_increase_pos_y(float amount) {
    camera.position.y += amount;
}

void camera_decrease_yaw(float amount) {
    camera.yaw -= amount;
}

void camera_increase_yaw(float amount) {
    camera.yaw += amount;
}

void camera_decrease_pitch(float amount) {
    camera.pitch -= amount;
}

void camera_increase_pitch(float amount) {
    camera.pitch += amount;
}

void camera_move_forward(float amount) {
    camera.forward_velocity = vec3_mul(camera.direction, amount);
    camera.position = vec3_add(camera.position, camera.forward_velocity);
}

void camera_move_backward(float amount) {
    camera.forward_velocity = vec3_mul(camera.direction, amount); 
    camera.position = vec3_sub(camera.position, camera.forward_velocity);
}
