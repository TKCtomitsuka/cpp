#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

const long long INF = 1ll<<60;
 

long long N;

int main(){
    cin >> N;
    vector<long long> a(N);
    vector<long long> dp(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    /*初期化*/
    for(int i = 0; i < N; i++){
        dp[i] = INF;
    }
    dp[0] = 0;
    for(int i = 1; i < N; i++){
        dp[i] = min(dp[i], dp[i-1] + abs(a[i] - a[i-1]));  
        if(i > 1){
            dp[i] = min(dp[i], dp[i-2] + abs(a[i] - a[i-2]));
        }
    }
    cout << dp[N-1] << endl;
}

