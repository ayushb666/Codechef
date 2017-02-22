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

int distance(const long x1,const long y1,const long x2,const long y2,const double range){
    if(sqrt(pow(x2-x1,2) + pow(y2-y1,2)) <= range){
       return 1; 
    }
    return 0;
}

int main(){
    int t;
    std::cin>>t;
    while(t--){
        double range;
        std::cin>>range;
        long long distance1 = 0,distance2 = 0,distance3 = 0;
        long x1 = 0,y1 = 0,x2 = 0,y2 = 0,x3 = 0,y3 = 0;
        std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int sum  = distance(x1,y1,x2,y2,range) + distance(x1,y1,x3,y3,range) + distance(x2,y2,x3,y3,range);
        if(sum>=2){
            std::cout<<"yes"<<std::endl;
        }else{
            std::cout<<"no"<<std::endl;
        }
    }
    return 0;
}
