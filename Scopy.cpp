//:C02:Socpy.cpp
// copy one file to another , aline at a time
#include <string>
#include <fstream>

using namespace std;

int main(){
  ifstream in("Scopy.cpp");
  ofstream out("Scopy2.cpp");
  string s;
  while(getline(in,s)){
    out << s << "\n";
  }
}
