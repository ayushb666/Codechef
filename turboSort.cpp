#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <set>

int main(){
    long long int T, num;
    std::cin>>T;
    std::vector<int> v;
    for(long long int i = 0;i<T;i++){
        std::cin>>num;
        v.push_back(num);
    }
    std::sort(v.begin(),v.end());
    for(auto i = v.begin();i!=v.end();i++){
        std::cout<<*i<<std::endl;
    }    

    return 0;
}
