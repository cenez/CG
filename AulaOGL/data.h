#ifndef DATA_H
#define DATA_H

#define MAX_DIAMETRO 1

float v0[3], v1[3], v2[3], v3[3], v4[3], v5[3], v6[3], v7[3], v8[3]; // (x, y, z)
float set_vertices(float _diametro); // Prototipo
float diametro = set_vertices(MAX_DIAMETRO); // Devolve o diametro usado depois que setou vertices

void setV(float *v, float x, float y, float z) { v[0] = x; v[1] = y; v[2] = z; }

float set_vertices(float _diametro) {
	float r = _diametro / 2.0;

	setV(v0, 0, r, 0);
	setV(v1, -r, r, r);
	setV(v2, -r, -r, r);
	setV(v3, r, -r, r);
	setV(v4, r, r, r);

	setV(v5, r, r, -r);
	setV(v6, r, -r, -r);
	setV(v7, -r, -r, -r);
	setV(v8, -r, r, -r);

	return diametro = _diametro;
}


#endif