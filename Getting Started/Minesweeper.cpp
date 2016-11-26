#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
char s[105][105];
int dx[]={1,0,-1,0,1,1,-1,-1};
int dy[]={0,1,0,-1,1,-1,1,-1};
int m,n;
int adjMines(int x,int y) {
	int nx,ny;
	int minescount=0;
	for (int i = 0; i < 8; ++i) {
		nx=x + dx[i];
		ny=y + dy[i];
		if(nx>=0 && nx<n && ny>=0 && ny<m) {
			if(s[nx][ny]=='*')
				minescount++;
		}
	}
	return minescount;
}
int main(int argc, char const *argv[])
{
	int count=0;
	while (1) {
		cin >> n >> m;
		if(m==0 && n==0)
			break;
		count++;
		if(count!=1)
			cout << endl;
		for (int i = 0; i < n; ++i)
			scanf("%s",s[i]);
		cout << "Field #" << count << ":" <<endl;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if(s[i][j]=='*')
					cout << s[i][j];
				else cout << adjMines(i,j);
			}
			cout << endl;
		}
	}
	return 0;
}