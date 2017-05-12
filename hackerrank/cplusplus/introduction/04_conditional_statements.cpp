#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	// Check constraint, 1 <= n <= 10^9
	if (n < 1) n = 1;
	else if (n > 1000000000) n = 1000000000;

	// basic method
	if (n == 1) cout << "one" << endl;
	else if (n == 2) cout << "two" << endl;
	else if (n == 3) cout << "three" << endl;
	else if (n == 4) cout << "four" << endl;
	else if (n == 5) cout << "five" << endl;
	else if (n == 6) cout << "six" << endl;
	else if (n == 7) cout << "seven" << endl;
	else if (n == 8) cout << "eight" << endl;
	else if (n == 9) cout << "nine" << endl;
	else cout << "Greater than 9" << endl;

	// clean method - requires <string> header
	string ret[] = { "one","two","three","four","five","six","seven","eight","nine"};
	if (n <= 9) cout << ret[n - 1] << endl;
	else cout << "Greater than 9" << endl;

	return 0;
}
