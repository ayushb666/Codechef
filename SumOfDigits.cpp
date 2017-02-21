#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <list>

int sumofDigits(long int &num){
    int sum = 0;
    while(num !=0){
        sum += num%10;
        num /= 10;
    }   
    return sum;
}

int main(){
    int test;
    std::cin>>test;
    for(int i =0;i<test;i++){
        long int num;
        std::cin>>num;
        std::cout<<sumofDigits(num)<<std::endl;       
    }
    return 0;
}
