#ifndef GL_CONTROLE_H
#define GL_CONTROLE_H

void move_control(float angle, float movex, float movey, float cx, float cy, float cz) {
	glLoadIdentity();
	glTranslated(movex, movey, -40); // Setas: -> <- 
	glRotated(angle, cx, cy, cz); // PG UP e PG DOWN
}

void redimensionar(const int W, const int H) {
	float fovy = 45.0;
	float aspect = (float)W / (float)H; 
	float zNear = 0.1;
	float zFar = 100;

	glViewport(0, 0, W, H);
	glMatrixMode(GL_PROJECTION); // Define um modo de visao PROJECTION
	glLoadIdentity(); // Carrega a matriz identidade
	gluPerspective(fovy, aspect, zNear, zFar);
	glMatrixMode(GL_MODELVIEW); // Define um modo de visao MODELVIEW
}

void inicializar(const int W, const int H, const color BG) {
	glClearColor(BG[0], BG[1], BG[2], 1.0); // Definir o fundo, porque ele vai limpar a janela com a cor padrao do BG

	//glLineWidth(3);

	redimensionar(W, H);
	glEnable(GL_DEPTH_TEST);
}

#endif
