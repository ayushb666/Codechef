#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <list>
#include <set>

int main(){
    int test;
    std::cin>>test;
    while(test--!=0){
        long num,menu=0;
        std::cin>>num;
        if(num>2048){
            int rem = num%2048;
            int val = (num-rem)/2048;
            num = rem;
            menu += val;
        }
        while(num!=0){
            if(num%2 == 1){menu++;}
            num /= 2;
        }
        std::cout<<menu<<std::endl;
    }
}
