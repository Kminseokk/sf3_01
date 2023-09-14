// pra05.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 2023 09 04

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

namespace seoul {
	string area_num;
	string lendmark;

	void printAll() {
		cout << area_num << " 그리고 서울 " << lendmark << endl;
	}
}

namespace busan {
	string area_num;
	string lendmark;

	void printAll() {

		cout << area_num << " 그리고 부산 " << lendmark << endl;
	}
}

//using namespace seoul;
using namespace busan;

int main()
{
	seoul::area_num = "02";
	seoul::lendmark = "노원구";
	seoul::printAll();
	//using namespace busan;

	area_num = "052";
	lendmark = "돼지국밥";
	printAll();




	///////////////////////////////////////////////////////////////////////


	vector<int> myVect = { 10, 20, 30, 20 ,40, 10, 50 };

	cout << "원래 벡터 : ";
	for (int i = 0; i < myVect.size(); i++){
		cout << myVect[i] << " ";
	}

	cout << "\n";
	int cnt = 0;

	for (int i = 0; i < myVect.size()-1; i++) {
		for (int j = i+1; j < myVect.size(); j++) {
			if (myVect[i] == myVect[j]) {
				myVect.erase(myVect.begin() + j, myVect.begin() + j+1);
				myVect.insert(myVect.begin(), 0);
				cnt++;
			}
		}
	}

	cout << "0을 삭제 시키지 않은 벡터 : ";
	for (int i = 0; i < myVect.size(); i++) {
		cout << myVect[i] << " ";
	}
	cout << "\n";


	myVect.erase(myVect.begin(), myVect.begin() + cnt); //앞에 0을 추가하고 지우는 과정이 있어야 오버플로우가 발생하지 않음.

	sort(myVect.begin(), myVect.end());

	cout << "중복값이 삭제된 벡터 : ";
	for (int i = 0; i < myVect.size(); i++) {
		cout << myVect[i] << " ";
	}
	cout << "\n";




	///////////////////////////////////////////////////////////////////////

	int point = 1;
	int x = 0;
	int y = 0;

	while (point < 2) {
		cout << "백터 x 하나 입력 \n";
		cin >> x;
		cout << "백터 y 하나 입력 \n";
		cin >> y;

		cout << "입력값은 : " << x << "와 " << y << "\n";

		if (x > 0 && y > 0) {
			point++;
		}
		else {
			cout << "둘다 양수 입력해주세요 \n";
		}
	}

	vector<vector<int>> arr2;

	arr2.assign(x, vector<int>(y));

	int a = 1;
	for (int j = 0; j < x; j++) {
		for (int k = 0; k < y; k++) {
				arr2[j][k] = a;
				a++;
			}
	}

	for (int j = 0; j < x; j++) {
		cout << "\n";
		for (int k = 0; k < y; k++) {
			cout << arr2[j][k] << " ";
		}
	}
	cout << "\n";

	///////////////////////////////////////////////////////////////////////
}



// 실습1 ,2  실습1 ,2  실습1 ,2  실습1 ,2  실습1 ,2  실습1 ,2  실습1 ,2 
//int main()
//{
//
//    int ms1 = 0;
//    int ms2 = 0;
//    int i = 1;
//
//    int stu = 0;
//    int sum = 0;
//
//    do {
//        cout << "수 하나 입력 \n";
//        cin >> ms1;
//        cout << "수 하나 입력 \n";
//        cin >> ms2;
//
//        cout << "입력값은 : " << ms1 << "와 " << ms2 << "\n";
//
//        if (ms1 > 0 && ms2 > 0) {
//            i++;
//        }
//        else {
//            cout << "둘다 양수 입력해주세요 \n";
//        }
//
//    } while (i < 2);
//
//    int** arr2 = new int* [ms1];
//
//    for (int j = 0; j < ms1; j++) {
//        arr2[j] = new int[ms2];
//    }
//
    //int a = 1;
    //for (int j = 0; j < ms1; j++) {
    //    for (int k = 0; k < ms2; k++) {
    //        arr2[j][k] = a;
    //        a++;
    //    }
    //}
//
    //for (int j = 0; j < ms1; j++) {
    //    cout << "\n";
    //    for (int k = 0; k < ms2; k++) {
    //        cout << arr2[j][k] << " ";
    //    }
    //}
//
//    for (int j = 0; j < ms1; j++) {
//        delete[] arr2[j];
//    }
//    delete[] arr2;
//
//    cout << "\n 학생 수 입력 \n";
//    cin >> stu;
//
//    int* arr = new int[stu];
//
//    for (int i = 0; i < stu; i++) {
//        cout << i + 1 << "번 째 학생의 성적 입력 : ";
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < stu; i++) {
//        sum += arr[i];
//    }
//
//    double avg = double(sum) / double(stu);
//
//    cout << "평균 : " << avg;
//
//
//}
