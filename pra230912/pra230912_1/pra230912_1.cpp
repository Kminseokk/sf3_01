// pra230912_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;


class Character {
private:
    string name;
    int level;
    int item_num;

public:
    //생성자
    Character(string user_name, int user_level, int user_itemN) : name(user_name), level(user_level), item_num(user_itemN) {}

    //getter 함수
    string getName() {
        return name;
    }

    //setter 함수
    void setName(string name) {
        this->name = name;
    }

    //getter 함수
    int getLevel() {
        return level;
    }

    //setter 함수
    void setLevel(int level) {
        this->level = level;
    }

    //getter 함수
    int getItem_num() {
        return item_num;
    }

    //setter 함수
    void setItem_num(int item_num) {
        this->item_num = item_num;
    }

};


int main()
{
    string user_name;
    //int user_level;
    //int user_itemN;
    int choice;

    cout << "************************************** " << endl;
    cout << " 캐릭터 이름을 입력해주세요. : ";
    cin >> user_name;

    Character charac(user_name, 0, 0);

    cout << "\n";
    cout << " " << charac.getName() << " 라는 캐릭터가 생성되었습니다. \n" << endl;
    cout << "\n";
    cout << " " << "0 : 종료 / 1 : 수정 / 2 : 레벨업 \n" << endl;
    cout << " " << "3 : 아이템 획득 / 4 : 아이템 사용 / 5 : 유저 정보 출력 \n" << endl;
    while (1) {
        cout << "************************************** " << endl;
        cout << " 어떤 동작을 하시겠습니까? : ";
        cin >> choice;
        cout << "\n";

        if (choice == 0) { //0은 종료
            cout << " 종료합니다. " << endl;
            break;
        }

        if (choice == 1) { //이름 바꾸기
            cout << " 새 이름을 입력해주세요. : " ;
            cin >> user_name;
            charac.setName(user_name);
            cout << " 이름이 변경되었습니다.  : " << endl;
            cout << " 새로운 이름 : " << charac.getName() << endl;
        }

        if (choice == 2) { //레벨업 +1
            cout << " 레벨업! " << endl;
            charac.setLevel((charac.getLevel() + 1));
            cout << " 현재레벨 = " << charac.getLevel() << " 입니다." << endl;
        }

        if (choice == 3) { //아이템 +1
            cout << " 아이템을 획득했습니다! " << endl;
            charac.setItem_num((charac.getItem_num() + 1));
            cout << " 현재 소유한 아이템 수 = " << charac.getItem_num() << " 입니다." << endl;
        }

        if (choice == 4) { //아이템 -1            

            if (charac.getItem_num() == 0) {
                cout << " 사용할 아이템이 없어요. " << endl;
            }
            else {
                cout << " 아이템을 사용했습니다! " << endl;
                charac.setItem_num((charac.getItem_num() - 1));
            }

            cout << " 현재 소유한 아이템 수 = " << charac.getItem_num() << " 입니다." << endl;

        }

        if (choice == 5) { //정보 출력 이름 레벨 템수

            cout << " * 유저 정보 보기 " << endl;
            cout << " * 이름 :  " << charac.getName() << endl;
            cout << " * 레벨 :  " << charac.getLevel() << endl;
            cout << " * 현재 아이템 개수 :  " << charac.getItem_num() << endl;

        }

        if (choice > 5) {
            cout << " * 잘못 입력하셨습니다. 다시 입력해주세요. " << endl;
        }
    }




}
