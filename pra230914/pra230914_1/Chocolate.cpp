#include "Snack.h"

using namespace std;

Chocolate::Chocolate(string shape) {
    this->price = 200;
    this->name = "(분할 테스트) 초콜렛";
    this->maker = "(분할 테스트) 롯데";
    this->shape = shape;
}

void Chocolate::show_info() {
    cout << "(분할 테스트) " << shape << " 맛 초콜렛" << endl;
}

