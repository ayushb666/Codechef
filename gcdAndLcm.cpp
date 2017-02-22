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

long gcd(long a,long b){
    if(a==0){
        return b;
    }else if(b==0){
        return a;
    }else{
        if(a>b){
            return gcd(a%b,b);
        }else{
            return gcd(a,b%a);
        }
    }
}

int main(){
    int t;
    std::cin>>t;
    while(t--){
        long num1, num2;
        std::cin>>num1>>num2;
        long g = gcd(num1,num2);
        long long l = (num1*num2)/g;
        std::cout<<g<<" "<<l<<std::endl;
    }
    return 0;
}
