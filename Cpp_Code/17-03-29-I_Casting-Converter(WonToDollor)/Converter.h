#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0; // src를 다른 단위로 변환
	virtual string getSourceString() = 0; // 소스 단위 명칭 
	virtual string getDestString()=0; // dest 단위 명칭
public:
	Converter(double ratio) { 
		this->ratio = ratio; 
	} 
	
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class Won : public Converter{
protected:
	double ratio;

public:
	Won(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src를 다른 단위로 변환
		// 1달러 -> 1,113.50원
		this->ratio = src*1113.50;
		return this->ratio;
	}

	virtual string getSourceString(){ // 소스 단위 명칭 
		return "[달러]";
	}

	virtual string getDestString(){// dest 단위 명칭
		return "[원]";
	}
};

class Dollor : public Converter{
protected:
	double ratio;

public:
	Dollor(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src를 다른 단위로 변환
		// 1,113.50원 -> 1달러
		this->ratio = src / 1113.50;
		return this->ratio;
	}

	virtual string getSourceString(){ // 소스 단위 명칭 
		return "[원]";
	}

	virtual string getDestString(){// dest 단위 명칭
		return "[달러]";
	}
};