#include <iostream>
#include <vector>

using namespace std;




bool checkIfExist(vector<int>& arr) {

    bool flag = false;

    int result =0;


    for (int i =0; i < arr.size() ;i++){
        result = arr[i] * 2;

        for (int j =0; j < arr.size() ; j++){

            if(i != j){
                if(arr[j] == result){
                    flag = true;
                }
            }
        }
    }

    return flag;



}
