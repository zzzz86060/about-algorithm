
//dfs八皇后 
//关于对角线
//对角线上的点横纵坐标相同所以求出截距就等于求出了下标
// 
#include <bits/stdc++.h>
using namespace std;
const int N = 20;
char g[20][20];
bool col[20],dg[20],udg[20]; 
int n;
void dfs(int u){
	if(u == n){
		for(int i = 0; i < n; i++){
			puts(g[i]);
		}
		cout<<endl;
	}
	for(int i = 0; i < n; i++){
			if(!col[i] && !dg[u + i] && !udg[n - u + i])
			{
				g[u][i] = 'Q';
				col[i] = dg[u + i] = udg[n - u + i] = true;
				dfs(u + 1);
				col[i] = dg[u + i] = udg[n - u + i] = false;
				g[u][i] = '.'; 
			}
		}
		
	}	
int main()
{
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			g[i][j] = '.';
		}
	}
	dfs(0);
 } 
