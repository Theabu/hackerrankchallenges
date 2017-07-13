#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    if(v1<v2)
        return "NO";
    int hp1,hp2;
    hp1 = x1;
    hp2 = x2;
    while(hp1<hp2)
    {
        hp1+=v1;
        hp2+=v2;
    }
    if(hp1==hp2)return "YES";
    else return "NO";
        
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
