#include<iostream>
using namespace std;
int main(){
    
    while(1){
        int scelta,a,b;
        char uscita;
        cout<<"Inserisci a e b: ";
        cin>>a>>b;
        cout<<"1. somma, 2. sottrazione, 3. prodotto, 4. divisione"<<endl;
        cin>>scelta;
        switch(scelta){
            case 1:
                cout<<"somma= "<<a+b<<endl;
                break;
            case 2:
                cout<<"sottrazione= "<<a-b<<endl;
                break;
            case 3:
                cout<<"prodotto: "<<a*b<<endl;
                break;
            case 4:
                if(b!=0)
                    cout<<"divisione: "<<a/b<<endl;
                else
                    cout<<"b è uguale a zero, operazione non valida!"<<endl;
                break;
            default:
                cout<<"operazione non valida!"<<endl;
                break;

        }
        cout<<"vuoi fare altra operazione o vuoi uscire y/n"<<endl;
        cin>>uscita;
        if(uscita=='n')
            break;

    }





    return 0;
}