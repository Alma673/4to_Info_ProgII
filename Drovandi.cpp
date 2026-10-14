#include <iostream>
using namespace std;
int main(){
    int N;
    do{
        cout<<"ingrese la cantidad de filas"<<endl;
        cin>>N;
    }while(N<2);
    int matrix[N][2];
    int vector_r[N];
    cout<<"ingrese los valores "<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<2; j++){
            matrix[i][j];
            vector_r[i]=matrix[i][0]+matrix[i][1];
        }
    }
        if(N==2){
            if(vector_r[0]>0 && vector_r[1]>0){
                cout<<" El vector se encuentra en el C.I";
            }else
            if(vector_r[0]>0 && vector_r[1]<0){
                cout<<"El vector se encuentra en el C.IV";
            }else
            if(vector_r[0]<0 && vector_r[1]>0){
                cout<<"EL vector se encuentra en el C.II";
            }else
            if(vector_r[0]>0 && vector_r[1]>0){
                cout<<"El vector se encuentra en el C.III";
            }
        }
        return 0;
    }
    