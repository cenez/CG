#ifndef GL_CONTROLE_H
#define GL_CONTROLE_H

void redimensionar(const int W, const int H) {
	glViewport(0, 0, W, H);
	//glMatrixMode(GL_PROJECTION); // Define um modo de visao PROJECTION
	glLoadIdentity(); // Carrega a matriz identidade
	glMatrixMode(GL_MODELVIEW); // Define um modo de visao MODELVIEW
}

void inicializar(const int W, const int H, const color BG) {
	glClearColor(BG[0], BG[1], BG[2], 1.0); // Definir o fundo, porque ele vai limpar a janela com a cor padrao do BG

	redimensionar(W, H);
}

#endif
