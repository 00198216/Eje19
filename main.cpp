#include <iostream>

using namespace std;

void llenar(int matrix[5][5]){

    for(int i=0;i<5;i++){
        for (int j = 0; j < 5 ; j++) {
            matrix[i][j]=0;
        }
    }

  return;

}


void Pedir(int matrix[5][5]){
    int letra=0;
    for(int i=0;i<5;i++){
        for (int j = 0; j <= letra ; j++) {
            cout<<"Ingrese la posicion"<<" "<<i<<","<<j<<endl;
            cin>>matrix[i][j];
        }
        letra++;
    }

    cout<<endl;

    for(int i=0;i<5;i++){
        for (int j = 0; j < 5 ; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return;

}


int main() {
    int matrix[5][5];

    llenar(matrix);
    Pedir(matrix);

    return 0;
}