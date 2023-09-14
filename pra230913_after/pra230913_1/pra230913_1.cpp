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
	vector<Snack> snackBasket;

	Candy c1("자두", "신호등");
	Candy c2("사과", "츄파");

	Chocolate ch1("사각", "가나");
	Chocolate ch2("삼각", "킷캣");

	snackBasket.push_back(c1);
	snackBasket.push_back(c2);
	snackBasket.push_back(ch1);
	snackBasket.push_back(ch1);


	for (Snack snack : snackBasket) {
		snack.showInfo();
	}



}
