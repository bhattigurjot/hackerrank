#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}
	for (vector<int>::reverse_iterator i = arr.rbegin(); i != arr.rend(); i++) {
		cout << *i;
		cout << " ";
	}
	return 0;
}