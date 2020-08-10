#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std; 
string to_string(int a){
	stringstream s;
	s << a;
	return s.str();
}
int main() 
{ 
	int a;
	cin>>a;
    string s = to_string(a);
  
    reverse(s.begin(), s.end()); 
  
    cout << s; 
    return 0; 
} 
