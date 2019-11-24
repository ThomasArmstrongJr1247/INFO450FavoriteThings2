#include <string>
#include <iostream>
#include<fstream>
#include "Discography.h"
#include "DiscographyList.h"
using namespace std;
int main() {
	int userchoice = 0;
	cout << "*****************Welcome to Thomas' Discography Program*****************" << endl;
	cout << "User Menu: ";
	cout << "Please input:(1)to read from a file, (2) to Add new Albums,(3) to display current running list (4) to save current list to file, or (5) to exit program." << endl;
	cin >> userchoice;
	do
	{
		DiscographyList albumList;
		do
		{
			if (userchoice == 2)
			{
				albumList.AddAlbum();
			}
			else
				albumList.showDiscoList(); 

		} while (((userchoice!=1)&&(userchoice==2))||((userchoice!=4)&&(userchoice==3)));
		while (userchoice == 1 || userchoice == 4) {
			string filename;
			if (userchoice == 1)
			{
				cout << "Name file to read from > (Ex:C:\\Users\\T-daw\\Documents\\test.txt)" << endl;
				getline(cin, filename);
				albumList.readFromFile(filename);
			}
			else
			{
				cout << "Name file to save to > (Ex:C:\\Users\\T-daw\\Documents\\test.txt)";
				getline(cin, filename);
				albumList.writeToFile(filename);
			}
		}
		cout << "*****************Welcome to Thomas' Discography Program*****************" << endl;
		cout << "User Menu: ";
		cout << "Please input:(1)to read from a file, (2) to Add new Albums,(3) to display current running list (4) to save current list to file, or (5) to exit program." << endl;
		cin >> userchoice;
	} while (userchoice != 5);
	cout << "Thank You. Exiting Program";
	system("exit");
	return 0;
}


	/*	DiscographyList albumList;
		if (userchoice == 1) {
			albumList.readFromFile("C:\\Users\\T-daw\\Documents\\discotest.txt");
		}
		if (userchoice == 2) {
			albumList.AddAlbum();
		}
		if (userchoice == 3) {
			albumList.showDiscoList();
	*/
	/*while (*setId(int id) != &id);
	{
		albumList.showDiscoList();
	}*/
