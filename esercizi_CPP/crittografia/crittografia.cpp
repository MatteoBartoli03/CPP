#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

string INS_STR(string str);
int INS_INT(string str);
int MENU(string str);
string cript(int chiave, string st);
void decript(int chiave, string st);
string toString(int a);

string stinput, stoutput;
int chiave;

int main() {
		
	ifstream OpenFile("cpp-input.txt");
	char ch;
	string stinput;
	while(!OpenFile.eof())
	{
		OpenFile.get(ch);
		stinput += ch;
	}
	OpenFile.close();
	
	for (int i=0; i<stinput.length(); i++)
        stinput[i] = tolower(stinput[i]);
	
	chiave = INS_INT("Il messaggio che verrà criptato è quello presente nel file cpp-input.txt e sarà criptato in lower case\nInserisci la chiave di criptazione: ");
	while (true){
		if (chiave > 25) {
			chiave -= 25;
		}
		if (chiave < 26) {
			break;
		}
	}
	
    bool loop = true;
	while(loop) {
    	int option = MENU("Scegli:\n1) somma tra chiave e ascii \n2) differenza tra ascii e chiave \n3) somma tra ascii e doppio della chiave\n");
    	switch (option) {
    	case 1: {
    		stoutput = cript(chiave, stinput);
        	cout << stoutput << "\n";
        	loop = false;
			break;
		}
    	case 2: {
    		chiave *= -1;
    		stoutput = cript(chiave, stinput);
        	cout << stoutput << "\n";
			loop = false;
			break;
		}
    	case 3: {
    		chiave *= 2;
  			
			while (true){
				if (chiave > 25) {
					chiave -= 25;
				}
				if (chiave < 26) {
					break;
				}
			}
	
    		stoutput = cript(chiave, stinput);
        	cout << stoutput << "\n";
        	loop = false;
			break;
		}
	  	default: {
        	cout << "\n!RITENTA!\n" << endl;
        	break;
      	}
    	}
	}
		
    loop = true;
	while(loop) {
    	int option = MENU("\nScegli:\n1) decriptare il messaggio criptato nella parola inziale \n2) non decriptare\n");
    	switch (option) {
    	case 1: {
    		decript(chiave, stoutput);
        	loop = false;
			break;
		}
    	case 2: {
    		loop = false;
			break;
		}
	  	default: {
        	cout << "\n!RITENTA!\n" << endl;
        	break;
      	}
    	}
	}
}

string INS_STR(string str) {
	string x;
	cout << str;
	cin >> x;
	return x;
}

int INS_INT(string str) {
	int x;
	cout << str;
	cin >> x;
	return x;
}


int MENU(string str) {
	int x;
	cout << str;
	cin >> x;
	return x;
}

string cript(int chiave, string st){
	string stout;
	int a;
	for ( int i = 0 ; i < st.length()-1 ; i++ ){
		if (st[i] != 32){
			a = (int) st[i];
			a += chiave;
			if ( a < 97 ) {
				a += 26;
			} else if ( a > 122 ) {
				a -= 26;
			}
			stout += (char) a;
		} else {
			stout += " ";
		}
	}
	return stout;
}

void decript(int chiave, string st){
	string stout;
	chiave *= -1;
	st += " ";
	stout = cript(chiave, st);
	cout << "\n" << stout << "\n";
}

string toString(int a){
	std::stringstream ss;
	ss << a;
	string str = ss.str();
	return str;
}
