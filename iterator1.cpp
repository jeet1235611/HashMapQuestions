#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	unordered_map<string, int> ourmap;
	ourmap["abc"] = 1;
	ourmap["abc1"] = 2;
	ourmap["abc2"] = 3;
	ourmap["abc3"] = 4;
	ourmap["abc4"] = 5;
	ourmap["abc5"] = 6;
	ourmap["abc6"] = 7;
	ourmap["abc7"] = 8;
	ourmap["abc8"] = 9;
	ourmap["abc9"] = 10;

	unordered_map<string, int> :: iterator it = ourmap.begin();
	while(it != ourmap.end()){
		cout << "Key: " << it -> first << " Value: " << it -> second << endl;
		it++;
	}

	vector<int> v;
	//vector<int> :: iterator it1 = v.begin();
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	
	vector<int> :: iterator it1 = v.begin();
	while(it1 != v.end()){
		cout << *it1 << endl;
		it1++;
	}	
}
