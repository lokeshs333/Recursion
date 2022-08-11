// summision of first n numbers using functional recursion

#include <bits/stdc++.h>
using namespace std;
int submission(int n)
{
    if (n == 0)
        return 0;
    return n + submission(n - 1);
}
int main()
{
    int ans = submission(10);
    cout << "your answer is  " << ans << endl;
    return 0;
}