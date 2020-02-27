#include <iostream>
using namespace std;

int main() {
	int a = -1;
	for(int x=0; x<(100/5); x++){
		for(int y=0; y<5; y++){
			a += 2;
			cout << a;
			cout << " ";
		}
		cout << "\n";
	}
}
