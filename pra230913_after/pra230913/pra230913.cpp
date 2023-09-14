// pra230913.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;

};

class Circle : public Shape {
public:
    void draw() {
        cout << "동그라미" << endl;
    }

};

class Rect : public Shape {
public:
    void draw() {
        cout << "사각형" << endl;
    }

};

class Triangle : public Shape {
public:
    void draw() {
        cout << "삼각형" << endl;
    }

};



int main()
{
    Rect rec;
    Triangle tri;
    Circle circ;

    rec.draw();
    tri.draw();
    circ.draw();
}

