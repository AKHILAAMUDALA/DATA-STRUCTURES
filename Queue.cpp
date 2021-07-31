#include <iostream>
using namespace std;
struct MyQueue{
int *arr;
int cap,size;
MyQueue(int c){
cap=c;
size=0;
arr=new int[cap];
}
bool isfull()
{
		return size==cap;
}
bool isempty()
{
	return size==0;
}
void enque(int val)
{
if(isfull())
{
	return;
}
arr[size]=val;//[20,30,40,60,70]
size++;//1 2 3 4 5
}
void deque()
{
if(isempty())
{
return;
}
for(int i=0;i<size-1;i++)
{
arr[i]=arr[i+1];
}
size--;//[20,30,40]
}
int getfront()
{
if(isempty())
{
return -1;
}
return arr[0];
}
int getrare()
{
if(isempty())
{
return -1;
}
return arr[size-1];
}
};


int main() {
MyQueue Q(5);
Q.enque(10);
Q.enque(20);
Q.enque(30);
Q.enque(40);
Q.deque();
cout<<Q.getfront()<<"\n";//20
cout<<Q.getrare()<<"\n";//40
Q.enque(60);
Q.enque(70);
cout<<Q.isempty()<<"\n";//0
cout<<Q.isfull()<<"\n";//0
return 0;
}	
