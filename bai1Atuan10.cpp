#include<iostream>
using namespace std;
struct point
{
	int x,y;
};
void print(point n)
{
	cout<<"("<< n.x<<","<<n.y<< ")";
}
int main()
{
	point a;
	cin>>a.x>>a.y;
	print(a);
	return 0;
}

