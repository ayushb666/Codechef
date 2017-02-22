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
    long t;
    std::cin>>t;
    while(t--){
        long b,i =1;
        std::cin>>b;
        long long num = 0;
        while(b/2 - i >0){
            num += ((b/2) - i++);
        }
        std::cout<<num<<std::endl;
    }
    return 0;
}
