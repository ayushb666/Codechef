#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <numeric>
#include <stdio.h>
#include <iomanip>

int findhcf(int a,int b){
    if(a==b){
        return a;
    }else{
        if(a>b){
            return findhcf(a-b,b);
        }else{
            return findhcf(a,b-a);
        }
    }
}

void divideByHCF(int* arr, int num){
    int hcf = arr[0];
    for(int i =1;i<num;i++){
        hcf = findhcf(hcf,arr[i]);
    }
    for(int i =0;i<num;i++){
        std::cout<< arr[i]/hcf << " ";
    }
    std::cout<<'\n';      
}

int main(){
    long T;
    std::cin>>T;
    while(T-- !=0){
        int num;
        std::cin>>num;
        int arr[num];
        for(int i =0;i<num;i++){
            std::cin>>arr[i];
        }
        divideByHCF(arr,num);       
    }
    return 0;
}
