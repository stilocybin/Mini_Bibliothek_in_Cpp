#include <string>   // #include <string> und "getline()" für Eingaben inkl Leerzeichen
#include <algorithm>
#include <iomanip> 
#include "CVideo.h"


void CVideo::setTitel() {
	cout << "Filmtitel: ";
	cin.ignore();
	getline(cin, titel);
	vec_vid_titel.push_back(titel);
}

void CVideo::setFormat() {
	cout << "Format: ";
	cin.ignore();
	getline(cin, format);
	vec_vid_format.push_back(format);
}

void CVideo::setGenre() {
	cout << "Genre: ";
	cin.ignore();
	getline(cin, genre);
	vec_vid_genre.push_back(genre);
}

void CVideo::setJahr() {
	cout << "Erscheinungsjahr: ";
	cin >> jahr;
	vec_vid_jahr.push_back(jahr);
}

void CVideo::setLaufzeit() {
	cout << "Laufzeit: ";
	cin >> laufzeit;
	vec_vid_laenge.push_back(laufzeit);
}


void CVideo::zeigeVideoEintrag() {
	for (unsigned int i = 1; i < vec_vid_titel.size() && i < vec_vid_format.size() && i < vec_vid_genre.size() && i < vec_vid_jahr.size() && i < vec_vid_laenge.size(); i++)
		cout << setw(5) << left << i << setw(30) << left << vec_vid_titel[i] << setw(30) << left << vec_vid_format[i] << setw(20) << left << vec_vid_genre[i] << setw(20) << left << vec_vid_jahr[i] << vec_vid_laenge[i] << " Minuten" << "\n";
}



void CVideo::changeTitel(int a) {
	cout << "Neuer Titel: ";
	cin.ignore();
	getline(cin, titelneu);
	vec_vid_titel[a] = titelneu;
}

void CVideo::changeFormat(int a) {
	cout << "Neues Format: ";
	cin.ignore();
	getline(cin, formatneu);
	vec_vid_format[a] = formatneu;
}

void CVideo::changeGenre(int a) {
	cout << "Neues Genre: ";
	cin.ignore();
	getline(cin, genreneu);
	vec_vid_genre[a] = genreneu;
}

void CVideo::changeJahr(int a) {
	cout << "Neues Jahr: ";
	cin >> jahrneu;
	vec_vid_jahr[a] = jahrneu;
}

void CVideo::changeLaufzeit(int a) {
	cout << "Neue Laufzeit: ";
	cin >> laufzeitneu;
	vec_vid_laenge[a] = laufzeitneu;
}

void CVideo::loescheVideoEintrag() {
	int b;
	cout << "Welchen Eintrag moechtest du loeschen? "; cin >> b;
	vec_vid_titel.erase(vec_vid_titel.begin() + b); vec_vid_format.erase(vec_vid_format.begin() + b); vec_vid_genre.erase(vec_vid_genre.begin() + b); vec_vid_jahr.erase(vec_vid_jahr.begin() + b); vec_vid_laenge.erase(vec_vid_laenge.begin() + b);

}

void CVideo::sucheTitel() {
	cout << "Suchbegriff: ";
	cin.ignore();
	getline(cin, suche);
	if (count(vec_vid_titel.begin(), vec_vid_titel.end(), suche)) {
		for (unsigned int i = 0; i < vec_vid_titel.size(); i++)
			if (vec_vid_titel[i] == suche) {
				cout << setw(5) << left << i << setw(30) << left << vec_vid_titel[i] << setw(30) << left << vec_vid_format[i] << setw(20) << left << vec_vid_genre[i] << setw(20) << left << vec_vid_jahr[i] << vec_vid_laenge[i] << " Minuten" << "\n";

			}
	}
	else
		cout << "Kein Eintrag gefunden!\n";

}

void CVideo::sucheFormat() {
	cout << "Suchbegriff: ";
	cin.ignore();
	getline(cin, suche);
	if (count(vec_vid_format.begin(), vec_vid_format.end(), suche)) {
		for (unsigned int i = 0; i < vec_vid_format.size(); i++)
			if (vec_vid_format[i] == suche) {
				cout << setw(5) << left << i << setw(30) << left << vec_vid_titel[i] << setw(30) << left << vec_vid_format[i] << setw(20) << left << vec_vid_genre[i] << setw(20) << left << vec_vid_jahr[i] << vec_vid_laenge[i] << " Minuten" << "\n";

			}
	}
	else
		cout << "Kein Eintrag gefunden!\n";

}

void CVideo::sucheGenre() {
	cout << "Suchbegriff: ";
	cin.ignore();
	getline(cin, suche);
	if (count(vec_vid_genre.begin(), vec_vid_genre.end(), suche)) {
		for (unsigned int i = 0; i < vec_vid_genre.size(); i++)
			if (vec_vid_genre[i] == suche) {
				cout << setw(5) << left << i << setw(30) << left << vec_vid_titel[i] << setw(30) << left << vec_vid_format[i] << setw(20) << left << vec_vid_genre[i] << setw(20) << left << vec_vid_jahr[i] << vec_vid_laenge[i] << " Minuten" << "\n";

			}
	}
	else
		cout << "Kein Eintrag gefunden!\n";

}

void CVideo::sucheJahr() {
	cout << "Suchbegriff: ";
	cin.ignore();
	cin >> minuten;
	if (count(vec_vid_jahr.begin(), vec_vid_jahr.end(), minuten)) {
		for (unsigned int i = 0; i < vec_vid_jahr.size(); i++)
			if (vec_vid_jahr[i] == minuten) {
				cout << setw(5) << left << i << setw(30) << left << vec_vid_titel[i] << setw(30) << left << vec_vid_format[i] << setw(20) << left << vec_vid_genre[i] << setw(20) << left << vec_vid_jahr[i] << vec_vid_laenge[i] << " Minuten" << "\n";

			}
	}
	else
		cout << "Kein Eintrag gefunden!\n";

}

void CVideo::sucheLaufzeit() {
	cout << "Suchbegriff: ";
	cin.ignore();
	cin >> minuten;
	if (count(vec_vid_laenge.begin(), vec_vid_laenge.end(), minuten)) {
		for (unsigned int i = 0; i < vec_vid_laenge.size(); i++)
			if (vec_vid_laenge[i] == minuten) {
				cout << setw(5) << left << i << setw(30) << left << vec_vid_titel[i] << setw(30) << left << vec_vid_format[i] << setw(20) << left << vec_vid_genre[i] << setw(20) << left << vec_vid_jahr[i] << vec_vid_laenge[i] << " Minuten" << "\n";

			}
	}
	else
		cout << "Kein Eintrag gefunden!\n";

}

