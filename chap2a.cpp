// print names 5 times
#include <bits/stdc++.h>
using namespace std;
void names(int count)
{
    if (count == 5)
    {
        return;
    }
    count++;
    cout << count << " lokesh pandey" << endl;
    names(count);
}
int main()
{
    names(0);
    return 0;
}