#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%1==0){
            cout<<i<<endl;
        }
    }
    return 0;
}