#include<string>
#include<iostream>
#include <fstream>
#include "Discography.h"
#include"Discomenu.h"
using namespace std;
Discomenu::Discomenu() {
	userinput = 0;
}
void Discomenu::AddAlbum() {

}
Discomenu::Discomenu(int ui) {
	userinput = ui;
	cout << "Welcome to Thomas' Discography Program" << endl;
	cout << "Please input: (1)to read from file,(2) to Add new Album,(3) to display current running list,(4) to save current list to file, or(5) to exit program. " << endl;
	cin >> ui;
	if (ui == 1) {
		int ucRead(string filename);
	}
	if (ui == 2) {
		void AddAlbum();
	}
	if (ui == 3) {
		void showDiscoList();
	}
	if (ui == 4) {
		int ucSave(string filename);
	}

}