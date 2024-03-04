#include<bits/stdc++.h>
using namespace std;
int main(){

	//pointers are varibales which are used to store the address of the variable

	int x=10; //normal/data variable

	int *p; //declaration of the variable

	p=&x;  //initializing the address of x to the pointer p

	cout<<x<<endl; //prints the original value which is 10

	cout<<&x<<endl; //prints the address/memory location of x which is like 0x61ff042

	cout<<p<<endl;  //prints the address/memor location of x which stored in p pointer 0x61ff042

	cout<<*p<<endl; //this is called dereferencing p->x=value stroes the referece varibal actual value

	cout<<&p<<endl; //this prints the address of new pointer  0x61ff052 


}
