#include <iostream>
#include <string>
using namespace std;

class TV {
private:
	int size;

public:
	TV();
	TV(int s);
	int getSize();
};

class WideTV : public TV {
private:
	bool videoin;

public:
	WideTV(int s, bool in);
	bool getVideoIn();
};

class SmartTV : public WideTV {
private:
	string ipAddress;
	
public:
	SmartTV(string ipAdd, int s);
	string getipAddress();
};