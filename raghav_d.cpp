
#include<iostream>
using namespace std;
int arr[101][202];
void initialize(int row,int column){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            arr[i][j]=-1;
        }}
}
void print_matrix(int row,int column){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(arr[i][j]==-1){  cout << '*' ;
            }else{
              cout << arr[i][j];
            }
        }
        cout << endl;
    }
}
int main()
{   
int number;
int i,j;
cin >> number;
int row=number;
int column=2*number;
    // int *array;
initialize(row,column);
int qq=10;
i=0;
for(i=0;i<row;i++){
    if(i==0){
        j=0;
    }
    else{
        j=i*2;
    }
    for(;j<row+i;j++){
            arr[i][j]=qq;
            qq=qq+10;
    }
}
i=row-1;
int remainder;
int left=1;
while(i>=0){
    j=column-left;
    while(1==1){
     if(j==column-1){
     remainder=qq/10;
     qq=qq+10;
     arr[i][j]=remainder;
     break;
        }
        else{
         arr[i][j]=qq;
          qq=qq+10;
        }
        j++;
    }
    left=left+1;;
    i=i-1;
}
    print_matrix(row,column);
    return 0;
}
