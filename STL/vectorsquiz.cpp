#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	vector< int > data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
	auto lower = std::lower_bound(data.begin(), data.end(), 4);
	auto upper = std::upper_bound(data.begin(), data.end(), 4);
	for(auto it = lower; it != upper; it++)
		cout << *it << ' '; //returns 4 4 4
	return 0;
}
