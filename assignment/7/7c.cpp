#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    string line;
    fstream fin;
    int count = 1;
    cout << "Enter file name ::: " ;
    getline(cin,filename);

    fin.open(filename.c_str(), ios::in );

    if(!fin)
    {

            cout << " Error openning the file\n";
            return -1;
    }

    while( getline(fin, line ))
    {
        cout << "line  " << count << " : " <<line << endl;
        if(count % 24 == 0)
        {
          cout << "Press enter to continue\n";
          cin.get();
        }
        count++;

    }
    fin.close();
    return 0;
  }