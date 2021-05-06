
#include<iostream>
using namespace std;
struct point {
	int x,y;
};
void thamtri(point n) {
	cout<<&n;
}
void thamchieu(point &n) {
	cout<<&n;
}
int main() {
	point n;
	cout<<&n<<endl;
	thamtri(n);
	cout<<endl;
	thamchieu(n);
	return 0;
}
