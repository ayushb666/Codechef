#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include<iomanip>

int numberofZeros(long long int &num){
    long x = 0;
    while(num/5 != 0){
        x += num/5;
        num /= 5;
    }
    return x;
}

int main(){
    long long int T;
    std::cin>>T;
    for(long long int i = 0;i<T;i++){
        long long int num;
        std::cin>>num;
        std::cout<<numberofZeros(num)<<std::endl;
    }   
    return 0;
}
