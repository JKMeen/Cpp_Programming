#include "Boss.h"


void Print_HP(Boss* _t){
	while (_t->Before != NULL)
		_t = _t->Before;

	while (_t != NULL){
		cout << "))) " << _t->name << " HP >> " << _t->HP << endl;
		_t = _t->Next;
	}
}

int Attack_P(Boss* _t, int count){
	while (_t->Before != NULL)
		_t = _t->Before;

	int r = rand() % count;
	for (int i = 0; i < r; i++)
		_t = _t->Next;

	return _t->Attack();
}

void main(){
	srand((unsigned)time(NULL));

	int Player_HP = 50;
	int Player_Damage = 10;
	int Player_Mdamage = 10;
	int count = 3;

	cout << "Game Start!" << endl;

	// ���� ����
	Boss* Monster[3];
	Monster[0] = new Boss("Monster0");
	Monster[1] = new Boss("Monster1");
	Monster[2] = new Boss("Monster2");

	Monster[0]->Before = NULL;
	Monster[0]->Next = Monster[1];

	Monster[1]->Before = Monster[0];
	Monster[1]->Next = Monster[2];

	Monster[2]->Before = Monster[1];
	Monster[2]->Next = NULL;

	Boss* t = Monster[0];

	for (int i = 0; i < 3; i++){
		cout << Monster[i]->name << " HP >> " << Monster[i]->HP
			<< " / ���ݷ� >> " << Monster[i]->Atpower
			<< " / ���� ���� >> " << Monster[i]->Depower
			<< " / ���� ���� >> " << Monster[i]->Mdepower
			<< endl;
	}

	Boss* M_Boss = new Boss("Boss");	// Boss

	while (true){
		cout << "\n---------------------------------------------------------------------" << endl;

		int attack = 0;
		int r = rand()%count;

		// �÷��̾� ����
		cout << "\n<<< �÷��̾� ��! >>>" << endl;
		while (true){
			cout << "1)�Ϲݰ���, 2)�������� >>> ";
			cin >> attack;
			if (attack == 1 || attack == 2)
				break;
			else
				cout << "�� �� �����Ͽ����ϴ�." << endl;
		}
		cout << endl;

		if (count > 0){
			r = rand() % count;
			while (t->Before != NULL)
				t = t->Before;

			for (int i = 0; i < r; i++)
				t = t->Next;

			// �÷��̾� ����
			if (attack == 1)
				t->Hit(attack, Player_Damage + rand() % 10);
			else
				t->Hit(attack, Player_Mdamage + rand() % 10);

			if (t->HP <= 0){
				Boss* tmp;
				if (t->Before != NULL && t->Next != NULL){
					t->Before->Next = t->Next;
					t->Next->Before = t->Before;
					tmp = t;
					t = t->Before;
				}
				else if (t->Before == NULL && t->Next != NULL){
					t->Next->Before = NULL;
					tmp = t;
					t = t->Next;
				}
				else if (t->Before != NULL && t->Next == NULL){
					t->Before->Next = NULL;
					tmp = t;
					t = t->Before;
				}
				else {
					tmp = t;
					t = M_Boss;
				}
				tmp->~Boss();

				count--;
				if (count == 0){
					t = M_Boss;
					cout << "Boss ����!" << endl;
					cout << M_Boss->name << " HP >> " << M_Boss->HP
						<< " / ���ݷ� >> " << M_Boss->Atpower
						<< " / ���� ���� >> " << M_Boss->Depower
						<< " / ���� ���� >> " << M_Boss->Mdepower
						<< endl;
				}
			}
			if (count > 0){
				// ���� �� ���
				Print_HP(t);

				// ���� ����
				cout << "\n<<< ���� ��! >>>" << endl;
				Player_HP -= Attack_P(t, count);
				cout << "��� ü�� >>> " << Player_HP << endl;
			}
		}
		else {
			// �÷��̾� ����
			M_Boss->Hit(attack, Player_Damage);
			if (M_Boss->HP <= 0){
				M_Boss->~Boss();
				break;
			}

			// ���� �� ���
			cout << "���� HP >> " << M_Boss->HP << endl;

			// ���� ����
			cout << "\n<<< ���� ��! >>>" << endl;
			Player_HP -= M_Boss->Attack();
			cout << "��� ü�� >>> " << Player_HP << endl;
		}

		if (Player_HP <= 0){
			cout << "\n[�η��� ����߽��ϴ�.]" << endl;
			break;
		}
	}
}