#include "Snack.h"

using namespace std;

int Snack::count = 0;

Snack::Snack() {
    count++;
}

Snack::~Snack() {
    count--;
}

int Snack::get_count() {
    return count;
}

string Snack::get_name() {
    return name;
}

void Snack::show_info() {
    cout << "(분할 테스트) 과자입니다~ " << std::endl;
}

//
//class Snack {
//protected:
//	int price; 
//	string name;
//	string maker;
//	static int count;
//public:
//	Snack() { count++; }
//	virtual ~Snack() { count--; }
//
//	static int get_count() {
//		return count;
//	}
//	string get_name() {
//		return name;
//	}
//	virtual void show_info() {
//		cout << "과자입니다~" << endl;
//	}
//};