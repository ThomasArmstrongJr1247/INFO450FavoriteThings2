#include <string>
#include <iostream>

#include "Discography.h"
using namespace std;

Discography::Discography() {
	identifier;
	artist = "";
	quantity;
	release_Year;
	album_Name = "";
}
Discography::Discography(int id, string a_n, string a, int q, int Y) {
	identifier = id;
	artist = a;
	quantity = q;
	release_Year = Y;
	album_Name = a_n;
}
int Discography::getId() {
	return identifier;
}
string Discography::getAlbumName() {
	return album_Name;
}
string Discography::getArtist() {
	return artist;
}
int Discography::getQuantity() {
	return quantity;
}
int Discography::getYear() {
	return release_Year;
}
void Discography::setId(int id) {
	identifier = id;
}
void Discography::setAlbumName(string a_n) {
	album_Name = a_n;
}
void Discography::setArtist(string a) {
	artist = a;
}
void Discography::setYear(int Y) {
	release_Year = Y;
}
void Discography::setQuantity(int q) {
	quantity = q;
}
void Discography::getDiscographyInput() {
	cout << "enter an album Id" << endl;
	cin >> identifier;
	cout << "enter artist" << endl;
	cin >> artist;
	cout << "enter quantity " << endl;
	cin >> quantity;
	cout << "enter an Album Release Year" << endl;
	cin >> release_Year;
	cin.ignore();
	cout << "enter an Album Name " << endl;
	getline(cin, album_Name, '\n');
}
ostream& operator<<(ostream& output, Discography& i)
{
	output << "Discography: " << i.identifier << endl;
	output << "|" << i.artist << "|" << i.quantity << "|" << i.release_Year << "|" << i.album_Name << endl;
	return output;
}
