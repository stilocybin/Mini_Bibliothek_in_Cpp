#include <iostream>
#include <string>
#include <iomanip>   //nötig um feste spaltenbreiten ausgeben zu können
#include "CBuch.h"
#include "CVideo.h"

using namespace std;


int main() {

	int k = 0;

		cout << "\tWillkommen! Schauen Sie sich um in der \n";
		cout << "\t(1)Bibliothek oder (2)Videothek? "; cin >> k;



	if(k == 1){

			CBuch buch;
			char c = '1';
			int wahl = 0;

			do {
				cout << "Eine kleine Bibliothek\n\n";
				cout << "\t(1) Fuege ein Buch hinzu\n";
				cout << "\t(2) Zeige mir alle Buecher\n";
				cout << "\t(3) Aendere Eintrag\n";
				cout << "\t(4) Loesche Eintrag\n";
				cout << "\t(5) Suche\n";
				cout << "\t(6) Beenden\n\n";
				cout << "Was moechten Sie tun? "; cin >> wahl; cout << "\n";




				switch (wahl) {

				case 1:
					// in case 1 kann der Benutzer neue Bücher eintragen und anschließend zurück ins Hauptmenü (siehe CBuch.cpp)
					char x;
					do {
						buch.setAutor();
						buch.setTitel();
						buch.setVerlag();
						buch.setJahr();
						buch.setPreis();
						cout << "Noch ein Buch? (J/N) "; cin >> x; cout << "\n";
					} while (x == 'J' || x == 'j');
					break;

				case 2:
					// Methode zum Anzeigen aller Einträge(siehe CBuch.cpp)
					cout << setw(5) << left << "#" << setw(30) << left << "Autor" << setw(30) << left << "Titel" << setw(20) << left << "Verlag" << setw(20) << left << "Jahr" << setw(20) << left << "Preis \n" << endl;
					buch.zeigeEintrag();
					break;


				case 3:
					//Methoden zum aendern von Einträgen (siehe CBuch.cpp)
					int a;
					int q;
					do {
						cout << "Welchen Eintrag moechtest du aendern? "; cin >> a;
						cout << "(1)Autor \t(2)Titel \t(3)Verlag \t(4)Jahr \t(5)Preis ? "; cin >> q;
						switch (q) {
						case 1:
							buch.changeAutor(a);
							break;
						case 2:
							buch.changeTitel(a);
							break;
						case 3:
							buch.changeVerlag(a);
							break;
						case 4:
							buch.changeJahr(a);
							break;
						case 5:
							buch.changePreis(a);
							break;
						}

						cout << "Noch eine Aenderung? (J/N) "; cin >> c;
					} while (c == 'J' || c == 'j');
					break;


				case 4:
					//einfache Methode zum löschen eines Eintrags
					do {
						buch.loescheEintrag();
						buch.zeigeEintrag();
						cout << "Noch einen Eintrag loeschen? (J/N) "; cin >> c;
					} while (c == 'J' || c == 'j');

					break;

				case 5:
					//Suchfunktion, Der Benutzer kann spezifisch nach einer Kategorie suchen
					//er wird dann in den richtigen case geleitet
					do {

						int s;
						cout << "Wonach moechtest du suchen?\n";
						cout << "(1)Autor \t(2)Titel \t(3)Verlag \t(4)Jahr \t(5)Preis\n";
						cout << "Suche nach: "; cin >> s;

						switch (s) {
						case 1:
							buch.sucheAutor();
							break;
						case 2:
							buch.sucheTitel();
							break;
						case 3:
							buch.sucheVerlag();
							break;
						case 4:
							buch.sucheJahr();
							break;
						case 5:
							buch.suchePreis();
							break;
						}

						cout << "\nNeue Suche? (J/N) "; cin >> c;
					} while (c == 'J' || c == 'j');
					break;

				case 6:
					return 0;

				default:
					if (wahl != 1 || 2 || 3 || 4 || 5 || 6)
						cout << "Ungueltige Eingabe\n";
					break;
				}
				cout << "Zurueck zum Menue? (J/N) "; cin >> c; cout << "\n";
			} while (c == 'J' || c == 'j');

		} 

			
	if(k == 2) {
		CVideo video;
		char c = '1';
		int wahl = 0;

		do {
			cout << "Eine kleine Videothek\n\n";
			cout << "\t(1) Fuege einen Film hinzu\n";
			cout << "\t(2) Zeige mir alle Filme\n";
			cout << "\t(3) Aendere Eintrag\n";
			cout << "\t(4) Loesche Eintrag\n";
			cout << "\t(5) Suche\n";
			cout << "\t(6) Beenden\n\n";
			cout << "Was moechten Sie tun? "; cin >> wahl; cout << "\n";

			switch (wahl) {

			case 1:
				char x;
				do {
					video.setTitel();
					video.setFormat();
					video.setGenre();
					video.setJahr();
					video.setLaufzeit();
					cout << "Noch ein Film? (J/N) "; cin >> x; cout << "\n";
				} while (x == 'J' || x == 'j');
				break;

			case 2:
				cout << setw(5) << left << "#" << setw(30) << left << "Titel" << setw(30) << left << "Format" << setw(20) << left << "Genre" << setw(20) << left << "Erscheinungsjahr" << setw(20) << left << "Laufzeit \n" << endl;
				video.zeigeVideoEintrag();
				break;

			case 3:
				int a;
				int q;
				do {
					cout << "Welchen Eintrag moechtest du aendern? "; cin >> a;
					cout << "(1)Titel \t(2)Format \t(3)Genre \t(4)Jahr \t(5)Laufzeit ? "; cin >> q;
					switch (q) {
					case 1:
						video.changeTitel(a);
						break;
					case 2:
						video.changeFormat(a);
						break;
					case 3:
						video.changeGenre(a);
						break;
					case 4:
						video.changeJahr(a);
						break;
					case 5:
						video.changeLaufzeit(a);
						break;
					}

					cout << "\nNoch eine Aenderung? (J/N) "; cin >> c;
				} while (c == 'J' || c == 'j');
				break;

			case 4:
				do {
					video.loescheVideoEintrag();
					video.zeigeVideoEintrag();
					cout << "Noch einen Eintrag loeschen? (J/N) "; cin >> c;
				} while (c == 'J' || c == 'j');

				break;

			case 5:

				do {

					int s;
					cout << "Wonach moechtest du suchen?\n";
					cout << "(1)Titel \t(2)Format \t(3)Genre \t(4)Jahr \t(5)Laufzeit\n";
					cout << "Suche nach: "; cin >> s;

					switch (s) {
					case 1:
						video.sucheTitel();
						break;
					case 2:
						video.sucheFormat();
						break;
					case 3:
						video.sucheGenre();
						break;
					case 4:
						video.sucheJahr();
						break;
					case 5:
						video.sucheLaufzeit();
						break;
					}

					cout << "\nNeue Suche? (J/N) "; cin >> c;
				} while (c == 'J' || c == 'j');
				break;

			case 6:
				return 0;

			default:
				if (wahl != 1 || 2 || 3 || 4 || 5 || 6)
					cout << "Ungueltige Eingabe\n";
				break;

			}

			cout << "Zurueck zum Menue? (J/N) "; cin >> c; cout << "\n";
		} while (c == 'J' || c == 'j');





	}
		
	else
	cout << "Ungueltige Eingabe\n";
	
	
	
	return 0;
}