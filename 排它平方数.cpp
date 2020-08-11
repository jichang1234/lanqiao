#include<iostream>
#include<sstream>
using namespace std;
//检查xx中是否含有x中的元素 
 void i2s(long long x,string &basic_string){
 	stringstream ss;
 	ss<<x;
 	ss>>basic_string;
 	
 }
 bool check(long long x,long long xx)
{
	string s_x;
	string s_xx;
	i2s(x,s_x);
	i2s(xx,s_xx);
	for(int i=0;i<s_x.length();i++){
		if(s_xx.find(s_x[i])!=string::npos)
		return false;
	}
	return true;
 }

int main()
{
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			if(j!=i)
			for(int k=0;k<10;k++){
				if(k!=i&&k!=j)
				for(int l=0;l<10;l++){
					if(l!=i&&l!=j&&l!=k)
					for(int m=0;m<10;m++){
						if(m!=i&&m!=j&&m!=k&&m!=l)
						for(int n=0;n<10;n++){
							if(n!=i&&n!=j&&n!=k&&n!=l&&n!=m){
							long long x=100000*i+10000*j+1000*k+100*l+10*m+1*n;
							if(check(x,x*x)){
								cout<<x<<' '<<x*x<<endl;
							}
							}
						}
					}
					
				}
			}
		}
	}
}
//注意C/C++中int取值范围 
//int一般为4字节（占32位）整形
//int的取值范围为：- 2^31 ~ 2^31 - 1,即-2147483648 ~ 2147483647 
