#include<stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;bool isRedundant=false;
    for(int i=0;i<s.length();i++)
    {
       char ch=s.at(i);
        if(ch=='('||ch=='+'||ch=='-'||ch=='/'||ch=='*')
        {
            st.push(ch);
        }
        else
        { 
              if(ch==')')
            {
            isRedundant=true;
        if(st.empty())
        {
            return true;
        }
            
          
                while(st.top()!='(')
                {
             if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')
             {
                 isRedundant=false;
             }
                    st.pop();
                }
                  if(isRedundant==true)
                      return true;
                  st.pop();
            }
        }
            }
        return false;

}
