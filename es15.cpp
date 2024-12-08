#include<random>
#include<iostream>
//#include<cstdlib>
//#include<ctime>
using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib(1,100);
    int n=distrib(gen);
    /*
    metodo con rand()
    
    srand(time(0));
    int n=rand()%100 +1;    
    
    */
   int i=0,nInput;
   bool indovinato=false;
    do{
        cout<<i+1<<"^ tentativo: inserisci il numero:"<<endl;
        cin>>nInput;
        if(n==nInput){
            cout<<"hai indovinato, complimenti!"<<endl;
            indovinato=true;
            break;
        }        
        else{
            if(nInput<n)
                cout<<"il tuo numero è più piccolo\n";
            else
                cout<<"Il tuo numero è più grande\n";
        }
        i++;
    }while(i<5);
    if(!indovinato)
        cout<<"5 tentativi sbagliati, non hai indovinato!\n";

    return 0;
}