#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch; cin>>ch;

    if (ch>='A' and ch<='Z') {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (ch>= 'a' and ch <= 'z') {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}
