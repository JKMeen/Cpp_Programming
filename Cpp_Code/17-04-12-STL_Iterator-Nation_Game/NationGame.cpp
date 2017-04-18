#include "NationGame.h"

NationGame::NationGame(){
	data.push_back(NationGame("�ѱ�", "����"));
	data.push_back(NationGame("�Ϻ�", "����"));
	data.push_back(NationGame("�̱�", "������"));
	data.push_back(NationGame("�߱�", "����¡"));
}

void NationGame::run(){
	int select = 0;
	
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
	while (select != 3){
		cout << "���� �Է� : 1, ���� : 2, ���� : 3 >>> ";
		cin >> select;

		switch (select){
			// ���� �Է�
			case 1: input(); break;
			
			// ����
			case 2: quiz(); break;
			
			// ����
			case 3: cout << "������ �����մϴ�." << endl; break;
		}
	}
}

void NationGame::input(){
	cout << "����" << data.size() << "���� ���� �ֽ��ϴ�." << endl;
	vector<NationGame>::iterator it; // it�� ������
	for (it = data.begin(); it < data.end(); it++){
		cout << "[" << it->getNation() << " / " << it->getName() << "]" <<endl;
	}
		
	while(true){
		getchar();
		cout << "���� �Է� >>> ";
		getline(cin, nation, '\n');
		cout << "���� �Է� >>> ";
		getline(cin, name, '\n');
		cout << endl;
		if (nation == "no" && name == "no") break;
		data.push_back(NationGame(nation, name));
	}
}

void NationGame::quiz(){
	int key = rand() % data.size();
	string q;

	while(true){
		key = rand() % data.size();
		getchar();
		cout << "<<" << data[key].getNation() << "�� ������? >>> ";
		getline(cin, q, '\n');
		if (q == "exit") 
			break;
		else if (q == data[key].getName())
			cout << "Correct !!" << endl;
		else 
			cout << "No !! ������ " << data[key].getName() << "�Դϴ�." << endl;
	}
}