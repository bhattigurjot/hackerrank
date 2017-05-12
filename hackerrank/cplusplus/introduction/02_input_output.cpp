#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	
	// Check constraints, 1 <= a,b,c <= 1000
	if (a > 1000) a = 1000;
	if (b > 1000) b = 1000;
	if (c > 1000) c = 1000;

	if (a < 1) a = 1;
	if (b < 1) b = 1;
	if (c < 1) c = 1;
	cout << a + b + c;

	return 0;
}