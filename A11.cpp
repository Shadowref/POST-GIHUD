#include <iostream>
using namespace std;
int main(){

	int h1,h2,h3,b1,b2,b3,dem2h=0, dem2b=0;
	cout<<"mon hoc cua ban hoa = ";
	cin>>h1;
	cout<<"mon hoc cua ban hoa = ";
	cin>>h2;
	cout<<"mon hoc cua ban hoa = ";
	cin>>h3;
	cout<<"mon hoc cua ban buoi =";
	cin>>b1;
	cout<<"mon hoc cua ban buoi = ";
	cin>>b2;
	cout<<"mon hoc cua ban buoi = ";
	cin>>b3;
	if (h1<=2)dem2h++;
	if (h2<=2)dem2h++;
	if (h3<=2)dem2h++;
	if (b1<=2)dem2b++;
	if (b2<=2)dem2b++;
	if (b3<=2)dem2b++;
	if ( dem2h < dem2b){
	cout<<"hoa gioi hon buoi ";}
	else if (dem2h > dem2b){
	cout<<"buoi gioi hon hoa";}
    else{
		int tdh=h1+h2+h3, tdb=b1+b2+b3;
		if (tdh>tdh){cout<<"hoa gioi hon buoi";}
		else if (tdh<tdb) {cout<<"buoi gioi hon hoa";}
		else if (tdh=tdb){cout<<"gioi nhu nhau ";}
		}
	return 0;
}
