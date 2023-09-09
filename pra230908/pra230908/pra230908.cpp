// pra230908.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <fstream> //file 관련 기능을 제공하는 헤더
#include <string> 
#include <vector> // vector 헤더파일을 추가해야 사용 가능

#include <sstream> //공백 기준 저장하기.

using namespace std;

int main() {
	vector<string> info_id;
	vector<string> info_pw;

	string input_id;
	string input_pw;

	cout << "ㅡㅡㅡㅡ 회원 명부 파일 읽기 ㅡㅡㅡㅡㅡ" << endl;

	ifstream file_read("member.txt"); // 파일 선언 및 열기를 동시에
	if (file_read.fail()) {
		cout << "읽어올 파일 없음" << endl;
	}

	string line;
	while (getline(file_read, line)) { // get_line() file의 내용을 한 줄씩 읽어옴
		stringstream ss(line);
		string token1, token2;
		if (ss >> token1 >> token2) {
			info_id.push_back(token1);
			info_pw.push_back(token2);
		}
	}

	//cout << "아이디 [1]" << info_id[1];

	cout << "아이디와 비밀번호를 검증하는 부분. " << endl;

	bool exit_flag = false;

	while (1) {
		cout << "아이디를 입력해주세요. ";
		cin >> input_id;
		for (int i = 0; i < info_id.size(); i++) {
			if (input_id == info_id[i]) { //맴버의 아이디값과 입력값이 같음.
				cout << "비밀번호를 입력하세요 : ";
				cin >> input_pw;

				if (input_pw == info_pw[i]) {
					cout << "\n ***로그인 성공. " << endl;
					exit_flag = true; //로그인 맨 처음 부분을 종료하기 위한 지점 설정
					break;
				}
				else {
					cout << "\n ***비밀번호가 다릅니다. 로그인 실패. \n" << endl;
					break;
				}
			}
			else {
				
			}
		}

		if (exit_flag)
		{
			break;
		}
	}
	// cout << input_id;

	string user_tel; //입력받을 전화번호를 저장할 변수
	//vector<string> lines; //기존의 내용을 적어놓을 벡터

	ifstream read_file("member_tel.txt");
	if (read_file.fail()) {
		cout << "읽어올 파일 없음" << endl;
	}



	vector<string> tel_id;
	vector<string> tel_tel;

	string line2;
	while (getline(read_file, line2)) { // get_line() file의 내용을 한 줄씩 읽어옴
		stringstream ss(line2);
		string token1, token2;
		if (ss >> token1 >> token2) {
			tel_id.push_back(token1);
			tel_tel.push_back(token2);
		}
	}

	read_file.close();

	//////////////////////////////////////파일 읽기 끝.

	ofstream file("member_tel.txt");
	if (file.fail()) {
		cout << "읽어올 파일 없음" << endl;
	}
	//파일이 제대로 생성되었는지 확인하기 위함.
	//자동으로 생성하지 못하면 fail() 의 값이 true 가 됨.

	//input_id 랑 tel_id[i]랑 비교해서 같으면 이미 존재하니까
	//전화번호를 수정해줘야해요

	cout << "전화번호를 입력하세요 : ";
	cin >> user_tel;

	int check = 0;
	//input_id 는 사용자가 로그인할 때 썻었던 내용을 저장했던 것.

	//file << input_id << " " << user_tel << "\n";
	
	if (tel_id.size() == 0) {
		file << input_id << " " << user_tel << "\n";
		cout << "처음으로 입력되었습니다." << endl;
	}

	for (int i = 0; i < tel_id.size(); i++) {		
		if (input_id == tel_id[i]) {
			tel_tel[i] = "";
			tel_tel[i] = user_tel;
			cout << "수정 되었씁니다." << endl;
			check = 1;
		}
	}	
	for (int i = 0; i < tel_id.size(); i++) {
		if (check == 0) {
			file << input_id << " " << user_tel << "\n";
			cout << "새로 추가되었습니다." << endl;
			check = 1;
		}
		file << tel_id[i] << " " << tel_tel[i] << "\n";
	}
	

	//새로운 내용을 가장 앞에 추가
	//file << input_id << " " << user_tel << "\n";
	// 
	// 
	 //새로운 내용을 넣고 기존에 저장해놨던 배열을 다시 뒤에 붙여서
	 //앞에 새로운 내용을 추가한다.
	//for (int i = 0; i < tel_id.size(); i++) {
	//	file << tel_id[i] << " " << tel_tel[i] << "\n";
	//}
	// 
	//기존의 내용들을 붙이는 과정.


	file.close();
	cout << "파일 작성이 종료 되었습니다. \n\n" << endl;

	//파일 쓰기 종료



	// 스트링스트링으로 저장이 됐어?

	//cout << "첫 번째 열 데이터:" << endl;
	//for (const string& value : info_id) {
	//	cout << value << endl;
	//}

	//cout << "두 번째 열 데이터:" << endl;
	//for (const string& value : info_pw) {
	//	cout << value << endl;
	//}



}

////////////////////////////////////////////////////////////////////
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//



int main2() {

	vector<string> id;
	vector<string> pw;

	vector<string> info_id;
	vector<string> info_pw;

	string uid;
	string upw;

	cout << "3명의 회원에 대한 이름과 비밀번호를 순차적으로 입력하세요." << endl;

	for (int i = 0; i < 3; i++) {
		cout << i+1 << "번째 회원 : ";
		cin >> uid;
		cin >> upw;

		id.push_back(uid);
		pw.push_back(upw);
	}

	//cout << id[0] << pw[0] << "은 첫 번째" << endl;
	cout << "\n";

	// 입력받는 과정 종료 

	ofstream file("member.txt");
	//output 파일을 쓰기 위한 준비

	if (file.fail()) cout << "파일 쓰기 실패" << endl;
	//파일이 제대로 생성되었는지 확인하기 위함.
	//자동으로 생성하지 못하면 fail() 의 값이 true 가 됨.

	for (int i = 0; i < 3; i++) {
		file << id[i] << " " << pw[i] << endl;
	}
	file.close();
	cout <<"파일 작성이 종료 되었습니다. \n\n" << endl;

	//파일 쓰기 종료

	cout << "ㅡㅡㅡㅡ 회원 명부 파일 읽기 ㅡㅡㅡㅡㅡ" << endl;

	ifstream file_read("member.txt"); // 파일 선언 및 열기를 동시에
	if (file_read.fail()) {
		cout << "읽어올 파일 없음" << endl;
	}

	string line;
	while (getline(file_read, line)) { // get_line() file의 내용을 한 줄씩 읽어옴
		cout << line << endl;
	}

	file_read.close();


	return 0;
}

////////////////////////////////////////////////////////////////////
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//
// 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0//


int main_1() // 실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0  실습 0   
{
        
    //ifstream file; // 파일을 담을 변수 선언, 읽어오기 위한 파일.

	ifstream file_read("hello.txt"); // 파일 선언 및 열기를 동시에
	if (file_read.fail()) {
		cout << "읽어올 파일 없음" << endl;
	}

	//string file_str = "";
	vector<string> file_str;
	string line;

	while (getline(file_read, line)) { // get_line() file의 내용을 한 줄씩 읽어옴
		file_str.push_back(line); //한줄 씩 뒤에 저장함
	}

	file_read.close(); //파일을 열고 닫기 필수.

	// 파일을 읽어오고 백터에 저장하는 과정 끝

	reverse(file_str.begin(), file_str.end());
	//백터를 앞과 뒤를 치환함

    ofstream file2("output.txt");
	//output 파일을 쓰기 위한 준비.

    if (file2.fail()) cout << "파일 쓰기 실패" << endl; 
    //파일이 제대로 생성되었는지 확인하기 위함.
    //자동으로 생성하지 못하면 fail() 의 값이 true 가 됨.

	for (const string& str : file_str) {
		file2 << str << endl;
	}
	//file_str 은 위에서 input 의 파일을 읽은 값들을
	//저장한 벡터 (참고 line 22).
	//이를 output에 한줄씩 저장함.

	file2.close();
	//파일 닫기.


	ifstream file_read2("output.txt"); // 파일 선언 및 열기를 동시에
	if (file_read2.fail()) {
		cout << "마지막 과정, 파일 없음" << endl;
	}

	string file_str2 = "";
	string line2;
	while (std::getline(file_read2, line2)) { // get_line() file의 내용을 한 줄씩 읽어옴
		cout << line2 << endl;
	}

	file_read2.close();

	return 0;
}
