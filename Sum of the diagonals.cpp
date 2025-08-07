//EXPERIMENT-8
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int r1,c1,r2,c2;
    int m1[50][50],m2[50][50];
    int diag=0;
    
    cout<<"Enter the number of rows in your first matrix: ";
    cin>>r1;
    cout<<"Enter the number of columns in your first matrix: ";
    cin>>c1;
    cout<<endl;
    
    cout<<"Enter the elements for the first matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }

    cout<<endl;
    
    cout<<"The first input matrix is: "<<endl;
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i==j){
             diag=diag+m1[i][j];
            }
            
        }
        cout<<endl;
    }
    cout<<"The sum of the diagonals is: "<<diag<<endl;
}

/*output :
Enter the number of rows in your first matrix: 3
Enter the number of columns in your first matrix: 3

Enter the elements for the first matrix: 1 2 3 4 5 6 7 8 9

The first input matrix is: 
1 2 3 
4 5 6 
7 8 9 



The sum of the diagonals is: 15

*/
