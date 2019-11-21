#include <string>
#include <iostream>

#include "Discography.h"
#include "DiscographyList.h"
using namespace std;
int main() {
	DiscographyList albumList;
	albumList.readFromFile("C:\\Users\\T-daw\\Documents\\discotest.txt");

	albumList.AddAlbum();
	//albumList.AddAlbum();
	//albumList.AddAlbum();
	/*while (*setId(int id) != &id);
	{
		albumList.showDiscoList();
	}*/
	albumList.showDiscoList();
	albumList.writeToFile("C:\\Users\\T-daw\\Documents\\discotest.txt");


	system("pause");
	return 0;
}
