#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // declaring an array of size 10
    int array[10];
    // declaring an array of size 10 and initializing it with 0
    int array2[10] = {0};
    // declaring an array of size 10 and initializing it with 1,2,3,4,5,6,7,8,9,10
    int array3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Taking a single input in an array , we are taking input for the first element of the array
    cin >> array[0];
    // Taking input for the whole array
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    // Printing the whole array
    for (int i = 0; i < 10; i++)
    {
        // accessing and printing the ith element of the array
        cout << array[i] << " ";
    }
    // taking inputs in an array
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    // printing the whole array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}