#include<iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int data[10001] = { 0, };

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        data[temp]++;
    }

    for (int i = 0; i <= 10000; i++)
    {
        if (data[i] != 0) {
            for (int ii = 0; ii < data[i]; ii++)
            {
                cout<<i<<'\n';
            }
        }
    }

    return 0;
}