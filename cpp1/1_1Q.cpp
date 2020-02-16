#include <iostream>

int prob1(void){
    int sum = 0;
    int num;
    for(int i = 1; i <= 5; i++){
        std::cout<<i<<"번째 정수 입력: ";
        std::cin>>num;
        
        sum += num;
    }

    std::cout<<"합계: "<<sum;
    return 0;
}

int prob2(void){
    char name[100];
    std::cout<<"이름 입력: ";
    std::cin>>name;

    char phone[20];
    std::cout<<"전화번호 입력: ";
    std::cin>>phone;

    std::cout<<"당신의 이름은: "<<name<<std::endl;
    std::cout<<"당신의 전화번호는: "<<phone<<std::endl;

    return 0;
}

int prob3(void){
    int n;
    std::cout<<"구구단 몇단? ";
    std::cin>>n;

    for(int i = 1; i <= 9; i++){
        std::cout<< n <<" * "<< i <<" = "<< n*i <<std::endl;
    }

    return 0;
}

int prob4(void){
    while(1){
        int amount;
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>amount;

        if(amount == -1){
            break;
        }

        int salary = 50 + salary * 0.12;
        std::cout<<"이번 달 급여: "<<salary<<"만원"<<std::endl;
    }
    std::cout<<"프로그램을 종료합니다.\n";
    return 0;
}