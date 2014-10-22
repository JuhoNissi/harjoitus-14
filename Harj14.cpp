/***********************************
*Tehtävä: Harjoitus 14 (Palautus vko 45)
*Tekijä: Juho Nissi
*Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
*Anna (kaikki) etunimesi (merkkijono):
*Anna kengannumero (kokonaisluku):
*Anna sukunimi (merkkijono):
*Anna koulumatka (reaaliluku):
*Anna osoitteesi:
*Anna postinumero:
*
*Ohjelma tulostaa tiedot seuraavasti:
*sukunimi etunimet
*osoite
*postinumero
*kengannumero ja koulumatka
*
*Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*Versio 1.0
*Päiväys: 22.10.2014
**************************************/

#include <iostream>
using namespace std;

void main()
{
	char etunimet[150];
	int kenka;
	char sukunimi[50];
	float matka;
	char osoite[100];
	int posti;

	cout << "\nAnna kaikki etunimesi: ";
	cin.getline(etunimet, 150);
	cout << "\nAnna kenkasi koko: ";
	cin >> kenka;
	cout << "\nAnna sukunimesi: ";
	cin.get();
	cin.getline(sukunimi, 50);
	cout << "\nAnna kuolumatka (km): ";
	cin >> matka;
	cout << "\nAnna osoitteesi: ";
	cin.get();
	cin.getline(osoite, 100);
	cout << "\nAnna postinumerosi: ";
	cin >> posti;

	cout << "\nNimesi on " << etunimet << " " << sukunimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nPostinumerosi on " << posti;
	cout << "\nKengannumerosi on " << kenka << " ja koulumatkasi on " << matka << " km" << endl;
}