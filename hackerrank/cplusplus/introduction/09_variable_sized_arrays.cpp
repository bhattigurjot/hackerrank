#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	vector<vector<int>> a;
	int n, q, temp, k_val, ii, jj;
	cin >> n >> q;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		cin >> temp;
		cin.ignore();

		vector<int> k;
		for (int p = 0; p < temp; p++) {
			cin >> k_val;
			cin.ignore();

			k.push_back(k_val);
		}
		a.push_back(k);
	}

	for (int r = 0; r < q; r++) {
		cin >> ii >> jj;
		cin.ignore();

		cout << a[ii][jj] << endl;
	}

	return 0;
}
