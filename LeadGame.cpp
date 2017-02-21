#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <list>

int main(){
    long rounds;
    int a,b,diff=0,maxDiff=0,winner=1;
    int acc1 = 0, acc2 = 0;
    std::cin>>rounds;
    for(long i = 0;i<rounds;i++){
        std::cin>>a>>b;
        acc1 += a;
        acc2 += b;
        diff = (acc1-acc2)>0?(acc1-acc2):(acc2-acc1);
        maxDiff = diff>=maxDiff?diff:maxDiff;
        if(diff == maxDiff){
            if(acc1>=acc2){ winner = 1;}
            else{winner = 2;}
        }
    }
    std::cout<<winner<<" "<<maxDiff;
    return 0;
}
