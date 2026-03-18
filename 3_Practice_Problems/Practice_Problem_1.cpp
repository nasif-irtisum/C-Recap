#include <bits/stdc++.h>
using namespace std;
int *getArray (int n)
{
    int *arr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr [i];
    }
    return arr;
}
using namespace std;
int main ()
{
   int N; cin >> N;
   int *arr = getArray(N);

   for (int i=0; i<N; i++) {
        if (N-1==i) cout << arr [i] << endl;
        else cout << arr [i] << " ";
   }
   return 0;

}
