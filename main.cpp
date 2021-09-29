#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string createCode();
int *binary(string c);

int main()
{
	//numele produsului
	string productName;

	cout << "Introduceti numele unui produs: \n";
	getline(cin, productName);
	
	string code = createCode();

	int *b = binary(code);
	
	// creare si deschidere fisier
	ofstream MyFile(productName + ".html");

	int pozx = 20; // De la acest x incep trasarea 

	// scriere in fisier
	MyFile << "<!Doctype html>" << endl;
	MyFile << "<html>" << endl;
	MyFile << "<head>" << endl;
	MyFile << "<title>"<< productName << "</title>" << endl;
	MyFile << "</head>" << endl;
	MyFile << "<body>" << endl;
	MyFile << "<svg height=\"150\" width=\"450\">" << endl;
	for (int i = 0; i < 95; i++) {
		//afisare text sub cod de bare:
		if (i == 0) {
			MyFile << "<text x=\"" << pozx - 20 
				<< "\" y=\"90\" font-size = \"1.5rem\" font-weight=\"bold\" font-family= \"Arial\">" 
				<< code[i] << "</text>" << endl;
		}
		else if ((i > 3 && i < 42) && (i + 3) % 7 == 0) {
			MyFile << "<text x=\"" << pozx 
				<< "\" y=\"90\" font-size = \"1.5rem\" font-weight=\"bold\" font-family= \"Arial\">" 
				<< code[(i + 3) / 7] << "</text>" << endl;
		}
		else if ((i > 42 && i < (94 - 7)) && (i + 3) % 7 == 0) {
			MyFile << "<text x=\"" << pozx + 12 
				<< "\" y=\"90\" font-size = \"1.5rem\" font-weight=\"bold\" font-family= \"Arial\">" 
				<< code[(i + 3) / 7] << "</text>" << endl;
		}

		//afisare cod de bare
		if (b[i] == 1 && ((i >= 0 && i <= 2) || (i >= 45 && i <= 49) || (i >= 92 && i <= 94))) {
			// Se traseaza o linie
			MyFile << "<line x1=\"" << pozx << "\" y1=\"20\" x2=\"" 
				<< pozx << "\" y2=\"90\" style=\"stroke:rgb(0,0,0); stroke-width:3\" />" << endl;
		}
		else if (b[i] == 1 && ((i >= 3 && i <= 44) || (i >= 50 && i <= 91))) {
			// Se traseaza o linie
			MyFile << "<line x1=\"" << pozx << "\" y1=\"20\" x2=\"" 
				<< pozx << "\" y2=\"70\" style=\"stroke:rgb(0,0,0); stroke-width:3\" />" << endl;
		}

		// Avans cu 3px, indiferent daca s-a trasat sau nu
		pozx = pozx + 3;
	}

	MyFile << "</svg>" << endl;
	MyFile << "</body>" << endl;
	MyFile << "</html>" << endl;

	// inchiderea fisierului
	MyFile.close();
}
