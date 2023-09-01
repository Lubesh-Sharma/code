#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    cin >> temp;
    while (temp--)
    {
        string s1;
        string s2;
        int m = 0;
        cin >> s1;
        cin >> s2;

        vector<int> array1;
        vector<int> array2;

        for (int i = 0; i < s1.size(); i++)
        {
            if ((s1[i] == s2[i]) && (s1[i] == '0'))
                array1.push_back(i);

            else if ((s1[i] == s2[i]) && (s1[i] == '1'))
                array2.push_back(i);
        }

        for (int i = 0; i < array2.size(); i++)
        {
            for (int j = 0; j < array1.size(); j++)
            {
                if (array2[i] - array1[j] == 1)
                {
                    cout << "yes"
                         << "\n";
                    m++;
                    break;
                }
            }

            if (m > 0)
                break;
        }

        if (m == 0)
            cout << "no"
                 << "\n";
    }
}