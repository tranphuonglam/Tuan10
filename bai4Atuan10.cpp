#include<iostream>
using namespace std;
struct point
{
	int x,y;
};
int main()
{
	point n;
	cout<<&n.x<<" "<<&n.y<<" "<<&n;
	return 0;
}
