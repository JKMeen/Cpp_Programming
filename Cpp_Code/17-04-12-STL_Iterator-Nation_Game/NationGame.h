#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

class NationGame{
	vector<NationGame> data;
	string nation;
	string name;
public:
	NationGame();
	NationGame(string nation, string name) {
		this->nation = nation;
		this->name = name;
	}
	
	void run();
	void input();
	void quiz();
	string getNation() { return this->nation; }
	string getName() { return this->name; }
};