//EXPERIMENT-8
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int r1,c1,r2,c2;
    int m1[50][50],m2[50][50],sum[50][50];
    
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
    
    cout<<"Enter the number of rows in your second matrix: ";
    cin>>r2;
    cout<<"Enter the number of columns in your second matrix: ";
    cin>>c2;
    
    cout<<endl;
    
    cout<<"Enter the elements for the second matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
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
    
    cout<<"The second input matrix is: "<<endl;
    
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(r1==r2 & c1==c2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                sum[i][j]=m1[i][j]+m2[i][j];
            }
        }
        cout<<endl;
        cout<<"The sum of the input matrix is: "<<endl;
    
          for(int i=0;i<r1;i++){
             for(int j=0;j<c1;j++){
              cout<<sum[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    
    else{
        cout<<"Your matrix dimensions do not match . please choose other dimensions";
    }
        
}

/*Output :
Enter the number of rows in your first matrix: 3
Enter the number of columns in your first matrix: 3

Enter the elements for the first matrix: 1 2 3 4 5 6 7 8 9

Enter the number of rows in your second matrix: 3
Enter the number of columns in your second matrix: 3

Enter the elements for the second matrix: 1 2 3 4 5 6 7 8 9

The first input matrix is: 
1 2 3 
4 5 6 
7 8 9 
The second input matrix is: 
1 2 3 
4 5 6 
7 8 9 

The sum of the input matrix is: 
2 4 6 
8 10 12 
14 16 18 
*/
    
