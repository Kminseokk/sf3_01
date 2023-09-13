// pra230913_4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

class Snack {
protected:
	int price;
	string name;
	string maker;
	static int count;
public:
	Snack() { count++; }
	virtual ~Snack() { count--; }

	static int get_count() {
		return count;
	}
	string get_name() {
		return name;
	}
	virtual void show_info() {
		cout << "과자입니다~" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor) {
		this->price = 200;
		this->name = "사탕";
		this->maker = "농심";
		this->flavor = flavor;
	}
	void show_info() {
		cout << flavor << "맛 사탕" << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->price = 1000;
		this->name = "초콜릿";
		this->maker = "롯데";
		this->shape = shape;
	}

	void show_info() {
		cout << shape << "모양 초콜릿" << endl;
	}
};

int main() {

	vector<Snack> snackBasket;
	int choice;
	Snack* sList[100];
	string user_choice;
	//string user_shape;
	int i = 0;

	while (1) {
		cout << "과자 바구니에 추가할 간식을 고르시오. ( 1: 사탕, 2: 초콜릿, 0: 종료 ) : ";
		cin >> choice;

		if (choice == 0) {
			cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() <<"개 입니다." << endl;
			break;
		}

		if (choice == 1) { //사탕
			cout << "맛을 입력하세요. : ";
			cin >> user_choice;
			Candy candy(user_choice);
			sList[i] = &candy;
			Snack::Snack();
			i++;
		}

		if (choice == 2) { //초콜릿
			cout << "모양을 입력하세요. : "; 
			cin >> user_choice;
			Chocolate chocolate(user_choice);
			sList[i] = &chocolate;
			Snack::Snack();
			i++;
		}

	}



}