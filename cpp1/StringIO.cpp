#include <iostream>

int main(void){
    char name[100];
    char lang[200];

    std::cout<<"이름은 무엇입니까? ";
    std::cin>>name; // string도 똑같은 방식으로.

    std::cout<<"좋아하는 프로그래밍 언어는? ";
    std::cin>>lang;

    std::cout<<"내 이름은 "<<name<<"입니다.\n"; // 이것도 가능
    std::cout<<"제일 좋아하는 언어는 "<<lang<<"입니다."<<std::endl;
    return 0;
}