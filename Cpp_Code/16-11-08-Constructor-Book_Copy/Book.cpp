#include "Book.h"

Book::Book(char* title, int price){
	this->price = price;

	int length = strlen(title);
	this->title = new char[length + 1];
	strcpy(this->title, title);
}

// 복사 생성자
Book::Book(const Book& b){
	cout << "복사 생성자 수행\n";
	this->price = b.price;
	this->title = new char[strlen(b.title) + 1];
	strcpy(this->title, b.title);
}

Book::~Book(){
	cout << "소멸자 실행\n";
	delete[] this->title;
}

void Book::set(char* title, int price){
	this->price = price;
	if (strlen(this->title) < strlen(title)){
		delete[] this->title;
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);
	}
	else {
		strcpy(this->title, title);
	}
}