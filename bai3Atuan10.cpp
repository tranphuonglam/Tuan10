#include<iostream>
using namespace std;
struct point {
	int x,y;
};
void mid_point(point a,point b) {
	point c;
	c.x = (a.x+b.x)/2;
	c.y = (a.y+b.y)/2;
	cout<<"("<<c.x<<","<<c.y<<")";
}
int main() {
	point a,b;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	mid_point(a,b);
	return 0;
}
