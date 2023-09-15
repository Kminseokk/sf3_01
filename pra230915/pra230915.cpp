// pra230915.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	srand(time(nullptr)); // 매번 같은 값을 생성하려면 srand() 함수에 seed 전달.
	vector<int> lotto;
	int count =0;
		
	//int randomNumber = rand(); // 0 ~ 32767 사이의 랜덤한 숫자. 


	while (lotto.size() < 6) { //로또의 크기가 6이 될 때까지.		
		count = count + 1;
		int num = rand() % 45 + 1; // 범위를 한정하고 싶다면 나머지 이용하기			
		lotto.push_back(num);
					
		sort(lotto.begin(), lotto.end()); //정렬하고 			
		lotto.erase(unique(lotto.begin(), lotto.end()), lotto.end()); //중복값제거

	}

	cout << "로또 번호는 ";
	for (int i : lotto) {
		cout << i << " ";
	}
	cout << "입니다 " << count << endl;





}
