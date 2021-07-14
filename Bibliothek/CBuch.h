#pragma once
#include <iostream>
#include <vector>
using namespace std;

class CBuch
{
private:
	string titel;
	string autor;
	string verlag;
	double preis = 0;
	int jahr = 0;
	string finde;
	double preisfinder = 0;

	string titelNeu;
	string autorNeu;
	string verlagNeu;
	double preisNeu = 0;
	int jahrNeu = 0;

public:
	void setTitel();
	void setAutor();
	void setVerlag();
	void setPreis();
	void setJahr();

	void loescheEintrag();
	void zeigeEintrag();

	void changeAutor(int a);
	void changeTitel(int a);
	void changeVerlag(int a);
	void changePreis(int a);
	void changeJahr(int a);

	void sucheAutor();
	void sucheTitel();
	void sucheVerlag();
	void suchePreis();
	void sucheJahr();




	// Starter Bibliothek, damit man nicht bei jedem Programmstart Bücher einpflegen muss
	vector<string> vec_titel =  {"Herr der Ringe", "ES", "Wassermusik", "Fahrenheit 451", "The Expanse", "Der Dunkle Turm" };
	vector<string> vec_autor =  {"J.R.R. Tolkien", "Steven King", "T.C. Boyle", "Ray Bradbury", "James S. A. Corey", "Steven King" };
	vector<string> vec_verlag = {"Kiepenheuer & Witsch", "Bertelsmann", "Klett", "Langenscheidt", "Rowohlt", "Bertelsmann"};
	vector<double> vec_preis = {25.99, 20.99, 13.90, 15.99, 19.99, 23.99};
	vector<int> vec_jahr = {1970, 1980, 1990, 2002, 2000, 2001 };
};

