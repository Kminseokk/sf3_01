// pra04.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    int grade[5];
    double sum = 0;
    double aver;
    
    for (int i = 0; i < 5; i++) {
        std::cout << i + 1 << "번 학생의 성적을 입력하세요. : ";
        std::cin >> grade[i];
    }

    
    for (int i = 0; i < 5; i++) {
        sum += grade[i];
    }

    aver = double (sum / 5);
    std::cout << "\n 성적 평균 : " << aver << std::endl;


}

////실습 1
//std::string city[5];
//
//city[0] = "한국";
//city[1] = "일본";
//city[2] = "중국";
//city[3] = "미국";
//city[4] = "방콕";
//
//for (int i = 0; i < 5; i++) {
//    std::cout << city[i] << std::endl;
//}


//실습 2
//std::string city2[5];
//
//std::cout << "입력 5개 " << std::endl;
//for (int i = 0; i < 5; i++) {
//    std::cin >> city2[i];
//}
//
//std::cout << "\n 입력하신 값들은 다음과 같아요." << std::endl;
//for (int i = 0; i < 5; i++) {
//    std::cout << "city2[" << i << "] = " << city2[i] << std::endl;
//}
