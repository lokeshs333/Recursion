// summision of first n numbers using recursion

#include <bits/stdc++.h>
using namespace std;
void submission(int n, int sum)
{
    if (n == 0)
    {
        cout << "answer is " << sum;
        return;
    }
    sum = sum + n;
    n--;
//     cout << "answer is " << sum;
    submission(n, sum);
}
int main()
{
    submission(10, 0);
    // cout << "your answer is " << ans << endl;
    return 0;
}
