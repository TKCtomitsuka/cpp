#include<iostream>
#include<algorithm>//next_permutation
using namespace std;

int main(){
    int array[]={1,22,33,45,52,55};
    do{
        for(int i=0; i<6; i++){
            cout<<array[i];
            if(i!=5)cout<<" ";
        }
        cout<<endl;
    }while(next_permutation(array,array+6));
    return 0;
}