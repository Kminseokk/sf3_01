#include "Snack.h"

using namespace std;

Candy:: Candy(string flavor) {
    this->price = 200;
    this->name = "(ºÐÇÒ Å×½ºÆ®) »çÅÁ";
    this->maker = "(ºÐÇÒ Å×½ºÆ®) ³ó½É";
    this->flavor = flavor;
}

void Candy::show_info() {
    cout << "(ºÐÇÒ Å×½ºÆ®) " << flavor << " ¸À »çÅÁ" << endl;
}


//class Candy : public Snack {
//	string flavor;
//public:
//	Candy(string flavor) {
//		this->price = 200;
//		this->name = "»çÅÁ";
//		this->maker = "³ó½É";
//		this->flavor = flavor;
//	}
//	void show_info() {
//		cout << flavor << "¸À »çÅÁ" << endl;
//	}
//};