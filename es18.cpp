#include<iostream>

using namespace std;
int LOGICLENGHT;
const int MAXLENGHT=20;

string menu(){
    return "\n1. inizializza a zero(dimensione logica array)\n2.inserimento in coda\n3. cancellazione in coda\n4. modifica iesimo elemento\n5. ricerca valore all'interno dell'array\n6. ricerca max\n7. inserimento in una certa posizione\n8. cancella iesimo elemento\n9. cancella un CERTO elemento\n10 stampa array\n11 esci\n";
}
void inizializza(){
    LOGICLENGHT=0;
}
void stampa_arr(int arr[]){
    for(int i=0;i<LOGICLENGHT;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
bool inserimento_in_coda(int arr[]){
    if(LOGICLENGHT>MAXLENGHT)return false;
    cout<<"Inserisci:\n";
    cin>>arr[LOGICLENGHT];
    LOGICLENGHT++;
    return true;
}
bool cancella_in_coda(int arr[]){
    if(LOGICLENGHT==0)return false;
    LOGICLENGHT--;
    return true;
}
bool modifica_iesimo(int arr[]){
    if(LOGICLENGHT==0)return false;
    cout<<"in che posizione?\n";
    int pos;
    cin>>pos;
    if(pos<0 || pos > LOGICLENGHT)
        return false;
    cout<<"nuovo valore:\n";
    cin>>arr[pos];
    return true;
}
int ricerca_valore(int arr[]){
    if(LOGICLENGHT==0)return -1;
    cout<<"inserisci valore\n";
    int val;
    cin>>val;
    for(int i=0;i<LOGICLENGHT;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}
int ricerca_max(int arr[]){
    if(LOGICLENGHT==0)return -1;
    int max=0;
    for(int i=0;i<LOGICLENGHT;i++){
        if(arr[i]>max){
            max=i;
        }
    }
    return max;
}
int inserisci_in_iesima_posizione(int arr[]){
    if(LOGICLENGHT==0 || LOGICLENGHT==MAXLENGHT)return -1;
    cout<<"Inserisci la posizione:\n";
    int pos;
    cin>>pos;
    if(pos<0 || pos > LOGICLENGHT)
        return -1;
    for(int i=LOGICLENGHT;i>pos;i--){
        arr[i]=arr[i-1];
        
    }
    cout<<"inserisci valore:\n";
    cin>>arr[pos];
    LOGICLENGHT++;
    return pos;
    
}
int cancella_iesimo_elemento(int arr[]){
    if(LOGICLENGHT==0)return -1;
    cout<<"Inserisci la posizione:\n";
    int pos;
    cin>>pos;
    if(pos<0 || pos > LOGICLENGHT)
        return -1;
    for(int i=pos;i<LOGICLENGHT-1;i++){
        arr[i]=arr[i+1];
    }
    LOGICLENGHT--;
    return pos;
}
void ricompatta(int arr[],int pos){
    for(int i=pos;i<LOGICLENGHT-1;i++){
        arr[i]=arr[i+1];
    }
    LOGICLENGHT--;
}
int cancella_valore(int arr[],bool ricor,int valore){
    if(LOGICLENGHT==0)return -1;
    int val;
    if(!ricor){
        cout<<"inserisci valore:\n";
        cin>>val;
    }else{
        val=valore;
    }    
    int pos=-1;
    for(int i=0;i<LOGICLENGHT;i++){
        if(arr[i]=val){
            pos=i;            
        }
    }
    if(pos>0){
        ricompatta(arr,pos);
        return cancella_valore(arr,1,val);
    } 
    return 1;       
    
}


int main(){
    int scelta=0,arr[MAXLENGHT];
    int posMax;
    do{
        cout<<menu();
        cout<<"inserisci la scelta\n";
        cin>>scelta;
        switch(scelta){
            case 1:
                inizializza();
                break;
            case 2:
                inserimento_in_coda(arr);
                break;
            case 3:
                cancella_in_coda(arr);
                break;
            case 4:
                modifica_iesimo(arr);
                break;
            case 5:
                cout<<"pos: "<<ricerca_valore(arr);
                break;
            case 6:                
                posMax=ricerca_max(arr);
                if(posMax>0)
                    cout<<"valore: "<<arr[posMax]<<" posizione: "<<posMax<<endl;                
                break;
            case 7:
                inserisci_in_iesima_posizione(arr);
                break;
            case 8:
                cancella_iesimo_elemento(arr);
                break;
            case 9:
                cancella_valore(arr,0,0);
                break;
            case 10:
                stampa_arr(arr);
                break;
        }
    }while(scelta!=11);


    return 0;
}