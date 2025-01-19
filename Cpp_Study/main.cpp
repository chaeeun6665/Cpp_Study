//
//  main.cpp
//  Cpp_Study
//
//  Created by Jayce Lee on 1/16/25.
//

#include <iostream>
#include <locale>
using namespace std;


wchar_t wch = L'안';
char str[] = {'h', 'e', 'l', 'l', 'o'};
char str2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

char str3[] = "Hello World";
wchar_t str3[] = L"Hello World"; //유니코드
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    bool isFemale;
//    bool isMale;
    
//    cout << wch << endl;
    wcout << wch << endl;
    wcout.imbue(locale("ko_KR.UTF-8"));
    cout << str << endl;
    
    return 0;
    
}
