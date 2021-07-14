#pragma once
#include <iostream>
#include <vector>
using namespace std;

class CVideo
{
private:
	string titel;
	string format;
	string genre;
	int jahr = 0;
	int laufzeit = 0;

	string titelneu;
	string formatneu;
	string genreneu;
	int jahrneu = 0;
	int laufzeitneu = 0;
	string suche;
	int minuten= 0;

public:
	void setTitel();
	void setFormat();
	void setGenre();
	void setJahr();
	void setLaufzeit();

	void loescheVideoEintrag();
	void zeigeVideoEintrag();

	void changeTitel(int a);
	void changeFormat(int a);
	void changeGenre(int a);
	void changeJahr(int a);
	void changeLaufzeit(int a);

	void sucheTitel();
	void sucheFormat();
	void sucheGenre();
	void sucheJahr();
	void sucheLaufzeit();

	vector<string> vec_vid_titel = {"Matrix", "Koenig der Loewen", "Der Pate", "Inception", "Batman Begins"};
	vector<string> vec_vid_format = {"DVD", "VHS", "VHS", "BluRay", "DVD", "BluRay"};
	vector<string> vec_vid_genre = {"Science-Fiction", "Comic", "Mafia", "Science-Fiction", "Comic"};
	vector<int> vec_vid_jahr = {2000, 1990, 1970, 2010, 2015};
	vector<int> vec_vid_laenge = {95, 90, 130, 110, 105};


};

