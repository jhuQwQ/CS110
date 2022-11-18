#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int SIZE = 51;
	char fileName[SIZE];
	char line[80];
	ifstream file;
	
	cout << "enter a file name: ";
	cin >> fileName;
	file.open(fileName, ios::in);
	
	for(int i=1; !file.eof(); i++)
	{
		file.getline(line, 80);
		cout << i <<": " << line << endl;

		if (i % 24 == 0) 
		{
			cout << "press any key to continue" << endl;
			getchar();
      cin.ignore(); 
		}
		
		
	}
	
	file.close();
	return 0;
}