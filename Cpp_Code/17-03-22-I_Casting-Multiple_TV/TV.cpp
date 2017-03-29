#include "TV.h"

TV::TV() {
	this->size = 0;
}

TV::TV(int s){
	this->size = s;
}

int TV::getSize(){ return this->size; }

WideTV::WideTV(int s, bool in) : TV(s){
	this->videoin = in;
}

bool WideTV::getVideoIn(){ return videoin; }

SmartTV::SmartTV(string ipAdd, int s) : WideTV(s, false){
	this->ipAddress = ipAdd;
}

string SmartTV::getipAddress(){ return this->ipAddress; }

