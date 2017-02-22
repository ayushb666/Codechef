#include <iostream>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <list>
#include <map>
#include <string>
#include <set>
#include <deque>
#include <numeric>
#include <stdio.h>
#include <iomanip>

void displayPostFix(const std::string &exp){
    std::stack<char> op;
    std::string ans;
    for(auto itr = exp.begin(); itr != exp.end(); itr++){
        if(*itr != '(' && *itr != ')'){
            if(*itr == '+' || *itr == '-' || *itr == '*' || *itr == '/' || *itr == '%' || *itr == '^'){
                op.push(*itr);
            }else{
                ans += *itr;
            }            
        }else if(*itr == ')'){
            ans += op.top();
            op.pop();
        }
    }
    std::cout<<ans<<std::endl;
}

int main(){
    int t;
    std::cin>>t;
    while(t--){
        std::string exp;
        std::cin>>exp;
        displayPostFix(exp);       
    }
    return 0;
}
