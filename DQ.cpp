#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	int n,k,l;
		unsigned long long int s;
	
	while(t>0){
		s =0;k=0;l=0;
		cin>>n;
		bool u =false;
	
		unsigned long long int a,ar[n+1],sum,sum1;
		double mean;
		ar[0]=0;
		for(int i=1;i<n+1;i++){
			cin>>a;
			s = s+a;
			ar[i] = s;
		}
		
		sum = ar[n];
		mean = sum/n;
		sum1 = mean * (n-1);
		for(int j=n-1;j>=0;j--){
			if(sum1 == ar[n]-ar[j]+ar[j-1]){
			
				if(u==true){
				cout<<j<<"\n";
				k ++;
				}
				else
				{
				k=1;
				l=j;
				u=true;
			}
			}
		}
		if(k>1){
			cout<<l;
		}
		else{
			cout<<ar[n]-ar[l]+ar[l-1];
		}
		
		if(u == false){
			cout<<"impossible\n";
		}
		t--;
	}
}
