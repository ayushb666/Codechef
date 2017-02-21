#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <list>
#include <set>

int main(){
    long test;
    std::cin>>test;
    for(long i =0;i<test;i++){
        std::string number;
        long count=0L;
        std::cin>>number;
        for(auto it = number.begin() ; it!= number.end();it++){
            if(*it == '4'){
                count++;
            }
        }
        std::cout<<count<<std::endl;
    }
    return 0;
}
