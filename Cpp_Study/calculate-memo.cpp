//
//  calculate-memo.cpp
//  Cpp_Study
//
//  Created by Jayce Lee on 1/30/25.
//

#include "calculate-memo.hpp"
#include <iostream>
//iostream을 개별적으로 추가하는 이유
//.cpp 파일에서 필요한 헤더는 개별적으로 포함해야 한다.

//* #include는 파일별로 독립적이다.
// #include <iostream>은 그 파일에서만 유효하다.

using namespace std;  // std 네임스페이스 생략 가능

/*
 input과 output
 input으로 무엇을 받고, output으로 무엇을 받을지 정해준다.
 
 반환타입 함수이름(인자타입 매개변수)
{
 함수 내용
 
 return ---;
 }
 */

//Hello World를 콘솔에 출력하는 함수를 만들어보자!
//input : 없음 / output : 없음
//타입 : int float double char -- void

void PrintHelloWorld()
{
    cout << "Hello World" << endl;
    
    return;
}

void PrintNumber(int number) {
    cout << "넘겨주신 숫자는 " << number << " 입니다." << endl;
}

//2를 곱하고 결과물을 뱉는 함수
//input : int / output : int

int MultiplyBy2(int a) {
    int b = a * 2;
    return 0;
}

// 두 숫자를 곱해서 결과물을 뱉는 함수

int MultiplyBy(int a, int b) {
    int c = a * b;
    return c;
}

