#include <string>   // #include <string> und "getline()" für Eingaben inkl Leerzeichen
#include <algorithm>
#include <iomanip> 
#include "CBuch.h"


// CBuch::setMethoden lassen den Benutzer einen string bzw Zahlenwert eingeben, 
// welcher in einem dazugehörigen vector am Ende gespeichert wird.
void CBuch::setAutor() {
	cout << "Name des Autors: ";
	cin.ignore();
	getline(cin, autor);
	vec_autor.push_back(autor);
}

void CBuch::setTitel() {
	cout << "Name des Titels: ";
	getline(cin, titel);
	vec_titel.push_back(titel);
}

void CBuch::setVerlag() {
	cout << "Name des Verlags: ";
	getline(cin, verlag);
	vec_verlag.push_back(verlag);
}

void CBuch::setPreis() {
	cout << "Preis: ";
	cin >> preis;
	vec_preis.push_back(preis);
}

void CBuch::setJahr() {
	cout << "Erscheinungsjahr: ";
	cin >> jahr;
	vec_jahr.push_back(jahr);
}

// For Schleife für die Ausgabe der einzelnen Elemente aus den Vectoren
// "setw(x) << left <<" --> setze den nächsten Ausdruck in eine feste Spalte von x Zeichen, linksbündig
void CBuch::zeigeEintrag() {
	for (unsigned int i = 1; i < vec_autor.size() && i < vec_titel.size() && i < vec_verlag.size() && i < vec_jahr.size() && i < vec_preis.size(); i++)
		cout << setw(5) << left << i << setw(30) << left << vec_autor[i] << setw(30) << left << vec_titel[i] << setw(20) << left << vec_verlag[i] << setw(20) << left << vec_jahr[i] << vec_preis[i] << " Euro" << "\n";

}

// die CBuch::change Methoden greifen auf ein vom Benutzer ausgewähltes Element aus dem Vector zu 
// und lassen ihn einen neuen Wert eingeben
void CBuch::changeAutor(int a) {

	cout << "Neuer Autor: ";
	cin.ignore();
	getline(cin, autorNeu);
	vec_autor[a] = autorNeu;
}
void CBuch::changeTitel(int a) {

	cout << "Neuer Titel: ";
	cin.ignore();
	getline(cin, titelNeu);
	vec_titel[a] = titelNeu;
}

void CBuch::changeVerlag(int a) {

	cout << "Neuer Verlag: ";
	cin.ignore();
	getline(cin, verlagNeu);
	vec_verlag[a] = verlagNeu;
}

void CBuch::changeJahr(int a) {

	cout << "Neues Jahr: ";
	cin >> jahrNeu;
	vec_jahr[a] = jahrNeu;
}


void CBuch::changePreis(int a) {

	cout << "Neuer Preis: ";
	cin >> preisNeu;
	vec_preis[a] = preisNeu;
}

// Zum Löschen eines Eintrags benutze ich die vector.erase() Funktion an der Stelle 
// von vector.begin() + die vom Benutzer eingegebene Nummer
void CBuch::loescheEintrag() {

	int b;
	cout << "Welchen Eintrag moechtest du loeschen? "; cin >> b; cout << "\n";
	vec_autor.erase(vec_autor.begin() + b); vec_titel.erase(vec_titel.begin() + b); vec_verlag.erase(vec_verlag.begin() + b); vec_jahr.erase(vec_jahr.begin() + b); vec_preis.erase(vec_preis.begin() + b);
}


// Methoden um im jeweiligen Vector nach einem Suchbegriff zu suchen
// mit der count funktion wird der vector durchlaufen und nach der variable "finde" zu suchen
// durch eine For Schleife lasse ich alle Elemente ausgeben

void CBuch::sucheAutor() {
	cout << "Suchbegriff: ";
	cin.ignore();
	getline(cin, finde);
	if (count(vec_autor.begin(), vec_autor.end(), finde) ) { 
		for (unsigned int i = 0; i < vec_autor.size(); i++) 
			if (vec_autor[i] == finde) {
				cout << setw(5) << left << i << setw(30) << left << vec_autor[i] << setw(30) << left << vec_titel[i] << setw(20) << left << vec_verlag[i] << setw(20) << left << vec_jahr[i] << vec_preis[i] << " Euro" << "\n";

		}
	}
	else
		cout << "Kein Eintrag gefunden!\n";
	
}

void CBuch::sucheTitel() {
	cout << "Suchbegriff: ";
	cin.ignore();
	getline(cin, finde);
	if (count(vec_titel.begin(), vec_titel.end(), finde)) { 
		for (unsigned int i = 0; i < vec_titel.size(); i++)
			if (vec_titel[i] == finde)
				cout << setw(5) << left << i << setw(30) << left << vec_autor[i] << setw(30) << left << vec_titel[i] << setw(20) << left << vec_verlag[i] << setw(20) << left << vec_jahr[i] << vec_preis[i] << " Euro" << "\n";

	}
	else
		cout << "Kein Eintrag gefunden!\n";
}

void CBuch::sucheVerlag() {
	cout << "Suchbegriff: ";
	cin.ignore();
	getline(cin, finde);
	if (count(vec_verlag.begin(), vec_verlag.end(), finde)) {
		for (unsigned int i = 0; i < vec_verlag.size(); i++)
			if (vec_verlag[i] == finde)
				cout << setw(5) << left << i << setw(30) << left << vec_autor[i] << setw(30) << left << vec_titel[i] << setw(20) << left << vec_verlag[i] << setw(20) << left << vec_jahr[i] << vec_preis[i] << " Euro" << "\n";

	}
	else
		cout << "Kein Eintrag gefunden!\n";
}

void CBuch::suchePreis() {
	cout << "Suchbegriff: ";
	cin >> preisfinder;
	if (count(vec_preis.begin(), vec_preis.end(), preisfinder)) { 
		for (int i = 0; i < vec_preis.size(); i++)
			if (vec_preis[i] == preisfinder)
				cout << setw(5) << left << i << setw(30) << left << vec_autor[i] << setw(30) << left << vec_titel[i] << setw(20) << left << vec_verlag[i] << setw(20) << left << vec_jahr[i] << vec_preis[i] << " Euro" << "\n";

	}
	else
		cout << "Kein Eintrag gefunden!\n";
}

void CBuch::sucheJahr() {
	cout << "Suchbegriff: ";
	cin.ignore();
	cin >> preisfinder;
	if (count(vec_jahr.begin(), vec_jahr.end(), preisfinder)) {
		for (int i = 0; i < vec_jahr.size(); i++)
			if (vec_jahr[i] == preisfinder)
				cout << setw(5) << left << i << setw(30) << left << vec_autor[i] << setw(30) << left << vec_titel[i] << setw(20) << left << vec_verlag[i] << setw(20) << left << vec_jahr[i] << vec_preis[i] << " Euro" << "\n";

	}
	else
		cout << "Kein Eintrag gefunden!\n";
}




