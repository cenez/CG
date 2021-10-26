// Controlar includes e eventos
#ifndef CORE_BASE_H
#define CORE_BASE_H
#include <iostream>
#include <thread>
#include <math.h>
#include <GLFW/glfw3.h>
#include <GL/glut.h>
#include "colors.h"
#include "gl_controls.h"
#include "data.h"
#include "plots.h"

void eventos(GLFWwindow* window) {//, float *angle, float *movex, float *movey, float *cx, float *cy, float *cz, int xlen, int ylen) {
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
}

#endif
