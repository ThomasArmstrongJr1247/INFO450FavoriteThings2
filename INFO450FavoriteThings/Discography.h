#pragma once
#include <string>
#include <iostream>

using namespace std;

class Discography
{
private:
	int identifier;
	string artist;
	string album_Name;
	int release_Year;
	int quantity;
public:
	Discography();
	Discography(int id, string a_n, string a, int Y, int q);
	int getId();
	string getAlbumName();
	string getArtist();
	int getYear();
	int getQuantity();
	void setId(int id);
	void setAlbumName(string a_n);
	void setArtist(string a);
	void setYear(int Y);
	void setQuantity(int q);
	void getDiscographyInput();
	friend ostream& operator <<(ostream& output, Discography& i);
};
