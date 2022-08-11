// linearly from n to 1
#include <bits/stdc++.h>
using namespace std;
void names(int count)
{
    if (count == 0)
    {
        return;
    }
    cout << count << endl;
    count--;
    names(count);
}
int main()
{
    names(10);
    return 0;
}