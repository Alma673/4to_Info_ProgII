#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"ingrese la cantidad de filas"<<endl;
        cin>>n;
    }while(n<2);
    int matriz_1[n][2];
    int vector[n];
    cout<<"ingrese los valores "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            matriz_1[i][j];
            vector[i]=matriz_1[i][0]+matriz_1[i][1];
        }
    }
        if(n==2){
            if(vector[0]>0 && vector[1]>0){
                cout<<" El vector se encuentra en el C.I";
            }else
            if(vector[0]>0 && vector[1]<0){
                cout<<"El vector se encuentra en el C.IV";
            }else
            if(vector[0]<0 && vector[1]>0){
                cout<<"EL vector se encuentra en el C.II";
            }else
            if(vector[0]>0 && vector[1]>0){
                cout<<"El vector se encuentra en el C.III";
            }
        }
        return 0;
    }
    
