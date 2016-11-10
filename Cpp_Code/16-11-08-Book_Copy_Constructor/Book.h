#ifndef BOOK
#define BOOK

#include <iostream>
using namespace std;

class Book {
	char *title; // 제목 문자열
	int price; // 가격
public:
	Book(char* title, int price);
	Book(const Book& b);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; } 
};

#endif