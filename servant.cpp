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
        int num;
        std::cin>>num;
        if(num<10){
            std::cout<<"What an obedient servant you are!"<<std::endl;
        }else{
            std::cout<<-1<<std::endl;
        }
    }
    return 0;
}
