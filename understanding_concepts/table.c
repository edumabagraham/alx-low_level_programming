// #include <stdio.h>


// // int main(void)
// // {
// //     int lengthOfArray, woodLength, i, peices,sum = 0;

// //     scanf("%d %d", &woodLength, &lengthOfArray);
// //     int arr[lengthOfArray];

// //     for (i = 0; i < lengthOfArray ; i++)
// //     {
// //         int num;
// //         scanf("%d", &num);
// //         arr[i] = num;
// //     }

// //     for (i = 0; i < lengthOfArray; i++)
// //     {
// //        sum += arr[i];
// //     }

// //     if (sum == woodLength)
// //     {
// //         peices = 1;
// //         printf("%d", peices);
// //     }
    
    
// //     return (0);

// // }

// int max(int a, int b, int c)
// {
//     if (a > b)
//     {
//         if (a > c)
//         {

//             return a;
//         }

//         else
//         {
//             return c;
//         }
//     }

//     else
//     {
//         if (b > c)
//         {

//             return b;
//         }

//         else
//         {
//             return c;
//         }
//     }
// }

// int maxpiece(int l, int a, int b, int c)
// {
//     int r;
//     if (l == 0)
//     {
//         return 0;
//     }
//     if (l < 0)
//     {
//         return -1;
//     }

//     r = max(maxpiece(l - a, a, b, c), maxpiece(l - b, a, b, c), maxpiece(l - c, a, b, c));

//     if (r == -1)
//         return -1;

//     return r + 1;
// }

// int main()
// {
//     int lenth;
//     cout << "enter rope lenth ";
//     cin >> lenth;
//     int p1, p2, p3;
//     cout << endl
//          << "enter the only three parameters in which rope can be cut ";
//     cin >> p1 >> p2 >> p3;
//     cout << endl
//          << "ans = " << maxpiece(lenth, p1, p2, p3);
// }

// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible to cut
// woods into K pieces of length len
bool isValid(int wood[], int N, int len, int K)
{

    // Stores count of pieces
    // having length equal to K
    int count = 0;

    // Traverse wood[] array
    for (int i = 0; i < N; i++)
    {

        // Update count
        count += wood[i] / len;
    }
    return count >= K;
}

// Function to find the maximum value of L
int findMaxLen(int wood[], int N, int K)
{

    // Stores minimum possible value of L
    int left = 1;

    // Stores maximum possible value of L
    int right = *max_element(wood,
                             wood + N);

    // Apply binary search over
    // the range [left, right]
    while (left <= right)
    {

        // Stores mid value of
        // left and right
        int mid = left + (right - left) / 2;

        // If it is possible to cut woods
        // into K pieces having length
        // of each piece equal to mid
        if (isValid(wood, N, mid,
                    K))
        {

            // Update left
            left = mid + 1;
        }
        else
        {

            // Update right
            right = mid - 1;
        }
    }
    return right;
}

// Driver Code
int main()
{
    int wood[] = {5, 9, 7};
    int N = sizeof(wood) / sizeof(wood[0]);
    int K = 4;
    cout << findMaxLen(wood, N, K);
}
