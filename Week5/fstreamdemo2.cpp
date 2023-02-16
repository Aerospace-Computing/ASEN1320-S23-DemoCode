#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// Variable Declaration
	string name[5];
	double score[5];
	
	// Open file & Test if stream operatiopn failed
	ifstream myFile;
	myFile.open("Score.txt");  
	if (myFile.fail()) cout << "Error opening input file"; 
	
	// Read to data until the end of file has been reached & Store data into arrays
	int j=0; 
	while (!myFile.eof()) 
	{
	    myFile >> name[j] >> score[j];
	    if (score[j] > 50.0) cout << name[j] << " scored above 50.0" << endl;
	    j++;
	}
    
    myFile.close();
	
	return 0; 
}