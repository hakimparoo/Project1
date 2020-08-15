#include <iostream>
using namespace std;
int main() {
	int i, x, sum = 0;
	cout << "Enter your number" << endl;
	cin >> x;
	for (i = 1;i <= x;i++) {
		sum = sum + i;
	}
	cout << "Sum Number\n" << sum << endl;

}