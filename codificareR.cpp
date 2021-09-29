#include <iostream>
using namespace std;

void R(char valoare, int bin[], int poz)
{
	switch (valoare) {
	case '0': // 1110010
		bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 1;
		break;
	case '1': // 1100110
		bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 1;
		break;
	case '2': // 1101100
		bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = 1;
		break;
	case '3': // 1000010
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 5] = 1;
		break;
	case '4': // 1011100
		bin[poz + 1] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 1;
		break;
	case '5': // 1001110
		bin[poz + 1] = bin[poz + 2] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 1;
		break;
	case '6': // 1010000
		bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 2] = 1;
		break;
	case '7': // 1000100
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 4] = 1;
		break;
	case '8': // 1001000
		bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 3] = 1;
		break;
	case '9': // 11110100
		bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 1;
		break;
	}
}
