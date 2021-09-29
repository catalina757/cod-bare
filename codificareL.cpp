#include <iostream>
using namespace std;

void L(char valoare, int bin[], int poz)
{
	switch (valoare) {
		case '0': // 0001101
			bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 0;
			bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
			break;
		case '1': // 0011001
			bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 0;
			bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 1;
			break;
		case '2': // 0010011
			bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = 0;
			bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '3': // 0111101
			bin[poz] = bin[poz + 5] = 0;
			bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
			break;
		case '4': // 0100011
			bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 0;
			bin[poz + 1] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '5': // 0110001
			bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 0;
			bin[poz + 1] = bin[poz + 2] = bin[poz + 6] = 1;
			break;
		case '6': // 0101111
			bin[poz] = bin[poz + 2] = 0;
			bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '7': // 0111011
			bin[poz] = bin[poz + 4] = 0;
			bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '8': // 0110111
			bin[poz] = bin[poz + 3] = 0;
			bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '9': // 0001011
			bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 0;
			bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
	}
}
