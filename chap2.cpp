// backtracking
#include <bits/stdc++.h>
using namespace std;
void names(int count)
{
    if (count == 0)
    {
        return;
    }
    count--;
    names(count);
    cout << count << endl;
}
int main()
{
    names(10);
    return 0;
}