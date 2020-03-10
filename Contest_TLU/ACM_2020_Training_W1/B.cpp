#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair <int,int> ii;
// typedef 1000000007 mod;
int mod = 1000000007;
int n;
char area_[1002][1002];
int path_[1002][1002];
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("a.in","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin>>area_[i][j];
    path_[0][0]= area_[0][0]=='.';
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(area_[i][j]=='*') continue;
    		if(i>0){
    			path_[i][j]+=path_[i-1][j];
    			path_[i][j]%=mod;
    		}
    		if(j>0){
    			path_[i][j]+=path_[i][j-1];
    			path_[i][j]%=mod;
    		}
    	}
    }
    cout<<path_[n-1][n-1];
	return 0;
}