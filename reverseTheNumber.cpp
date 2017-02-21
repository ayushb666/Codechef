#include <iostream>
#include <math.h>
#include <vector>
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
    int test;
    std::cin>>test;
    while(test--!=0){
        long num;
        std::cin>>num;
        while(num%10 == 0){
            num /= 10;
        }
        std::string temp = std::to_string(num);
        std::reverse(temp.begin(),temp.end());
        std::cout<<temp<<std::endl; 
    }
    return 0;
}
