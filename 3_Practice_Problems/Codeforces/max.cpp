#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N, maxValue = INT_MIN;
    cin >> N;

    for (int i=0; i<N; i++) {
        int num; cin >> num;
        maxValue = max(maxValue,num);
    }
    cout << maxValue << endl;

    return 0;
}
