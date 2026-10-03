#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool isValid(string s) {
        
    stack<char> st;

    bool flag = false;
    int i =0;
    char c;

    if(s.size() == 1){
        return flag;
    }


    while (i < s.size())
    {
        
        if(s[i] == '{' ||s[i] == '('|| s[i] == '['){
            st.push(s[i]);
        }

        if(s[i] == '}' ||s[i] == ')'|| s[i] == ']'){
            
            if(!st.empty()){

                c = st.top();

                if ((s[i] == ')' && c == '(') ||
                    (s[i] == ']' && c == '[') ||
                    (s[i] == '}' && c == '{')){
                    st.pop();
                }else{
                    flag = false;
                    return flag;
                }
            }else{
                return flag;
            }
        }

        i++;
    }
    


    if(st.empty() == true){
        flag = true;
    }


    return flag;


}
