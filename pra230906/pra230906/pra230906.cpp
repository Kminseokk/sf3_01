// pra230906.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <cctype> // isdigit 함수

#include <sstream>

using namespace std;

int main()
{
    //// 실습 4 ///////////////////////////////////////////////////////
    // 
    //// 실습 4 ///////////////////////////////////////////////////////
    //// 실습 4 ///////////////////////////////////////////////////////


    string str = "Codingon";

    if (!str.empty()) {
        str[0] = tolower(str[0]);
    }

    cout << " (1) 첫 문자 소문자로 : " << str << std::endl;

    string subStr = str.substr(2, 4);

    cout << " (2) ding 문자열 : " << subStr << std::endl;

    str = "codingon";
    str.replace(1, 6, "oooooo");

    cout << " (3) coooon 바꾸기 : " << str << std::endl;

    str = "codingon";
    str.replace(1, 6, "o");

    cout << " (4) con 바꾸기 : " << str << std::endl;


    //// 실습 3 ///////////////////////////////////////////////////////
    // 
    //// 실습 3 ///////////////////////////////////////////////////////
    //// 실습 3 ///////////////////////////////////////////////////////


    //string input1, input2;

    //while (1) {
    //    cout << "첫 번째 문자열을 입력하세요: ";
    //    cin >> input1;

    //    cout << "두 번째 문자열을 입력하세요: ";
    //    cin >> input2;

    //    int result1 = 0;
    //    int result2 = 0;

    //    string ssstr = input1;
    //    stringstream ss(ssstr);

    //    string ssstr2 = input2;
    //    stringstream ss2(ssstr2);

    //    char ch1, ch2;

    //    while (ss >> ch1) {
    //        if (ch1 >= 'A' && ch1 <= 'z') {
    //            result1 = 1;
    //            //cout << "첫 번째 문자열은 숫자로만 이루어져 있지 않아요. \n";
    //        }
    //    }
    //    while (ss2 >> ch2) {
    //        if (ch2 >= 'A' && ch2 <= 'z') {
    //            result2 = 1;
    //            //cout << "두 번째 문자열 숫자로만 이루어져 있지 않아요. \n";
    //        }
    //    }
    //    if (result1 == 0 && result2 == 0) {
    //        cout << "\n 두 문자열 숫자로만 이루어져 있네요. \n";
    //        break;
    //    }
    //    else {
    //        cout << "\n숫자로만 이루어져 있지 않아요. \n";
    //    }
    //}
    //cout << " 두 문자열을 합쳤어요. : " << input1 + input2 << endl;
    ////cout << " 두 문자열을 합쳤어요. : " << input1.append(input2) << endl;

    //int a = stoi(input1);
    //int b = stoi(input2);

    //int sum = 0;
    //sum = a + b;

    //cout << "\n 두 문자열을 더했어요. : " << sum << endl;



    //// 실습 2 ///////////////////////////////////////////////////////
    // 
    //// 실습 2 ///////////////////////////////////////////////////////
    //// 실습 2 ///////////////////////////////////////////////////////



    //string input1, input2;
    //int input1_result = 1;
    //int input2_result = 1;

    //while (1) {
    //    cout << "첫 번째 문자열을 입력하세요: ";
    //    cin >> input1;

    //    cout << "두 번째 문자열을 입력하세요: ";
    //    cin >> input2;

    //    

    //    for (int i = 0; i < input1.length(); i++) {
    //        int result = isdigit(input1[i]);
    //        cout << result << endl;

    //        if (isdigit(input1[i]) == 0) { //숫자가 아니라면 0을 리턴하니까 0 일때,
    //            input1_result = 0;
    //        }
    //        else {
    //            input1_result = 2; //숫자가 맞다
    //        }
    //    }
    //    cout << "인풋1 : " << input1_result << endl; //왜 false가 아니라 0이지?

    //    for (int i = 0; i < input2.length(); i++) {
    //        int result = isdigit(input2[i]);
    //        cout << result << endl;

    //        if (isdigit(input2[i]) == 0) { //숫자가 아닌 값이라면?
    //            input2_result = 0;
    //        }
    //        else {
    //            input2_result = 2;
    //        }
    //    }

    //    cout << "인풋2 : " << input2_result << endl; //왜 false가 아니라 0이지?

    //    if (input1_result == 0 && input2_result == 0) {
    //        cout << "\n 숫자가 아닌 값 입니다. 다시 입력해보세요. \n";
    //    }
    //    else if (input1_result == 2 && input2_result == 2) {
    //        cout << "\n 숫자가 맞습니다.. \n";
    //        break;
    //    }
    //    else {
    //        cout << "\n 2숫자가 아닌 값 입니다. 다시 입력해보세요. \n";
    //    }

    //}

    //
    //cout << " 두 문자열을 합쳤어요. : " << input1 + input2 << endl;
    ////cout << " 두 문자열을 합쳤어요. : " << input1.append(input2) << endl;
    ////cout << " input 1 : " << input1 << " 그리고 " << " input 2 : " << input2 << endl;

    //int a = stoi(input1);
    //int b = stoi(input2);

    //int sum = 0;
    //sum = a + b;

    //cout << " 두 문자열을 더했어요. : " << sum << endl;




    //// 실습 1 ///////////////////////////////////////////////////////



    //string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

    //cout << " (1) 문자열 s의 길이 : " << s.length() << endl;
    //cout << " (2) 문자열 100번째 요소 : " << s[100] << endl;
    //cout << " (3) 문자열에서 첫 번째 two 찾기 : " << s.find("two") << endl;
    //cout << " (4) 문자열에서 두 번째 two 찾기 : " << s.find("two", (s.find("two")+1) ) << endl;
    //


}

