#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int scelta,p1[50],p2[50],i=0;

    do{
        cout<<"1. Inserisci punteggi nuovo tiro\n2. Cancellare punteggio inserito per errore e sostituirlo con valore corretto\n3. termine gara e stampa risultati\n4. esci dal programma"<<endl;
        cin>>scelta;
        switch(scelta){
            case 1:
                if(i<50){
                    cout<<"punteggio giocatore 1:"<<endl;
                    cin>>p1[i];
                    cout<<"punteggio giocatore 2:"<<endl;
                    cin>>p2[i];
                    i++;
                }
                else{
                    cout<<"Il programma consente al massimo 50 tiri!\n";
                    return 1;
                }
               
                break;
            case 2:
                int g;
                do{
                    cout<<"Giocatore 1 o 2?\n";
                    cin>>g;
                }while(g!=1 && g!=2);
                cout<<"In che posizione sta il punteggio che vuoi correggere?(si considera zero come posizione di partenza)\n";
                int pos;
                cin>>pos;
                cout<<"Inserisci il punteggio giusto: ";
                if(g==1){
                    
                    cin>>p1[pos];
                }  
                else{
                    cin>>p2[pos];
                }
                break;
            case 3:
                int s1=0,s2=0,erroriG1=0,numTiriMaggioriDi30G1=0,erroriG2=0,numTiriMaggioriDi30G2=0;
                for(int j=0;j<i;j++){
                    s1+=p1[j];
                    s2+=p2[j];
                    if(p1[j]==0)
                        erroriG1++;
                    if(p2[j]==0)
                        erroriG2++;
                    if(p1[j]>30)
                        numTiriMaggioriDi30G1++;
                    if(p2[j]>30)
                        numTiriMaggioriDi30G2++;
                }
                if(s1>s2)
                    cout<<"ha vinto il giocatore 1!\n";
                else if(s1==s2)
                    cout<<"pareggio!\n";
                else
                    cout<<"ha vinto il giocatore 2!\n";
                cout<<"tot punti giocatore 1: "<<s1<<" gicatore 2: "<<s2<<endl;
                cout<<"numero errori del giocatore uno: "<<erroriG1<<endl;
                cout<<"numero errori del giocatore due: "<<erroriG2<<endl;
                cout<<"numero tiri con punti maggiore di 30 di G1: "<<numTiriMaggioriDi30G1<<endl;
                cout<<"numero tiri con punti maggiore di 30 di G2:"<<numTiriMaggioriDi30G2<<endl;
                cout<<"media punti giocatore 1: "<<s1/i<<" gicatore 2: "<<s2/i<<endl;
                cout<<"vuoi fare una nuova partita? s/n\n";
                char nuovapartita;
                cin>>nuovapartita;
                if(nuovapartita=='s'){
                    i=0;
                }
                else if(nuovapartita=='n')
                    scelta=4;
                else{
                    cout<<"scelta non valida, lo prendo come un no."<<endl;
                    scelta=4;
                }
                break;            
        }
    }while(scelta!=4);


    return 0;
}