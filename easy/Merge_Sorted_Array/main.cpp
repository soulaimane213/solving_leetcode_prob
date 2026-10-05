#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int temp =0;

     for(int i =0;i < n ; i++){

        nums1[i + m] = nums2[i];
     }

     int i =0;
     while(i < m + n){
        if(i + 1 < (m + n) && nums1[i] > nums1[i + 1]){
            temp = nums1[i];
            nums1[i] = nums1[ i + 1];
            nums1[i + 1] = temp;
             i = 0 ;
             continue;
        }
        i++;
     }

    
    
     for(int i =0;i < m + n ; i++){

        cout << nums1[i];
    
    }


}

