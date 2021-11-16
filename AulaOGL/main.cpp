#include "header_core.h"
const int W = 800, H = 600; // Tamanho da janela

int main() {
	if (!glfwInit()) return -1; // Inicializar nossa biblioteca opengl
	GLFWwindow *window = glfwCreateWindow(W, H, "Janela OpenGL", NULL, NULL); //Cria o modo janela e seu contexto OpenGL
	if (!window) { glfwTerminate(); return -1; } // Verificar se ok

	glfwMakeContextCurrent(window);// Define o atual contexto com a janela window

	inicializar(W, H, BACKGROUND); // gl_control.h

	set_vertices(10);

	float angle = 15.0f, movex = 0.0, movey = 0.0, cx = 0.0f, cy = 0.0f, cz = 0.0f;
	while (!glfwWindowShouldClose(window)) { // loop ...
		glfwPollEvents();
		eventos(window, &angle, &movex, &movey, &cx, &cy, &cz, W, H); // header_core.h

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//apagar cor e informacao de profundidade, para que possamos renderizar.

		int width, height;
		glfwGetFramebufferSize(window, &width, &height); // Para redimensionar a janela, maximizar ou minimizar
		redimensionar(width, height);

		move_control(angle, movex, movey, cx, cy, cz);
		//tetraedro();
		circulo();


		glfwSwapBuffers(window);// Troca entre front e back buffer.
	}

	glfwTerminate();
	return 0;
}
