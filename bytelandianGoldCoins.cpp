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

std::unordered_map<long long,long long> mymap;

long long getMaxCoins(long long coin){
    if(coin <= 4){
        return coin;
    }else{
        if(mymap.find(coin/2)==mymap.end()){
            mymap[coin/2] = std::max(coin/2, getMaxCoins(coin/2));
        }

        if(mymap.find(coin/3) == mymap.end()){
            mymap[coin/3] = std::max(coin/3, getMaxCoins(coin/3));
        }

        if(mymap.find(coin/4) == mymap.end()){
            mymap[coin/4] = std::max(coin/4, getMaxCoins(coin/4));
        }
        return std::max(coin,mymap[coin/2]+mymap[coin/3]+mymap[coin/4]);
    }
}

int main(){
    long long coin;
    while(std::cin>> coin){
        std::cout<<getMaxCoins(coin)<<std::endl;
    }
    return 0;
}
