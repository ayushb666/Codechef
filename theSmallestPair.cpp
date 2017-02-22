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

// I have given 2 possible solution for this one and num here does not matter you can use set for big and small one
//Just tried a lil bit optimization.

int main(){
    long t;
    std::cin>>t;
    while(t--!=0){
        long num,min1=0,min2=0,temp;
        std::multiset<long> myset;
        std::cin>>num;
        if(num ==2){
            std::cin>>min1>>min2;
            std::cout<<min1+min2<<std::endl;
        }
        else if(num<=100)
        {
            while(num-- !=0){
                std::cin>>temp;
                myset.insert(temp);
            } 
            std::multiset<long>::iterator it =myset.begin();
            std::cout<<(*it)+(*(++it))<<std::endl;
            myset.clear();
        }
        else
        {
            while(num-- !=0){
                std::cin>>temp;
                if(min1==0&&min2==0){min1=min2= temp;}
                else{
                    if(temp<min1){
                        min2 = min1;
                        min1 = temp;
                        continue;
                    }
                    min2 = temp<min2?temp:min2;
                }
            } 
            std::cout<<min1+min2<<std::endl;
        }
    }
    return 0;
}
