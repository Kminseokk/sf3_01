#include "Snack.h"

using namespace std;

Candy:: Candy(string flavor) {
    this->price = 200;
    this->name = "(���� �׽�Ʈ) ����";
    this->maker = "(���� �׽�Ʈ) ���";
    this->flavor = flavor;
}

void Candy::show_info() {
    cout << "(���� �׽�Ʈ) " << flavor << " �� ����" << endl;
}


//class Candy : public Snack {
//	string flavor;
//public:
//	Candy(string flavor) {
//		this->price = 200;
//		this->name = "����";
//		this->maker = "���";
//		this->flavor = flavor;
//	}
//	void show_info() {
//		cout << flavor << "�� ����" << endl;
//	}
//};