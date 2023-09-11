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



    void talk() {
        cout << "메소드에서 메소드 넓이는 (talk()) = " << area() << " 입니다. \n" << endl;
        return;
    }

};

int main() {

    double width, height;
    double width2, height2;

    cout << "가로 세로 길이를 입력. : ";
    cin >> width >> height;

    Rectangle rec(width, height);

    cout << "그냥 클래스 넓이는 " << rec.area() << " 입니다. " << endl;

    rec.talk();

    Rectangle rec_copy(rec);

    cout << "복사 생성자 넓이는 " << rec_copy.area() << " 입니다. " << endl;

    Rectangle rec_copy2 = rec_copy;

    cout << "복사 생성자를 복사 생성자 한 넓이는 " << rec_copy2.area() << " 입니다. " << endl;


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
