#include<bits/stdc++.h>
using namespace std;
long long a[1005][1005];

int main(){
	int n,m;
	cin>>n>>m;
	long long row_sum[n],col_sum[m];
	fill(row_sum,row_sum+n,0);
	fill(col_sum,col_sum+m,0);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		scanf("%lld",&a[i][j]);
		row_sum[i]+=a[i][j];
		}
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			col_sum[j]+=a[i][j];
		}
	}
	int row_even_num=0,col_even_sum=0;
	for(int i=0;i<n;i++)
	if(row_sum[i]%2==0)
	row_even_num++;
	for(int j=0;j<m;j++)
	if(col_sum[j]%2==0)
	col_even_sum++;
	
	if(abs(col_even_sum-row_even_num)%2!=0)
	cout<<-1<<endl;
	else
	cout<<max(col_even_sum,row_even_num)<<endl; 
	
} 
