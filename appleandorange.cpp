#include<iostream>
#include<vector>
using namespace std;


int main(){
    int s,na,no;na=no=0;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
        if((s<=(a+apple[apple_i]))&&((a+apple[apple_i])<=t))na++;
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
        if((s<=(b+orange[orange_i]))&&((b+orange[orange_i])<=t))no++;
    }
    cout<<na<<endl<<no;
    return 0;
}
