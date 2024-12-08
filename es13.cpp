#include<iostream>
using namespace std;
int main(){
    int numOrdini,numBottiglioni,totBottiglioni=0;
    float p1,p2,prezzoBottiglione,ricavo=0;
    do{
        cout<<"Inserisci il prezzo del Bottiglione:"<<endl;
        cin>>prezzoBottiglione;
        if(prezzoBottiglione<=0)
            cout<<"il prezzo deve essere maggiore di 0!"<<endl;
    }while(prezzoBottiglione<=0);    
    do{
        cout<<"p1 e p2 devono essere compresi tra 0 e 100 e p1<p2"<<endl;
        cout<<"inserisci p1:"<<endl;
        cin>>p1;
        cout<<"inserisci p2:"<<endl;
        cin>>p2;
    }while(p1>=0 && p1<=100 && p2>=0 && p2<=0 && p1<p2);    
    cout<<"Inserisci il numero di ordini:"<<endl;
    cin>>numOrdini;
    for(int i=0;i<numOrdini;i++){
        cout<<i+1<<"^ ordine, inserisci numero bottiglioni:"<<endl;
        cin>>numBottiglioni;
        totBottiglioni+=numBottiglioni;
        if(numBottiglioni>=20 && numBottiglioni<=39)
            ricavo+=numBottiglioni*(prezzoBottiglione-prezzoBottiglione*p1/100);
        else if(numBottiglioni>=40)
            ricavo+=numBottiglioni*(prezzoBottiglione-prezzoBottiglione*p2/100);
        else
            ricavo+=numBottiglioni*prezzoBottiglione;
    }
    cout<<"tot bottiglioni ordinati: "<<totBottiglioni<<endl;
    cout<<"ricavo: "<<ricavo<<endl;









    return 0;
}