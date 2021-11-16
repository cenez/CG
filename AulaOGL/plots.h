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
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);//GL_LINE GL_FILL
	triangulo(v2, v3, v0, WHITE);
	triangulo(v2, v7, v0, BLUE);
	triangulo(v7, v6, v0, GRAY);
	triangulo(v6, v3, v0, GREEN);
}

void circulo() {
	double raio = diametro / 2.0;
	glColor3fv(GREEN);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_TRIANGLE_STRIP);
	for (int i = 0; raio > 0.0001; i++) {
		for (double angle = 0.0f; angle < 360; angle = angle + 2) {
			double rad = 2 * angle / 10;
			double x = raio * sin(rad);
			double y = raio * cos(rad);
			glVertex3f(x, y, 0.0f);
		}
		raio -= 0.01;
	}

	glEnd();
	glFlush();
}

#endif
