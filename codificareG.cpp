#include <iostream>
using namespace std;

void G(char valoare, int bin[], int poz)
{
	switch (valoare) {
		case '0': // 0100111
			bin[poz] = bin[poz + 2] = bin[poz + 3] = 0;
			bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '1': // 0110011
			bin[poz] = bin[poz + 3] = bin[poz + 4] = 0;
			bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '2': // 0011011
			bin[poz] = bin[poz + 1] = bin[poz + 4] = 0;
			bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
		case '3': // 0100001
			bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 0;
			bin[poz + 1] = bin[poz + 6] = 1;
			break;
		case '4': // 0011101
			bin[poz] = bin[poz + 1] = bin[poz + 5] = 0;
			bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
			break;
		case '5': // 0111001
			bin[poz] = bin[poz + 4] = bin[poz + 5] = 0;
			bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 1;
			break;
		case '6': // 0000101
			bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = 0;
			bin[poz + 4] = bin[poz + 6] = 1;
			break;
		case '7': // 0010001
			bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 0;
			bin[poz + 2] = bin[poz + 6] = 1;
			break;
		case '8': // 0001001
			bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = 0;
			bin[poz + 3] = bin[poz + 6] = 1;
			break;
		case '9': // 0010111
			bin[poz] = bin[poz + 1] = bin[poz + 3] = 0;
			bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
			break;
	}
}
