#include <bits/stdc++.h>
using namespace std;
// int count = 0;
void print(int count)
{
    if (count == 10)
    {
        return;
    }
    cout << count << " love you>>" << endl;
    count = count + 1;
    print(count);
}
int main()
{
    print(0);
    return 0;
}