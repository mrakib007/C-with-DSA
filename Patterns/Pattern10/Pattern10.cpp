#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout << j;
            }
            for(int j=1;j<=2*n-(2*i);j++){
                cout << " ";
            }
            for (int j=i;j>=1;j--){
                cout << j;
            }
            cout << endl;
        }
        t--;
    }
}