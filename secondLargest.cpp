#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include<iomanip>

int main(){
    long T;
    std::cin>>T;
    while(T-- !=0){
        long long a,b,c;
        std::cin>>a>>b>>c;
        if((a>b && c>a) || (a<b && a>c)){
            std::cout<<a<<std::endl;
        }else if((b>a && c>b) || (b<a && b>c)){
            std::cout<<b<<std::endl;
        }else{
            std::cout<<c<<std::endl;
        } 
    }
    return 0;
}
