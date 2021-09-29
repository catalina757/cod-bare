#include <iostream>
#include <regex>
using namespace std;

string createCode() {
	int countryCode = 594;
	string code;

	//folosesc regex pentru validarea sirului de caractere introdus de utilizator (numere intregi pozitive)
	regex regexCode("[0-9]+");

	bool codeIsCorrect = false;

	if (size(code) == 0) {
		cout << "Introduceti maxim 9 caractere, numere intregi, intre 0 si 9, fara spatii: \n";

		//executa ... atat timp cat codul este incorect
		//daca regex nu corespunde sau utilizatorul introduce mai mult de 9 caractere, cere utilizatorului sa introduca un cod corect:
		do {
			cin >> code;

			if (!regex_match(code, regexCode) || size(code) > 9) {
				cout << "Cod incorect! Introduceti maxim 9 caractere, numere intregi, intre 0 si 9, fara spatii: \n";
			}
			else {
				codeIsCorrect = true;
			}

		} while (!codeIsCorrect);
	}

	//adaugarea cifrei 7 de atatea ori cat e nevoie pentru a completa un cod mai mic de 9 caractere introdus de utilizator
	if (size(code) < 9) {
		for (int i = size(code); i < 9; i++) {
			code = "7" + code;
		}
	}

	//concatenare cod de tara:
	//string completeCode = to_string(countryCode) + stringCode;
	string completeCode = to_string(countryCode) + code;

	//calcul cifra de control (suma = cifre index impar * 3 + cifre index par):
	int s1 = 0, s2 = 0;

	for (unsigned int i = 0; i < size(completeCode); i = i + 2) {
		s2 = s2 + (completeCode[i] - '0');
		s1 = s1 + (completeCode[i + 1] - '0');
	}

	s1 = s1 * 3;
	int S = s1 + s2;
	int C = S % 10;
	int controlNumber;

	//daca restul impartirii sumei la 10 e 0, atunci cifra de control e 0; altfel, cifra de control e 10 - restul impartirii la 10:
	if (C == 0) {
		controlNumber = 0;
		//cout << "cifra control din if este: " << controlNumber << endl;
	}
	else {
		controlNumber = 10 - C;
		//cout << "cifra control din else este: " << controlNumber << endl;
	}

	//obtinerea codului de 13 caractere:
	code = completeCode + to_string(controlNumber);

	return code;
}
