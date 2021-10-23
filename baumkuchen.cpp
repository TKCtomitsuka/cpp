#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> a(2*N);
    long long tot = 0 ;
    for(int i=0; i< N; i++){
        cin >>  a[i] , a[i+N] = a[i] , tot +=a[i];
    }

    long long lb = 0, ub = 1ll<<60 ;
    while (ub -lb > 1){
        long long mid = lb + (ub - lb)/2;

        vector<int> nextcut(N,-1) ;
        vector<long long> Size(N,-1) ;
        int right = 0;
        long long sum = 0;
        for(int left = 0; left < N; left++){
            while(right < 2*N && sum < mid){
                sum += a[right] ;
                right++ ;
            }

            if (sum >= mid){
                nextcut[left] = right ;
                Size[left] =sum;
            }
            if (right == left){
                right ++ ;
            }
            else sum -= a[left]; 
        }
    
        bool check = false;
        for(int i=0; i < N; i++){
            int second_cut = nextcut[i];
            if (second_cut == -1) continue ;
            if (Size[i] >= tot) continue ;

            second_cut %=N ;
            int third_cut = nextcut[second_cut];
            if (third_cut == -1) continue;
            if (tot - Size[i] -Size[second_cut] >= mid) check = true;
        }

        if (!check) ub = mid;
        else lb = mid;
    }

    cout << lb << endl;

}