#include <iostream>
using namespace std;

int primo, secondo;
int main() {
	cout << "\ninserisci il primo valore numerico: ";
	cin >> primo;
	cout << "\ninserisci il secondo valore numerico: ";
	cin >> secondo;
	if ((secondo % primo) == 0) {
		cout << secondo << " � multiplo di " << primo;
	} else {
		cout << secondo << " non � multiplo di " << primo;
	}
	return 0;
}
