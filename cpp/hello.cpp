#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,num;
		cin>>s1;
		num=s1;
		int len=s1.length();
		for(int i=0;i<len/2;i++){
			s1[len-i-1]=s1[i];
		}
		if(s1>num){
			cout<<s1<<endl;
		}else{
			int mid=(len-1)/2;
			for(int i=mid;i>=0;i--){
				if(s1[i]!='9'){
					s1[i]=(s1[i]+1);
					break;
				}else{
					s1[i]='0';
				}
			}
			for(int i=0;i<len/2;i++){
				s1[len-i-1]=s1[i];
			}
			if(s1[0]=='0'){
				s1+='1';
				s1[0]='1';
			}
			cout<<s1<<endl;
		}
	}
	return 0;
}
