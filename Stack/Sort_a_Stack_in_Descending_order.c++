/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

void correctPosition(stack<int>&s, int num)
{
 if(s.empty())
 {
     s.push(num);return;
 }
 int num1=s.top();
 if(num>num1)
 {
     s.push(num);return;
 }
 else
 {
     s.pop();
     correctPosition(s,num);
     s.push(num1);
 }
}


/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   if(s.empty())
   {
       return;
   }
   int num=s.top();
   s.pop();
   sort();
   correctPosition(s,num);
   
}
