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
    while(test--!=0){
        long long num;
        std::cin>>num;
        std::cout<<(num/2) +1<<std::endl;
    }
    return 0;
}
