#include <iostream>
#include <math.h>
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
        long num1,num2;
        std::cin>>num1>>num2;
        std::cout<<std::max(num1,num2)<<" "<<num1+num2<<std::endl;
    }
    return 0;
}
