// pra06.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	list<int> myList = { 5,4,3, 4,2,1,1 };
	list<int> myList2 = { 6, 7 };
	list<int> myList3 = { 0 };
	list<int> myList4 = { 1, 2, 3, 4, 5 };
	int a[5] = { 1, 2, 3, 4, 5 };

	int target = 4;
	int cnt = 0;

	for (const int& num : myList) {
		if (num == target) {
			cnt++;
		}
	}

	cout << "(2) 4 의 개수는 " << cnt << " 개 입니다.";
	cout << "\n";

	myList.sort();

	cout << "(3) 정렬 하기 : ";
	for (const int& num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	myList.unique();

	cout << "(4) 중복 제거 : ";
	for (const int& num : myList) {
		cout << num << " ";
	}
		
	myList.splice(myList.end(), myList2);

	cout << "\n";
	cout << "(5) 원소 추가 : ";
	for (const int& num : myList) {
		cout << num << " ";
	}

	myList.splice(myList.begin(), myList3);
	cout << "\n";
	cout << "(6) 원소 추가 : ";
	for (const int& num : myList) {
		cout << num << " ";
	}

	cout << "\n\n\n";
	cout << "(7) 번외 문제 : ";
	cout << "\n";
	cout << " 원래 형태 : ";
	for (const int& num : myList4) {
		cout << num << " ";
	}
	
	//// 번외 문제 요점, 단순 위치 변환 
	for (int i = 4; i > 0; i--) {
		a[i] = a[i - 1];
	}
	a[0] = 0;
	///////////////////////////////////

	myList4.push_front(0);

	while (myList4.size() > 5) {
		myList4.pop_back();
	}
	cout << " 바뀐 형태 : ";
	for (const int& num : myList4) {
		cout << num << " ";
	}

	cout << "\n";

	//////////////////////////// 실습 3 ////////////////////////////


	//vector <int> arr(5);
	//vector <int> arr2(5);
	//int index = 0;
	//int user_num = 0;

	//cout << "\n\n배열을 요소 5개 입력하세요. : ";
	//for (int i = 0; i < 5; i++) {
	//	int a = 0;
	//	cin >> a;
	//	arr[i] = a;
	//}

	////cout << "\n\n백터의 크기 : " << arr.size() << endl;

	//cout << "\n입력된 배열을 공개합니다. : ";
	//for (int j = 0; j < 5; j++) {
	//	cout << arr[j] << " ";
	//}

	//cout << "\n";

	//for (int i = 0; i <  arr.size(); i++) {
	//	if (arr[i] % 2 == 1) {
	//		arr.erase(arr.begin() + i, arr.begin() + (i + 1));
	//	}
	//}

	//cout << "\n짝수만 있는 배열을 공개합니다. : ";
	//for (int j = 0; j < arr.size(); j++) {
	//	cout << arr[j] << " ";
	//}
	//cout << "\n";

	//////////////////////////// 실습 2 ////////////////////////////

	//sort(arr.begin(), arr.end());
	//cout << "\n\n백터에서 가장 큰 거 : " << arr.back() << endl;

	//for (int i = 0; i < 5; i++) {
	//	arr[i] = arr[i] * 2;
	//}

	//cout << "\n두배로 증가된 배열을 공개합니다. : ";
	//for (int j = 0; j < 5; j++) {
	//	cout << arr[j] << " ";
	//}
	//cout << "\n";

	//cout << "\n삭제할 인덱스 번호와 값을 입력해주세요. 현재의 배열 크기 = " << arr.size(); //현재 배열크기는 5
	//cout << "\n" << arr.size() << " 보다 작은 수의 삭제하실 인덱스 값을 입력하세요. : "; //현재 배열크기는 5
	//cin >> index;
	//arr.erase(arr.begin() + index, arr.begin() + index + 1);

	//cout << "\n원하시는 인덱스가 상제된 배열을 공개합니다. \n";
	//for (int j = 0; j < 4; j++) { //배열의 크기가 하나 줄었으므로 5에서 4로 반복문 조절
	//	cout << arr[j] << " ";
	//}

	//cout << "\n";
	//cout << "\n추가할 인덱스 번호와 값을 입력해주세요. 현재의 배열 크기 = " << arr.size() ; //현재 배열크기는 4
	//cout << "\n" << arr.size() << " 보다 같거나 작은 수의 추가하실 인덱스 값을 입력하세요. : "; //현재 배열크기는 4

	//cin >> index;

	//cout << "추가하길 원하는 값 입력해주세요. : ";
	//cin >> user_num;
	//arr.insert(arr.begin() + index, user_num);

	//cout << "\n원하시는 인덱스에 원하는 값이 추가된 배열을 공개합니다. \n";
	//for (int j = 0; j < 5; j++) { //배열의 크기가 하나 늘었으므로 4에서 5
	//	cout << arr[j] << " ";
	//}
	//cout << "\n";


	////////////////////////////// 실습 1 ////////////////////////////


	//int point = 1;
	//int x = 0;
	//int y = 0;

	//while (point < 2) {
	//	cout << "행과 열의 수를 입력해보어요 \n";
	//	cin >> x;
	//	cin >> y;

	//	cout << "입력값은 : " << x << "와 " << y << "\n";

	//	if (x > 0 && y > 0) {
	//		point++;
	//	}
	//	else {
	//		cout << "둘다 양수 입력해주세요 \n";
	//	}

	//}
	//vector<vector<int>> arr2;
	//arr2.assign(x, vector<int>(y));

	//cout << "행렬의 원소를 입력하세요 \n";

	//for (int j = 0; j < x; j++) {
	//	int a = 0;
	//	for (int k = 0; k < y; k++) {
	//		cin >> a;
	//		arr2[j][k] = a;			
	//	}
	//}

	//cout << "\n\n입력된 배열을 공개합니다.";
	//for (int j = 0; j < x; j++) {
	//	cout << "\n";
	//	for (int k = 0; k < y; k++) {
	//		cout << arr2[j][k] << " ";
	//	}
	//}

	//// j[0][0] ~ j[0][3] 의 합
	//// 
	////sum += arr2[0][i];
	////sum += arr2[i][0];

	//cout << "\n\n각 행의 합을 공개합니다.";
	//for (int j = 0; j < x; j++) {
	//	int sum = 0;
	//	cout << "\n";
	//	for (int k = 0; k < y; k++) {
	//		sum += arr2[j][k];
	//	}
	//	cout << "행 " << j+1 << ":" << sum;
	//}

	//cout << "\n\n각 열의 합을 공개합니다.";
	//for (int j = 0; j < y; j++) {
	//	int sum = 0;
	//	cout << "\n";
	//	for (int k = 0; k < x; k++) {
	//		sum += arr2[k][j];
	//	}
	//	cout << "행 " << j + 1 << ":" << sum;
	//}

}