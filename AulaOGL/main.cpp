#include "header_core.h"
const int W = 800, H = 600; // Tamanho da janela

int main() {
	if (!glfwInit()) return -1; // Inicializar nossa biblioteca opengl
	GLFWwindow *window = glfwCreateWindow(W, H, "Janela OpenGL", NULL, NULL); //Cria o modo janela e seu contexto OpenGL
	if (!window) { glfwTerminate(); return -1; } // Verificar se ok

	glfwMakeContextCurrent(window);// Define o atual contexto com a janela window

	inicializar(W, H, BACKGROUND); // gl_control.h

	while (!glfwWindowShouldClose(window)) { // loop ...
		glfwPollEvents();
		eventos(window); // header_core.h

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//apagar cor e informacao de profundidade, para que possamos renderizar.

		tetraedro();

		glfwSwapBuffers(window);// Troca entre front e back buffer.
	}

	glfwTerminate();
	return 0;
}
