#ifndef BOOK
#define BOOK

#include <iostream>
using namespace std;

class Book {
	char *title; // ���� ���ڿ�
	int price; // ����
public:
	Book(char* title, int price);
	Book(const Book& b);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; } 
};

#endif