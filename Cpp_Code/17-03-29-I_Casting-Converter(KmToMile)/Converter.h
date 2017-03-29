#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0; // src를 다른 단위로 변환
	virtual string getSourceString() = 0; // 소스 단위 명칭 
	virtual string getDestString() = 0; // dest 단위 명칭
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

class Km : public Converter{
protected:
	double ratio;

public:
	Km(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src를 다른 단위로 변환
		// 1km -> 0.621371mile
		this->ratio = src*0.621371;
		return this->ratio;
	}

	virtual string getSourceString(){ // 소스 단위 명칭 
		return "(Mile)";
	}

	virtual string getDestString(){// dest 단위 명칭
		return "(Km)";
	}
};

class Mile : public Converter{
protected:
	double ratio;

public:
	Mile(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src를 다른 단위로 변환
		// 0.621371mile -> 1km
		this->ratio = src / 0.621371;
		return this->ratio;
	}

	virtual string getSourceString(){ // 소스 단위 명칭 
		return "(Km)";
	}

	virtual string getDestString(){// dest 단위 명칭
		return "(Mile)";
	}
};