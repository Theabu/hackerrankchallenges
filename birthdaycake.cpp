#include <bits/stdc++.h>
//1 2 1 3 2
/*19
2 5 1 3 4 4 3 5 1 1 2 1 4 1 3 3 4 2 1
18 7*/
using namespace std;

int solve(int n, vector < int > s, int d, int m){
int sum,count,c;
sum=count=0; 
    c=0;
for(int i=0;i<n-m+1;i++){
    sum=0;
	for(int j=i;j<m+i;j++)
	{
       
		sum = sum+s[j];
		
	}
    if(sum==d){count++;}}
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
