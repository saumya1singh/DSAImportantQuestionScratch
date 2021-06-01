/*

Problem Link: https://leetcode.com/problems/valid-parentheses/

*/
	
class Solution {
public:
    bool isValid(string s) {
         stack<char>st;
        if(s.length()%2!=0)
            return false;
        else{
            for(int i=0;i<s.length();i++){
                if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                    st.push(s[i]);
                }
                else if(s[i]==')'){
                    if( st.empty()==false && st.top()=='('){
                        st.pop();
                    }
                    else{
                        st.push(s[i]);
                    }
                }
                else if(s[i]=='}'){
                    if(st.empty()==false && st.top()=='{'){
                        st.pop();
                    }
                    else{
                        st.push(s[i]);
                    }
                }
                else if(s[i]==']'){
                    if(st.empty()==false && st.top()=='['){
                        st.pop();
                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
         if(st.empty()==true)
             return true;
            else 
              return false;
        }
    }
};
