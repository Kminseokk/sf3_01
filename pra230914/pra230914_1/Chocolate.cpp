#include "Snack.h"

using namespace std;

Chocolate::Chocolate(string shape) {
    this->price = 200;
    this->name = "(���� �׽�Ʈ) ���ݷ�";
    this->maker = "(���� �׽�Ʈ) �Ե�";
    this->shape = shape;
}

void Chocolate::show_info() {
    cout << "(���� �׽�Ʈ) " << shape << " �� ���ݷ�" << endl;
}

