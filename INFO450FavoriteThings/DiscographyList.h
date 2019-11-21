#pragma once
#include <string>
#include <iostream>
#include "Discography.h"
using namespace std;

class DiscographyList
{
	Discography albums[100];
	int numAlbums;
	int totalAlbums;
public:
	DiscographyList();
	void AddAlbum();
	void showDiscoList();
	int readFromFile(string filename);
	int writeToFile(string filename);
};
