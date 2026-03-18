#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m; cin >> m;
    int *A = new int [m];

    for (int i=0; i<m; i++) cin >> A[i];

    int n; cin >> n;
    int *B = new int [n];

    int a;
    for (a=0; a<m; a++) B[a] = A[a];

    for (int i=a; i<n; i++) cin >> B[i];

    for (int i=0; i<n; i++) {
        if (i==n-1) cout << B[i] << endl;
        else cout << B[i] << " ";
    }
    return 0;
}
