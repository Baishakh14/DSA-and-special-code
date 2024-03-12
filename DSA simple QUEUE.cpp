#include<iostream>
using namespace std;
#define s 4
int q[s];
int t = 0;
int r = -1,f = 0;
bool isfull()
{
  if(t==s) return true;
  else return false;
}
bool isempty()
{
  if(t==0)
   return true;
    
  else return false;
}
void eq(int a)
{
   if(isfull())
   {
   cout<<"Queue is full you cann't store more element"<<endl;
   return ;
   } 
   else 
   {
    cout<<a<<" stored in queue successfully"<<endl;
    r+=1;
    q[r] = a;
    t++;
   }
}
   int deque()
   {
    if(isempty()) 
    {
      cout<<"no item in Queue for return"<<endl;
      return 0;
    }
    int val = q[f];
    f+=1;
    t-=1;
    return val;
   }   
   void printq(int a[],int si)
   {
    cout<<"queue:"<<endl;
    for(int i = 0;i<si;i++)
    {
      cout<<q[i]<<" ";
    }
    cout<<endl;
   } 
int main()
{

cout<<"Emplementing my Queue"<<endl;
eq(100);
eq(200);
printq(q,t);
eq(300);
eq(400);
eq(500);
eq(600);
printq(q,t);
  return 0;
}
