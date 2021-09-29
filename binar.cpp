#include <iostream>
using namespace std;

void L(char valoare, int bin[], int poz);
void G(char valoare, int bin[], int poz);
void R(char valoare, int bin[], int poz);

int *binary(string c) 
{
	static int b[95]; // sirul de 95 de valori binare

	//codificare inceput: 101
	b[0] = b[2] = 1;
	b[1] = 0;

	//codificare prima parte a codului: apelez functiile L() si G()
	L(c[1], b, 3);
	G(c[2], b, 10);
	G(c[3], b, 17);
	L(c[4], b, 24);
	L(c[5], b, 31);
	G(c[6], b, 38);

	//codificare mijloc: 01010
	b[45] = b[47] = b[49] = 0;
	b[46] = b[48] = 1;

	//codificare a doua parte a codului: apelez functia R():
	for (int i = 0; i < 6; i++) {
		R(c[7 + i], b, 50 + i * 7);
	}

	//codificare final: 101
	b[92] = b[94] = 1;
	b[93] = 0;

	return b;
}
