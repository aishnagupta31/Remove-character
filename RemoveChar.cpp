#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	char r;
	cout<<"Enter the character which you want to remove: ";
	cin>>r;
	int n=s.length();
	for(int i=0;i<n;i++){
	    if(s[i]==r){
	    	for(int j=i;s[j]!='\0';j++){
				s[j]=s[j+1];
			}
		}
	}
	cout<<"Resultant string: "<<s;
}
