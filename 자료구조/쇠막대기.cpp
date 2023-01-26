#include <bits/stdc++.h>
using namespace std;
stack<pair<int, char>> s;
string str;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int k = 1;
    cin >> str;
    s.push(pair<int, char>(0, str[0]));
    for (int i = 1; i < str.size(); i++)
    {
        if (!s.empty()&&s.top().second != str[i])
        {
            if (i - s.top().first == 1)
            {
                k--;
                s.pop();
                k += s.size();
            }
            else
            {
                s.pop();
            }
        }
        else
        {
            s.push(pair<int, char>(i, str[i]));
            k++;
        }
    }
    cout << k;
}
