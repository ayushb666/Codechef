#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include<iomanip>

int main(){
    long long int n,k;
    long long int count =0;
    std::cin>>n>>k;
    for(long long int i =0;i<n;i++){
        long long int x;
        std:: cin>>x;
        if(x%k == 0){
            count++;
        }
    }
    std::cout<<count<<std::endl;
    return 0;
}
