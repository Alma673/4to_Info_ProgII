#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingrese el valor de n";
    cin>>n;
    int nums_nat[n];
    for(int i=0; i<n; i++){
        cout<< "ingrese los valores del arreglo";
        cin>> nums_nat[i];
        cout<< nums_nat[i];
    }
    return 0;
}