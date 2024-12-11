#include<iostream>
using namespace std;
string menu(){
    return "\n1. inizializza elementi a zero\n2. modifica i-esimo elemento da input\n3. copia i-esimo elemento nel j-esimo\n4. scambio i-esimo con j-esimo\n5. visualizza i-esimo\n6. visualizza tutti gli elementi\n7. per uscire\n";
}
int main(){
    int scelta,arr[10];
    //eventualmente inizializzo a zero l'array
    do{
        cout<<menu();
        cout<<"inserisci la scelta:\n";
        cin>>scelta;
        switch(scelta){
            case 1:
                for(int i=0;i<10;i++)
                    arr[i]=0;
                break;
            case 2:
                int pos;
                cout<<"inserisci posizione:\n";
                cin>>pos;
                if(pos>=0 && pos<=10)
                {
                    cout<<"inserisci il valore:\n";
                    cin>>arr[pos];
                }else
                    cout<<"pos fuori dal vettore, sei scemo!\n";
                break;
            case 3:
                cout<<"inserisci i e j:\n";
                int i,j;
                cin>>i>>j;
                if(i>=0 && i<=10 && j>=0 && j<=10 && i!=j){               
                    arr[j]=arr[i];
                }else
                    cout<<"uno dei due indici è fuori dal vettore oppure sono uguali, scamio fallito!\n";
                break;
            case 4:
                cout<<"inserisci i e j:\n";
                cin>>i>>j;
                if(i>=0 && i<=10 && j>=0 && j<=10 && i!=j){
                    int tmp;
                    tmp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tmp;
                }else
                    cout<<"uno dei due indici è fuori dal vettore oppure sono uguali, scamio fallito!\n";
                break;
            case 5:
                cout<<"inserisci posizione:\n";
                cin>>pos;
                if(pos>=0 && pos<=10)
                {
                    cout<<arr[pos]<<endl;
                }else
                    cout<<"pos fuori dal vettore, sei scemo!\n";
                break;
            case 6:
                for(int i=0;i<10;i++)
                    cout<<arr[i]<<" ";
                break;

        }
    }while(scelta!=7);







    return 0;
}