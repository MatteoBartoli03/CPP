#include <iostream>
using namespace std;

int v[2];
int s = 0;
int main() {
	for (int i = 0; i < 2; i ++) {
		cout << "\ninserisci il valore numero " << i+1 << ": ";
		cin >> v[i];
		s += v[i];
	}
	cout << s;
	return 0;
}
