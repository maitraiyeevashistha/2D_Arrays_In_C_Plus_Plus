//EXPERIMENT-8
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int r,c;
    int m1[50][50];
    
    cout<<"Enter the number of rows in your matrix: ";
    cin>>r;
    cout<<"Enter the number of columns in your matrix: ";
    cin>>c;
    
    cout<<"Enter the elements for the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m1[i][j];
        }
    }
    
    cout<<"The input matrix is: "<<endl;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
/* Output :
Enter the number of rows in your matrix: 3
Enter the number of columns in your matrix: 3
Enter the elements for the matrix: 1 2 3 4 5 6 7 8 9
The input matrix is: 
1 2 3 
4 5 6 
7 8 9 
  */
