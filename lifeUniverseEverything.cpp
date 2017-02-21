#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>

int main(){
    int val;
    do{
        std::cin>>val;
        if (val!=42){
            std::cout<<val<<std::endl;
        }
    }while(val!=42);
}
