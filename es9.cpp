#include<iostream>
using namespace std;
int main(){
    int n,cont=0;
    cout<<"inserisci il numero di materie:"<<endl;
    cin>>n;
    int pagella[n];
    for(int i=0;i<n;i++){
        cout<<"Inserisci il "<<i+1<<"^ voto: "<<endl;
        cin>>pagella[i];
    }
    for(int i=0;i<n;i++){
        if(pagella[i]<6)
            cont++;
    }
    cout<<"Le materie insufficienti sono: "<<cont<<endl;
    if(cont==0)
        cout<<"AMMESSO"<<endl;
    else{
        if(cont>3)
            cout<<"NON AMMESSSO"<<endl;
        else
            cout<<"GIUDIZIO SOSPESO"<<endl;
    }





    return 0;
}