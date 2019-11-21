#pragma once
#include<string>
#include<iostream>
#include"Discography.h"

using namespace std;

class Discomenu
{
private:
	int userinput;
	int numAlbums;
	int totalAlbums;
public:
	Discomenu();
	Discomenu(int ui);
	void AddAlbum();
	void showDiscoList();
	int ucRead(string filename);
	int ucSave(string filename);
};
