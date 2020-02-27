#include <iostream>
using namespace std;

void uno();
void due();
void tre();
void quattro();
void cinque();
void sei();

int main() {
	uno();
	due();
	tre();
	quattro();
	cinque();
	sei();
	sei();
	cinque();
	quattro();
	tre();
	due();
	uno();
}

void uno(){
	for (int x=0; x<12; x++){
		cout << "*";
	}
	cout << "\n";	
}

void due(){
	for (int x=0; x<12; x++){
		if (x==0 || x==11){
			cout << "*";
		} else {
			cout << " ";
		}
	}
	cout << "\n";
}

void tre(){
	for (int x=0; x<12; x++){
		if (x==1 || x==10){
			cout << " ";
		} else {
			cout << "*";
		}
	}
	cout << "\n";
}

void quattro(){
	for (int x=0; x<12; x++){
		if (x==0 || x==11 || x==2 || x==9){
			cout << "*";
		} else {
			cout << " ";
		}
	}
	cout << "\n";
}

void cinque(){
	for (int x=0; x<12; x++){
		if (x==1 || x==10 || x==3 || x==8){
			cout << " ";
		} else {
			cout << "*";
		}
	}
	cout << "\n";
}

void sei(){
	for (int x=0; x<12; x++){
		if (x==1 || x==10 || x==3 || x==8 || x==5 || x==6){
			cout << " ";
		} else {
			cout << "*";
		}
	}
	cout << "\n";
}
