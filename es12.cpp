#include<iostream>
using namespace std;
int main(){
    int n,cont=0,max=0,sommaPari=0,sommaDispari=0;
    while(1){
        cout<<"Inserisci un numero, 0 per terminare: "<<endl;
        cin>>n;
        if(n==0)
            break;
        cont++;
        if(n%2==0)
            sommaPari+=n;
        else
            sommaDispari+=n;
        if(n>max)
            max=n;
    }
    cout<<"tot numeri inseriti: "<<cont<<endl;
    cout<<"max: "<<max<<endl;
    cout<<"somma pari: "<<sommaPari<<endl;
    cout<<"somma disari: "<<sommaDispari<<endl;






    return 0;
}