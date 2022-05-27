#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  
    setlocale(LC_ALL, "RUS");
    int i, j, N, M, a[20][20],b[20];
    cout << "Enter number of rows. N=";
    cin >> N;
    cout << "Enter number of columns. M=";
    cin >> M;
    cout << "Enter array elements: \n";
 
    for (i = 0; i < N; i++)
      for (j = 0; j < M; j++)
        cin >> a[i][j];
 
    cout << "-------------------------" << endl;
    cout << "Your array A: \n";
    cout << "-------------------------" << endl;
    
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    
    sort(a[0], a[0] + M);
    cout << "-------------------------" << endl;
    cout << "Your sorted array A: \n";
    cout << "-------------------------" << endl;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
 
    cout << "-------------------------" << endl;
 
    for (j = 0; j < M; j++){
        for (i = 0; i < N; i++){
            b[j] += a[i][j];
        }
        b[j] /= N;
    }
    
    cout << "Your array B: \n";
    cout << "-------------------------" << endl;
    cout << b[j] << endl;
    cout << "-------------------------" << endl;
 
    system("pause");
    return 0;
}
