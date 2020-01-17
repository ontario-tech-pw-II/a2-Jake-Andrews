#include <fstream>
#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
	if (argc != 3) {
	cerr << "Need 2 files" << endl;
	return 1;
	}
	string in = argv[1]; 
    string out = argv[2];
	
 	ifstream fin;
 	ofstream fout;
	
	// check if there are enough arguments
	
	
	// open the first file
 	
	char c;
    fin.open(in);
 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
    fout.open(out);
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 