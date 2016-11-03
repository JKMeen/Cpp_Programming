#include<iostream>
#include<string>
using namespace std;

void main(){
	char get[10000];
	int world[26] = { 0 };

	cout << "ÀÔ·Â" << endl;
	cin.getline(get, 10000, ';');

	int length = strlen(get);

	for (int i = 0; i<length; i++){
		if (isalpha(get[i])){
			char ch = tolower(get[i]);
			world[ch - 'a']++;
		}
	}
	int total = 0;
	for (int i = 0; i<26; i++){
		total += world[i];
	}
	cout << "ÃÑ ¾ËÆÄºª °³¼ö´Â : " << total << endl;

	for (int i = 0; i<26; i++){
		cout << (char)('a' + i) << ": ( " << world[i] << " )    : ";
		for (int j = 0; j<world[i]; j++){
			cout << "*";
		}
		cout << endl;
	}
}