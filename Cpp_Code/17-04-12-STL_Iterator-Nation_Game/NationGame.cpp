#include "NationGame.h"

NationGame::NationGame(){
	data.push_back(NationGame("한국", "서울"));
	data.push_back(NationGame("일본", "도쿄"));
	data.push_back(NationGame("미국", "워싱턴"));
	data.push_back(NationGame("중국", "베이징"));
}

void NationGame::run(){
	int select = 0;
	
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
	while (select != 3){
		cout << "정보 입력 : 1, 퀴즈 : 2, 종료 : 3 >>> ";
		cin >> select;

		switch (select){
			// 정보 입력
			case 1: input(); break;
			
			// 퀴즈
			case 2: quiz(); break;
			
			// 종료
			case 3: cout << "게임을 종료합니다." << endl; break;
		}
	}
}

void NationGame::input(){
	cout << "현재" << data.size() << "개의 나라가 있습니다." << endl;
	vector<NationGame>::iterator it; // it는 포인터
	for (it = data.begin(); it < data.end(); it++){
		cout << "[" << it->getNation() << " / " << it->getName() << "]" <<endl;
	}
		
	while(true){
		getchar();
		cout << "나라 입력 >>> ";
		getline(cin, nation, '\n');
		cout << "수도 입력 >>> ";
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
		cout << "<<" << data[key].getNation() << "의 수도는? >>> ";
		getline(cin, q, '\n');
		if (q == "exit") 
			break;
		else if (q == data[key].getName())
			cout << "Correct !!" << endl;
		else 
			cout << "No !! 정답은 " << data[key].getName() << "입니다." << endl;
	}
}