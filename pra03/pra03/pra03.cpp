// pra03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>

int fun_add(int a, int b) {
    return a + b;
}

int fun_sub(int a, int b) {
    return a > b ? a - b : b - a;
}

int fun_mul(int a, int b) {
    return a * b;
}

int fun_divide(int a, int b) {
    return (int)a / b;
}

std::string fun_2(int a) {

    std::string result = (a % 2 == 0) ? "짝수" : "홀수";
    return result;

}


int fun_max(int a, int b, int c) {

    int max = 0;
    max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;

    return max;

}

int fun_min() {

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    int e;
    int f;
    int g;

    std::cout << "입력 4개 \n";
    std::cin >> a >> b >> c >> d;

    g = std::min({ a,b,c,d });

    /*e = std::min(a, b);
    f = std::min(c, d);
    g = std::min(e, f);*/

    return g;
    
}


int main()
{
    std::cout << "덧셈 : " << fun_add(2, 3) << std::endl;
    std::cout << "뺼셈 : " << fun_sub(2, 3) << std::endl;
    std::cout << "뺄셈 : " << fun_sub(4, 2) << std::endl;

    std::cout << "곱셈 : " << fun_mul(2, 3) << std::endl;
    std::cout << "나눗 : " << fun_divide(10, 3) << std::endl;

    std::cout << "홀짝 : " << fun_2(4) << std::endl;
    std::cout << "큰수 : " << fun_max(3, 4, 5) << std::endl;

    std::cout << "작은수 : " << fun_min() << std::endl;


}



