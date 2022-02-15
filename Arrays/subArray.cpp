// if u have the array ex 1,2,3,4;
// then max subarray possible is (n*(n+1))/2
// so here the subarray which are possible is
// 1  1,2  1,2,3  1,2,3,4   2  2,3  2,3,4   3  3,4   4
// therefore for n=4 the subarrays are 10

#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE // not a part of code used to beautify the code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // this program prints all the subarrays of an array
    //  for (int i = 0; i < n; i++)
    //  {

    //     for (int j = i; j < n; j++)
    //     {

    //         for (int k = i; k <= j; k++)
    //         {
    //             cout << arr[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // this program prints the longest subarray which are in AP means there common difference is  same;  longest aritmetic subarray problem;

    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans;

    return 0;
}