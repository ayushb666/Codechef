#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <list>
#include <map>
#include <string>
#include <set>
#include <deque>
#include <numeric>
#include <stdio.h>
#include <iomanip>

int main(){
    int t;
    std::cin>>t;
    while(t--){
        int num1, num2;
        std::cin>>num1>>num2;
        std::cout<<sqrt(std::abs(pow(num1,2) - pow(num2,2)))<<" "<<sqrt(pow(num1,2) + pow(num2,2))<<std::endl;
    }
    return 0;
}
