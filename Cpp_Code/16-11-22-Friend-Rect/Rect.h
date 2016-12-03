#include <iostream>
using namespace std;

class Rect;
class RectManager;
bool equal(Rect r, Rect s);

class Rect{
	int width, height;
public:
	Rect( int w=1, int h=1 ) { width = w; height = h; }

	// 프렌드 : 전역 함수
	friend bool equal( Rect r, Rect s );

	// 프렌드 : 다른 클래스의 멤버 함수
	//friend bool RectManager::equal( Rect r, Rect s );

	// 프렌드 : 다른 클래스 전체
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