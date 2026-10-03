#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    int i = 0;
    int j = 0;
    string prefix = "";

    while (i < strs[0].size()) 
    {
        j = 1;

        while (j < strs.size()) 
        {

            if (i >= strs[j].size() || strs[0][i] != strs[j][i]) {
                return prefix;
            }
            j++;
        }
        
        prefix += strs[0][i];
        i++;
    }

    return prefix;
}

