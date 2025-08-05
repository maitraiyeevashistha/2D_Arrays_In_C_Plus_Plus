//EXPERIMENT-8
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int m1[3][3];
    cout<<"enter the elements for the matrix: ";
    for(int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>m1[i][j];
        }
    }
    
    cout<<"your matrix is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
/* output :
enter the elements for the matrix: 1 2 3 4 5 6 7 8 9
your matrix is: 
1 2 3 
4 5 6 
7 8 9 
*/
