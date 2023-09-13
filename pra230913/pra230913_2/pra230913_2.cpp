// pra230913_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;

class Snack {
protected:
	int price;
	string name;
	string maker;
public:
	Snack() {}
	//Snack(string name) : name(name) { }
	//Snack() { }

	string getName() {
		return name;
	}

	void setName(int name) {
		this->name = name;
	}

	virtual void showInfo() {
		cout << name << " 입니다~" << endl;
	}
};

class Candy : public Snack {
public:
	string taste; //맛

	Candy(string taste, string name)
	{
		this->taste = taste;
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setName(int name) {
		this->name = name;
	}


	void showInfo() {
		cout << name << " 입니다~" << endl;
	}

};

class Chocolate : public Snack {
public:
	string shape; //모양

	//Chocolate(string name, string shape) : Snack(name), shape(shape) {}

	Chocolate(string shape, string name)
	{
		this->shape = shape;
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setName(int name) {
		this->name = name;
	}

	void showInfo() {
		cout << name << " 입니다~" << endl;
	}

};


int main()
{
	vector<Snack*> snackBasket;

	// 업캐스팅하여 Candy 객체를 Snack 포인터로 다룸
	Snack* c1 = new Candy("자두", "신호등");
	Snack* c2 = new Candy("사과", "츄파");

	Chocolate ch1("사각", "가나");
	Chocolate ch2("삼각", "킷캣");

	snackBasket.push_back(c1);
	snackBasket.push_back(c2);
	snackBasket.push_back(&ch1);
	snackBasket.push_back(&ch2);

	for (Snack* snack : snackBasket) {
		snack->showInfo();

		// 다운 캐스팅을 시도하고, 성공하면 Candy 또는 Chocolate 포인터로 다룸
		if (Candy* candy = dynamic_cast<Candy*>(snack)) {
			cout << "다운 캐스팅 맛: " << candy->taste << " 입니다 ********" << endl;
		}
		else if (Chocolate* chocolate = dynamic_cast<Chocolate*>(snack)) {
			cout << "다운 캐스팅 모양: " << chocolate->shape << " 입니다 ********" << endl;
		}

	}

	// 동적으로 할당된 메모리를 해제
	delete c1;
	delete c2;

}
