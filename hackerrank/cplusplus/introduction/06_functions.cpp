#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
	// Method 1 - max function from std
	return std::max(std::max(a, b), std::max(c, d));
	// Method 2 - basic
	int maximum = a;
	if (b / maximum) maximum = b;
	if (c / maximum) maximum = c;
	if (d / maximum) maximum = d;
	return maximum;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}