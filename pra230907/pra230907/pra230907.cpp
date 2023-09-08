// pra230907.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string t = "5";

    string g = "2";

    int b = stoi(g);

    int cnt = 0;
    long target = 0;

    cout << "gdgag " << b << " ";

    for (int i = 0; i < t.size()-(g.size()-1) ; i++) {
        cout << "잘라낸 값 : " << t.substr(i, g.size()) << "\n";

        target = stof(t.substr(i, g.size()));

        if (b >= target) {
            cnt++;
        }

    }
    cout << "정답의 개수 : " << cnt;


    //string str = "230907 mis's birthday 0611";

    //stringstream ss(str);

    //int num;

    //while (ss >> num) cout << num;
    //cout << "\n\n\n";



    // 옹알이 1 ///////////////////////////////////////////////

    //int answer = 0;
    //int i;
    //int j;
    //vector<string> bab = { "aya", "ye", "woo", "ma" };

    //vector<string> bab2 = { "ayaye", "uuu", "yeye", "yemawoo", "yemaye" };
    //
    ////cout << bab2[1]; //uuuma
    ////cout << bab2.size(); //5

    //string s = "";


    //for (i = 0; i < bab2.size(); i++) {
    //    s = bab2[i];

    //    for (j = 0; j < bab.size(); j++) { //bab 소리가 4개니까 4번 반복해서 4번 지우기.
    //        if (s.find(bab[j]) != string::npos) { //문자를 찾을경우 문자의 위치를 반환함.
    //            s.replace(s.find(bab[j]), bab[j].length(), " "); //찾은 위치에 bab[j] 길이만큼 공백화
    //        }
    //    }
    //    s.erase(remove(s.begin(), s.end(), ' '), s.end()); //공백들을 전부 지움
    //    if (s == "") { //s가 공백화 됐다면 정답임.
    //        answer += 1;
    //    }               
    //}cout << "엔서가 몇개? " << answer << endl;


}
