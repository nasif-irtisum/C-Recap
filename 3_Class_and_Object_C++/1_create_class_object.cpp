#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main ()
{
    Student *st = new Student [5];

    char nm [100] = "Demo Student";
    for (int i=0; i<5; i++) {
        strcpy(st[i].name, nm);
        st[i].roll = i+1;
    }

    for (int i=0; i<5; i++) {
        cout << st[i].name << " " << st[i].roll << endl;
    }


}
