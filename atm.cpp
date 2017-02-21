#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include<iomanip>

int main(){
    int amount;
    double bankBalance;
    std::cin>> amount >>bankBalance;
    std::cout << std::fixed;
    if(amount%5 == 0 && amount+0.5<=bankBalance){
        std::cout<<std::setprecision(2)<<(bankBalance - amount - 0.5)<<std::endl;
    }else{
        std::cout<<std::setprecision(2)<<bankBalance<<std::endl;
    }
    return 0;
}
