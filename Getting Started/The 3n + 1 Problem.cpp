#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned long a,b,max=0,n,k,t1,t2;
	while (cin >> a >> b) {
		t1=a;
		t2=b;
		max=0;
		if(a>b) swap(a,b);
		for (unsigned long i = a; i <= b; ++i) {
			n=1;
			k=i;
			while(k!=1) {
				//cout << k << endl;
				n++;
				if(k%2==0) k=k/2;
				else k=k*3+1;
			}
			if(n>max)
				max=n;
		}
		cout << t1 << " " << t2 << " " << max << endl;
	}
	return 0;
}