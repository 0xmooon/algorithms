#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

short n;
short MIN=9999;
vector<short> minids;

bool ok(vector<short>& q, short c) {
   for (int i = 0; i < c; i++){
       if (q[i] == q[c] || (c - i) == abs(q[c] - q[i])) return false;
   }
   return true;
}
    
void func(int n, vector<vector<int>> crabsv){
   vector<short> q(n);
    vector<short> sumv;
    short c = 0;
   q[0] = 0;
    short SUM = 0;
    sumv.push_back(crabsv[c][q[c]]);
    SUM+=crabsv[c][q[c]];
   while (c >= 0) {
        c ++;
       if (c == -1) break;
        if (c == n){
            if (SUM<MIN){
                MIN=SUM;
                minids = q;
            }
            c--;
            SUM-=sumv[c];
            
            sumv.pop_back();

            }else{
                q[c] = -1;
            }
        while (c >= 0) {
            q[c]++;
            if (q[c] == n || SUM>MIN){
                c--;
                SUM-=sumv[c];
                sumv.pop_back();
                
                if(c == -1){
                    return;
                }
            }else if(ok(q, c)){
                SUM+=crabsv[c][q[c]];
                sumv.push_back(crabsv[c][q[c]]);
                
                break;
            }
        }
    }
}
int main() {

    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> crabsv(n, vector<int>(n));
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cin>>crabsv[i][j];
        }
    }
    func(n,crabsv);
    
    for (int i = 0; i<minids.size(); i++) {
        cout<<minids[i]<<" ";
    }
}