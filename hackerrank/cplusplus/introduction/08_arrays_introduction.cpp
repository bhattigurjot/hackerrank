#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, temp;
	vector<int> arr;
	cin >> n;
	cin.ignore();

	while (cin >> temp) {
		arr.push_back(temp);
	}

	for (vector<int>::reverse_iterator i = arr.rbegin();
		i != arr.rend(); i++) {
		cout << (*i);
		cout << " ";
	}

	return 0;
}
