#include <iostream>

using namespace std;

int main(){
    long long X,Y,A,B;
    cin >> X >> Y >> A >> B;
    long long exp =0; 
    while(B + X >= A * X && A*X < Y){
        exp++ ;
        X *= A;
    }
    cout << exp+(Y-1-X)/B << endl;
}