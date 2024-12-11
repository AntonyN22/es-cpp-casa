#include<iostream>
using namespace std;
int main(){
    int arr[10],sum=0;
    for(int i=0;i<10;i++){
        cout<<i+1<<"^ elemento: "<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
        sum+=arr[i];
    }
    cout<<endl;
    cout<<"la somma è: "<<sum<<endl;



    return 0;
}