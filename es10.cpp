#include<iostream>
#include<string.h>
using namespace std;
int main(){
    float soldi;
    char pranzo[10]="";
    int numgiorni=0,panino=0,pastina=0;
    cout<<"inserisci quanti soldi ha mario:"<<endl;
    cin>>soldi;
    while(1){
        cout<<"Inserisci cosa mangia mario: "<<endl;
        cout<<"scrivi panino/pastina (1,50 euro il panino; 1 euro la pastina)"<<endl;
        cout<<"scrivi un altra cosa se non mangia niente"<<endl;
        cin>>pranzo;
        if(strcmp(pranzo,"panino")==0 && soldi>=1.50){
            soldi-=1.50;
            numgiorni++;
            panino++;
        }
            
        else if(strcmp(pranzo,"pastina")==0 && soldi>=1){
            soldi-=1;
            numgiorni++;
            pastina++;
        }  
        else
            break;     
        system("clear");
    }
    cout<<"numgiorni: "<<numgiorni<<endl;
    cout<<"numpanini: "<<panino<<endl;
    cout<<"numpastine: "<<pastina<<endl;









    return 0;
}