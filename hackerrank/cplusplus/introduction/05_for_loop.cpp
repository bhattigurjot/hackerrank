#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the code.
	int a, b;
	string ret[] = { "one","two","three","four","five","six","seven","eight","nine" };
	cin >> a >> b;
	// Ensure a and b are positive, and a <= b
	if (a < 0) a = 1; // not necessary
	if (b < 0) b = 1; // not necessary
	if (a > b) a = b;

	for (int i = a; i <= b; i++) {
		if (i > 0 && i <= 9) cout << ret[i - 1] << endl;
		else {
			if (i % 2 == 0) cout << "even" << endl;
			else cout << "odd" << endl;
		}
	}
	return 0;
}
