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

void nchoosek(long long n, long long k){
    long long temp=1,x=1,y=n;
    while(y != std::max(k,n-k) && (x!= (std::min(k,n-k) + 1))){
        temp = temp*(y--)/x++;   
    }
    while(y!=std::max(k,n-k)){
        temp = temp*(y--);
    }
    while(x!=std::min(k,n-k)+1){
        temp = temp/x++;
    }
    std::cout<<temp<<std::endl;
}

int main(){
    int t;
    std::cin>>t;
    while(t--){
        long long n,k;
        std::cin>>n>>k;
        nchoosek(n-1,k-1);
    }
    return 0;
}
