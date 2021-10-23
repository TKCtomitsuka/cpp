#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();
    int count =0;
    for(int i=0; i < N ; i++){
        if(S[i]!=S[N-i-1]) count++;
    }
    cout << count/2 << endl;
}