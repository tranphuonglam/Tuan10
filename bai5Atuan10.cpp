#include<iostream>
using namespace std;
struct A
{
	char *name;
};
struct B
{
	int diem;
};
int main()
{
	A array[2];
	//B array1[100];
	array[1].name = "K";
	cout<<array[1].name;
	
	return 0;
}
