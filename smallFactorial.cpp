#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include<iomanip>

std::string multiply(std::string res,int num){
    std::string temp = "";
    int carry = 0;
    for(auto i = res.rbegin();i!=res.rend();i++){
        int tempnum =  (int(*i)-48)*num + carry;
        carry = tempnum/10;
        temp += std::to_string(tempnum%10);
    }
    if(carry!=0){ 
        std::string t = std::to_string(carry);
        std::reverse(t.begin(),t.end());
        temp += t;
    }
    std::reverse(temp.begin(),temp.end());
    return temp;
}

/*
std::string add(std::string first, std::string second){
    std::string ans = "";
    first += "0";
    int carry = 0;
    std::reverse(first.begin(),first.end());
    std::reverse(second.begin(),second.end());
    long length = std::min(first.size(),second.size());
    if(length == first.size()){
        for(int i =length;i<second.size();i++){
            first += "0";
        }
    }else{
        for(int i =length;i<first.size();i++){
            second += "0";
        }
    }
    for(long i = 0;i<first.size();i++){
        int anst = (int(first.at(i))-48) + (int(second.at(i))-48) + carry;
        carry = anst/10;
        ans += std::to_string(anst%10);
    }
    if(carry!=0){
        ans += std::to_string(carry);
    }
    std::reverse(ans.begin(),ans.end());
    return ans;
}
*/

void factorial(int num){
    std::string result = std::to_string(num);
    while(num--!=1){
 /*       std::string t = std::to_string(num);
        std::string result1 = multiply(result,int(t.at(0))-48);
        if(t.size() ==2){
            std::string result2 = multiply(result,int(t.at(1))-48);
            result = add(result1,result2);
        }else{
            result = result1;
        }*/
        result = multiply(result,num);
    }
    std::cout<<result<<std::endl;
}

int main(){
    long long int T;
    std::cin>>T;
    for(long long int i = 0;i<T;i++){
        long long int num;
        std::cin>>num;
        factorial(num);
    }
    return 0;
}
