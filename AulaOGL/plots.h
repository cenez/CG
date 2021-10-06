#ifndef PLOTAGEM_H
#define PLOTAGEM_H

void triangulo(float a[3], float b[3], float c[3], const color COR) {
	glColor3fv(COR);
	glBegin(GL_TRIANGLES); // primitivas vetoriais
	glVertex3fv(a); // Plota o vertice a
	glVertex3fv(b); // Plota b
	glVertex3fv(c); // Plota c
	glEnd();
}

void tetraedro() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	triangulo(v2, v3, v0, WHITE);
}

#endif
