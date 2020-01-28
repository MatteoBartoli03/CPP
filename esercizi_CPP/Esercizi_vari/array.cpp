#include <iostream>
using namespace std;

int main() {
	int lenght, i;
	int array [lenght];
	
	cout << "inserisci la lunghezza dell'array che vuoi utlizzare" << endl;
	cin >> lenght;
	
    for (i = 0; i < lenght; i++) {
    	cout << "insersci l'elemento numero " << i + 1 << " che vuoi inserire nella lista" << endl;
    	cin >> array[i];
	};

    for (i = 0; i < lenght; i++) {
    	if (i == 0) {
    		cout << "[ " << array[i] << ", ";
		} else if (i == (lenght - 1)) {
			cout << array[i] << " ]";
		} else {
			cout << array[i] << ", ";
		};
	};
	
    return 0;
}
