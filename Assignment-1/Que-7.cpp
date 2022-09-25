#include <iostream>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
	cout<<"String entered: a: "<<a<<" b: "<<"\n";
	string c =a+b;
	cout<<"String c: "<<c<<"\n";
	
	int count =0;
	for(int i=0;i<c.size();i++){
		if(c[i]=='a' || c[i]=='A'){
			count++;
		}
		cout<<"i: "<<i<<" c[i]: "<<c[i]<<" count: "<<count<<"\n";
	}
	cout<<"Total a and A in string: "<<count<<"\n";
	return 0;
}