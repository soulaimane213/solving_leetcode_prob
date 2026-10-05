#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> addToArrayForm(vector<int>& num, int k) {
 
    

    vector<int> result_arr;

    int i = num.size() - 1;
    int carry = 0;
    int sum =0;
    int digit =0;

    while(i >=0 || k > 0){

        if(i < 0){
            i =0;
            num[i] =0;
        }

        sum = num[i] + (k % 10) + carry;
        
        if(sum >= 10){
            carry =1;
            digit = sum - 10;
        }else{
            carry =0;
            digit =sum;
        }


        result_arr.push_back(digit);
    
        k /=10;
        i--;

    }


    if(carry > 0){
        result_arr.push_back(carry);
    }

    reverse(result_arr.begin() , result_arr.end());

    return result_arr;

}
