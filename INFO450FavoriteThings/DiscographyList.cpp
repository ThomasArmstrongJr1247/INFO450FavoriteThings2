#include <string>
#include <iostream>
#include <fstream>
#include "Discography.h"
#include "DiscographyList.h"
using namespace std;

DiscographyList::DiscographyList() {
	numAlbums = 0;
	totalAlbums = 0;

}
void DiscographyList::AddAlbum() {
	albums[numAlbums].getDiscographyInput();
	totalAlbums += albums[numAlbums].getQuantity();
	numAlbums++;
}
void DiscographyList::showDiscoList()
{
	int i;
	for (i = 0; i < numAlbums; i++)
	{
		cout << albums[i];
	}
	cout << "the total amount of albums on your list is : " << totalAlbums << endl;
}
int DiscographyList::writeToFile(string filename) {
	int i;
	ofstream outPFile;
	outPFile.open(filename, ios::app);
	if (outPFile.bad()) {
		cout << "Error - File has Failed to Open" << endl;
		return -2;
	}
	for (i = 0; i < numAlbums; i++)
	{
		outPFile << albums[i].getId() << "|";
		outPFile << albums[i].getAlbumName() << "|";
		outPFile << albums[i].getArtist() << "|";
		outPFile << albums[i].getQuantity() << "|";
		outPFile << albums[i].getYear() << "|" << endl;
	}
	outPFile.close();
	return 0;
}
int DiscographyList::readFromFile(string filename)
{
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (inputFile.bad()) {
		cout << "Error - File has Failed to Open" << endl;
		return -1;
	}

	//create bookmark for items
	int id;
	string AlbumName;
	string Artist;
	int qty;
	int Year;
	string inputstring;
	while (!inputFile.eof()) {
		//Reading from the file
		getline(inputFile, inputstring, '|');
		if (inputstring.length() >= 1)
		{
			id = stoi(inputstring);
			getline(inputFile, AlbumName, '|');
			getline(inputFile, inputstring, '|');
			getline(inputFile, Artist, '|');
			getline(inputFile, inputstring, '|');
			qty = stoi(inputstring);
			getline(inputFile, inputstring, '|');
			Year = stoi(inputstring);
			getline(inputFile, inputstring, '\n');

			//now add data to objects
			albums[numAlbums].setId(id);
			albums[numAlbums].setAlbumName(AlbumName);
			albums[numAlbums].setArtist(Artist);
			albums[numAlbums].setYear(Year);
			albums[numAlbums].setQuantity(qty);
			numAlbums++;
			totalAlbums += qty;
		}
	}
	inputFile.close();
	return 0;
}
