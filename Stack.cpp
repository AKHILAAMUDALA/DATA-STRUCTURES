#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Mystack{
int *arr;
int cap;
int top;
Mystack(int c){
cap=c;
arr=new int [cap];
top=-1;
}
void push(int val)
{
if(top==cap-1)
{
cout<<"stack is full"<<endl;
return;
}
top++;
arr[top]=val;
}
int pop(){
if(top==-1)
{
cout<<"stack is empty"<<"\n";
return 0;
}
//int res=arr[top];
top--;
//return res;
}
int size(){
return top+1;
}
int peek(){
if(top==-1)
{
cout<<"stack is empty"<<"\n";
return 0;
}
return arr[top];
}
bool empty(){
return top==-1;
}
};

int main() {
Mystack s(5);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.pop()<<"\n";
cout<<s.size()<<"\n";
cout<<s.empty()<<"\n";
return 0;
}
