// pra230912_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Shape {
protected:
    double side_num;
    double under_side;

public:
    Shape(double side_num, double under_side) : side_num(side_num), under_side(under_side) {}

    void printinfo() {
        cout << "변의 개수 : " << side_num << " 개, 밑변의 길이 : " << under_side << " 입니닷. " << endl;
    }
};

class Rectangle : public Shape {
public:
    double height;

    Rectangle(double side_num, double under_side, double h) : Shape(side_num, under_side), height(h) {}

    void area() {
        double aaaa = (under_side * height);
        cout << "직사각형 넓이 : " << aaaa << endl;
    }

    void printinfo() { //오버라이딩
        double aaaa = (under_side * height);
        cout << "사각형의 넓이는 : " << aaaa << endl;
    }

    void printinfo(int under_side, int height) { //오버로딩
        double aaaa = (under_side * height);
        cout << "사각형의 넓이는 : " << aaaa << endl;
    }

};

class Triangle : public Shape {
public:
    double height;

    Triangle(double side_num, double under_side, double h) : Shape(side_num, under_side), height(h) {}

    void area() {
        cout << "사암각형 밑변 " << under_side << " 높이 " << height << endl;
        double aaaa = (under_side * height) / 2;
        cout << "사암각형 넓이 : " << aaaa << endl;
    }

    void printinfo() { //오버라이딩
        double aaaa = (under_side * height) /2;
        cout << "삼각형의 넓이는 : " << aaaa << endl;
    }

    void printinfo(int under_side, int height) { //오버로딩
        double aaaa = (under_side * height) / 2;
        cout << "삼각형의 넓이는 : " << aaaa << endl;
    }


};


int main()
{
    //Shape sha(5);

    //Rectangle rec(sha.under_side, 6);
    Rectangle rec2(4, 10, 6);

    //Triangle tri(sha.under_side, 8);
    Triangle tri2(3, 10, 8);


    //rec.area();
    //rec2.printinfo();
    rec2.area();
    cout << "\n";

    //tri.area();
    cout << "\n";
    //tri2.printinfo();
    tri2.area();

    cout << "\n 오버라이딩" << endl;
    rec2.printinfo();
    tri2.printinfo();
    
    cout << "\n 오버로딩" << endl;
    rec2.printinfo(20,20);
    tri2.printinfo(20,20);

    cout << "\n 인터페이스 통일 " << endl;
    Shape* s[2];
    s[0] = &rec2;
    s[1] = &tri2;

    for (int i = 0; i < 2; i++) {
        s[i]->printinfo();
    }

}
