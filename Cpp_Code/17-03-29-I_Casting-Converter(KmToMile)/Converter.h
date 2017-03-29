#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ
	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī 
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) {
		this->ratio = ratio;
	}

	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class Km : public Converter{
protected:
	double ratio;

public:
	Km(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src�� �ٸ� ������ ��ȯ
		// 1km -> 0.621371mile
		this->ratio = src*0.621371;
		return this->ratio;
	}

	virtual string getSourceString(){ // �ҽ� ���� ��Ī 
		return "(Mile)";
	}

	virtual string getDestString(){// dest ���� ��Ī
		return "(Km)";
	}
};

class Mile : public Converter{
protected:
	double ratio;

public:
	Mile(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src�� �ٸ� ������ ��ȯ
		// 0.621371mile -> 1km
		this->ratio = src / 0.621371;
		return this->ratio;
	}

	virtual string getSourceString(){ // �ҽ� ���� ��Ī 
		return "(Km)";
	}

	virtual string getDestString(){// dest ���� ��Ī
		return "(Mile)";
	}
};