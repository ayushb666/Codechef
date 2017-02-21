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
        long a,b;
        std::cin>>a>>b;
        std::cout<<a%b<<std::endl;
    }
    return 0;
}
