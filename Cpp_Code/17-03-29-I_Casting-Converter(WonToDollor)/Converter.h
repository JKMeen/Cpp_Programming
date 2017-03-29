#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ
	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī 
	virtual string getDestString()=0; // dest ���� ��Ī
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

class Won : public Converter{
protected:
	double ratio;

public:
	Won(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src�� �ٸ� ������ ��ȯ
		// 1�޷� -> 1,113.50��
		this->ratio = src*1113.50;
		return this->ratio;
	}

	virtual string getSourceString(){ // �ҽ� ���� ��Ī 
		return "[�޷�]";
	}

	virtual string getDestString(){// dest ���� ��Ī
		return "[��]";
	}
};

class Dollor : public Converter{
protected:
	double ratio;

public:
	Dollor(double ratio) : Converter(ratio){};

	virtual double convert(double src){ // src�� �ٸ� ������ ��ȯ
		// 1,113.50�� -> 1�޷�
		this->ratio = src / 1113.50;
		return this->ratio;
	}

	virtual string getSourceString(){ // �ҽ� ���� ��Ī 
		return "[��]";
	}

	virtual string getDestString(){// dest ���� ��Ī
		return "[�޷�]";
	}
};