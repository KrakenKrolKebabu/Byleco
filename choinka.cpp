#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "podaj rozmiar choinki(polecam 5-7): ";
    cin >> n;
    for (k = 1; k <= n; k++){ // gorna czesc
        for(j = 1; j <= n-k+2; j++){
            cout << ' ';
        }
        for (i = 1; i <= 2*k-1; i++){
            if (k==1){
            cout << '*';
            }
            else{
                cout << '#';
            }
        }  
       cout << endl;
    }
    for (k = n/2; k <= n+1; k++){ // dolna czesc
        for(j = 1; j <= n-k+1; j++){
            cout << ' ';
        }
        for (i = 1; i <= 2*k+1; i++){
            cout << '#';               
        }  
       cout << endl; // koniec gornej i dolnej czesci
    }
    for(j = 1; j <= n; j++){
            cout << ' ';
        }
    cout << "[ ]";  
    return 0;
}