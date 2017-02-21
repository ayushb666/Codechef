#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include<iomanip>

int main(){
    long T;
    std::cin>>T;
    long long res[21];
    res[0] = 1;
    res[1] = 1;
    int num = 1;
    while(num++!=21){
        res[num] =  res[num-1]*num;
    }
    for(long i = 0;i<T;i++){
        std::cin>>num;
        std::cout<<res[num]<<std::endl;
    }
    return 0;
}
