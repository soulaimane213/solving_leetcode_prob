#include <iostream>
#include <vector>


using namespace std;

vector<int> replaceElements(vector<int>& arr) {
        

    vector<int> result_arr(arr.size());

    if(arr.size() == 1){
        result_arr[0] = -1;
        return result_arr;
    }

    int i =0;
    int j =0;
    int curent=0;
    int max=0;

    while (i < arr.size())
    {

        max =0;
        curent=0;        

        if(i + 1 >= arr.size()){
            result_arr[i] = -1;
            return result_arr;
        }
    
        j = i + 1;
        while(j < arr.size()){

            curent =arr[j];
            if(curent > max){
                max = curent;
            }
            j++;
        }

        result_arr[i] = max;
        i++;
    }
    
        return result_arr;
}
