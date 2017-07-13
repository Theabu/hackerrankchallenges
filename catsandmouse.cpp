#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int q,a,b,i;
    cin >> q;
    int x[q],y[q],z[q];
    for(int a0 = 0; a0 < q; a0++){
        cin >> x[a0] >> y[a0] >> z[a0];
    }
    for( i = 0;i<q;i++)
    {
        a = x[i]-z[i];
        b = y[i]-z[i];
     if(abs(a)!=abs(b)){
        if(((a<=0)&&(b<=0))||((a>=0)&&(b>=0)))
           {
               if(abs(a)>abs(b))
                   cout<<"Cat B"<<endl;
               else if(abs(a)<abs(b)) cout<<"Cat A"<<endl;
           }
        else if(((a<=0)&&(b>=0))||((a>=0)&&(b<=0)))
           {
               if(abs(a)>abs(b))cout<<"Cat B"<<endl;
               else cout<<"Cat A"<<endl;
           }
     }
        else cout<<"Mouse C"<<endl;
    }
   /
    
    return 0;
}
