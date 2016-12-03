#include <iostream>
using namespace std;

class Rect;
class RectManager;
bool equal(Rect r, Rect s);

class Rect{
	int width, height;
public:
	Rect( int w=1, int h=1 ) { width = w; height = h; }

	// ������ : ���� �Լ�
	friend bool equal( Rect r, Rect s );

	// ������ : �ٸ� Ŭ������ ��� �Լ�
	//friend bool RectManager::equal( Rect r, Rect s );

	// ������ : �ٸ� Ŭ���� ��ü
	friend class RectManager;
};

class RectManager{
public:
	bool equal( Rect r, Rect s ){
		if (r.width == s.width && r.height == s.height)
			return true;
		else return false;
	};
};