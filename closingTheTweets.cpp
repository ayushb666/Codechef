#include <iostream>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <list>
#include <map>
#include <unordered_map>
#include <string>
#include <set>
#include <unordered_set>
#include <deque>
#include <numeric>
#include <stdio.h>
#include <iomanip>

int main(){
    int n,k;
    std::cin>>n>>k;
    std::unordered_set<int> myset;
    while(k--){
        std::string useless;
        int val;
        std::cin>>useless;
        if(useless == "CLICK"){
            std::cin>>val;
            if(myset.find(val) == myset.end()){
                myset.insert(val);    
            }else{
                myset.erase(val);
            }
        }else{
            myset.clear();
        }
        std::cout<<myset.size()<<std::endl;
    }   
}
