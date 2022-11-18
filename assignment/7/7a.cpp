#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main() {
  string filename;
  string line;
  fstream fin;
  int count = 1;
  cout << "enter the file name:..." << endl;
  getline(cin, filename);

  fin.open(filename.c_str(), ios::in);

  if (!fin.good()) {
    cout << "error" << endl;
    exit(EXIT_FAILURE);
  }

  while (getline(fin, line)) {
    cout << "line" << count << ":" << line << endl;
    if (count == 10) {
      break;
    }
    count++;
  }
  fin.close();

  if (count <= 10 && fin.eof())
    cout << "the entire file have been read" << endl;

  return 0;
}