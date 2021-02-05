#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap N: ";
	cin>>n;
	for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
