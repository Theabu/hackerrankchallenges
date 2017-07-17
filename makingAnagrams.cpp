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
vector<int> findFrequencyOfCharacter(string S)
{
    
    vector<int> a(26);
    int k = 0;
    int i,j;
    for( i= 0;i<26;i++)a[i]=0;
    for( i = 97;i<=122;i++)
    {
        for( j = 0;j<S.length();j++)
        {
            if(((char)i)==S[j])
                a[k]++;
        }
        k++;
    }
    return a;
}
int compareFrequency(vector<int>x,vector<int>y,int i)
{
   int d = 0;
    if(x[i]==y[i])return d;
    else if(x[i]>y[i]){d = x[i]-y[i];return d;}
    else if(y[i]>x[i]){d = y[i]-x[i];return d;}return 0;
}



int main(){
    vector<int>A(26);
    vector<int>B(26);
    int d = 0;
    string a;
    cin >> a;
    string b;
    cin >> b;
    A = findFrequencyOfCharacter(a);
    B = findFrequencyOfCharacter(b);
    for(int i =0;i<26;i++){
    d+= compareFrequency(A,B,i);
    }
    cout <<d<< endl;
    return 0;
}
