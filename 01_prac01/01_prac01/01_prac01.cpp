// 01_prac01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::string user_name;

    int user_num;

    int qa3_num1;
    int qa3_num2;
    std::string qa_oper;

    std::cout << "\nㅡㅡㅡㅡ*실습2*ㅡㅡㅡㅡ\n";
    std::cout << "이름을 입력해주세요.\n";
    std::cin >> user_name;

    if (user_name == "홍길동") {
        std::cout << "남자\n";
    }
    else if (user_name == "성춘향") {
        std::cout << "여자\n";
    }
    else {
        std::cout << "잘 모르겠서요\n";
    }

    std::cout << "\nㅡㅡㅡㅡ*실습3*ㅡㅡㅡㅡ\n";
    std::cout << "숫자를 입력해주세요.\n";
    std::cin >> user_num;

    if (user_num % 5 == 0) {
        std::cout << user_num << " 은 5 의 배수입니다.\n";
    }
    else {
        std::cout << user_num << " 은 5 의 배수가 아닙니다.\n";
    }

    std::cout << "\nㅡㅡㅡㅡ*실습4*ㅡㅡㅡㅡ\n";
    std::cout << "숫자를 입력해주세요.\n";
    std::cin >> qa3_num1;
    std::cin >> qa3_num2;

    std::cout << qa3_num1 << " 와 " << qa3_num2 << " 가 입력 되었습니다.\n";

    std::cout << "\n연산자를 입력해주세요. (+ - * / )\n";
    std::cin >> qa_oper;
    std::cout << "연산 결과 ㅡㅡ> ";
    
    if (qa_oper == "+") {
        std::cout << " 더하기 : " << qa3_num1 + qa3_num2 << " 입니다.\n";
    }
    else if (qa_oper == "-") {
        std::cout << " 빼기 : " << qa3_num1 - qa3_num2 << " 입니다.\n";
    }
    else if (qa_oper == "*") {
        std::cout << " 곱하기 : " << qa3_num1 * qa3_num2 << " 입니다.\n";
    }
    else if (qa_oper == "/") {
        std::cout << " 나누기 : 몫 " << qa3_num1 / qa3_num2 << " 나머지 : " << qa3_num1 % qa3_num2 << " 입니다.\n";
    }
    else {
        std::cout << "입력하신 연산자는 " << qa_oper << " 입니다. 연산자를 알 수 없습니다. 제대로 입력하셨는지 확인해주세요.\n";
    }

}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
