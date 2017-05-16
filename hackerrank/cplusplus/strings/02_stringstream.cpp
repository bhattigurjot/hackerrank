#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	vector<int> temp;
	int val;
	stringstream ss(str);
	char ch;

	while (ss) {
		ss >> val >> ch;
		temp.push_back(val);
	}

	return temp;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}