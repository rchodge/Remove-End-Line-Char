#include <iostream>
#include <fstream>
using namespace std;
int main() {
  string x;
  string newx;
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  while (!fin.eof()){
    getline(fin,x,'\n');
    newx+=x;
  }
  fout<<newx<<endl;
}