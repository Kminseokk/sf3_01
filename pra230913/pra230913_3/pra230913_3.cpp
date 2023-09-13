// pra230913_3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Person {
public:
	virtual void intro() {
		cout << " 사람입니다~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << " 학생입니다." << endl;
	}

	void learn() {
		cout << " 배웁니다." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << " 선생입니다." << endl;
	}

	void teach() {
		cout << " 가르칩니다." << endl;
	}
};

int main()
{
	Person* pList[3];
	string names[3];

	cout << "3명의 이름을 입력해주세요. (선생님, 학생, 학생) " << endl;
	cin >> names[0] >> names[1] >> names[2];

	Teacher teacher(names[0]);
	Student student1(names[1]);
	Student student2(names[2]);

	pList[0] = &teacher;
	pList[1] = &student1;
	pList[2] = &student2;

	for (auto p : pList) {
		p->intro();
		
		// 다운 캐스팅을 시도하고, 성공하면 선생님 또는 학생 포인터로 다룸
		if (Teacher* teacher = dynamic_cast<Teacher*>(p)) {
			teacher->teach();
			//cout << "다운 캐스팅 선생: " << teacher->teach() << " 입니다 ********" << endl;
		}
		else if (Student* student = dynamic_cast<Student*>(p)) {
			student->learn();
			//cout << "다운 캐스팅 학생: " << student1->learn << " 입니다 ********" << endl;
		}


	}




}
