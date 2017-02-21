#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <list>
#include <set>

int main(){
    int test;
    std::cin>>test;
    while(test-- !=0){
        long num;
        std::cin>>num;
        int a,b;
        a = num%10;
        std::string temp = std::to_string(num);
        b = int(temp.at(0))-48;
        std::cout<< a+b<<std::endl; 
    }
    return 0;
}
