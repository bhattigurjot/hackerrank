#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
	string a, b, a_, b_;
	cin >> a >> b;

	a_ = a;
	b_ = b;
	a_[0] = b[0];
	b_[0] = a[0];

	cout << a.length() << " " << b.length() << endl;
	cout << a + b << endl;
	cout << a_ << " " << b_ << endl;

	return 0;
}
