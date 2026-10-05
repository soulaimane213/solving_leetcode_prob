#include <iostream>
#include <vector>

using namespace std;



void duplicateZeros(vector<int>& arr) {



    vector<int> temp_arr(arr.size());

    int i =0;
    int k =0;


    while(k < arr.size()){

        if(arr[i] == 0){
            k += 2;
            i++;
            continue;

        }else{
            temp_arr[k] = arr[i];
            k++;
        }
        i++;
    }

    for(int i =0; i < temp_arr.size(); i++){
        arr[i] = temp_arr[i];
    }



}

