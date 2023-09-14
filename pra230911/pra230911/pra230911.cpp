// pra230911.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

//struct Rectangle { //구조체 실습
//    double width = 0;
//    double height = 0;
//
//};

class Rectangle {

private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    Rectangle(const Rectangle& other) {
        width = other.width;
        height = other.height;
    }

    double area() {
        return width * height;
    }


    //getter 함수
    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    //setter 함수
    void setWidth(double width) {
        this->width = width;
    }

    //setter 함수
    void setHeight(double height) {
        this->height = height;
    }

};

int main() {

    double width;
    double height;
    double width2, height2;

    Rectangle rec(1, 2);

    cout << "rec(1, 2)의 넓이는 " << rec.area() << " 입니다. " << endl;

    cout << "가로 세로 길이를 입력. : ";
    cin >> width >> height;

    //Rectangle rec_copy(rec);

    //cout << "복사 생성자 넓이는 " << rec_copy.area() << " 입니다. " << endl;

    //Rectangle rec_copy2 = rec_copy;

    //cout << "복사 생성자를 복사 생성자 한 넓이는 " << rec_copy2.area() << " 입니다. " << endl;

    rec.setWidth(width);
    rec.setHeight(height);

    cout << "넓이는 " << rec.area() << " 입니다. " << endl;
    cout << "가로 길이는 " << rec.getWidth() << " 입니다. " << endl;
    cout << "세로 길이는 " << rec.getHeight() << " 입니다. " << endl;

}


/// <summary> <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
///  실습 1 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/// </summary><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/// 

//int main2()
//{
//    int x, y;
//    Rectangle rec;
//
//    cout << "가로 세로 길이를 입력. : ";
//    cin >> rec.width >> rec.height;
//
//    double area = rec.width * rec.height;
//
//    cout << "넓이는 " << area << " 입니다." << endl;
//    
//
//}
