#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair <int,int> ii;
int n,m;
char room_[505][505];
int ans=0;
int Fitting(int c, int l){
	if(room_[c][l]!='.'&&room_[c][l]!='o') return 1;
	room_[c][l]='c';
	Fitting(c-1,l);
	Fitting(c+1,l);
	Fitting(c,l-1);
	Fitting(c,l+1);
	return 1;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    	for (int j = 0; j < m; j++)
    		cin>>room_[i][j];

    for (int i=1;i<n-1;i++){
    	for (int j=1;j<m-1;j++){
    		if (room_[i][j]!='o') continue;
    		ans++;
    		Fitting(i,j);
    	}
    }
    cout<<ans<<endl;
	return 0;
}