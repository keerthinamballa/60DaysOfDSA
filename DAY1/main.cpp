#include <iostream>
#include <unordered_set>
#include<algorithm>
using namespace std;

int findDuplicate(int arr[], int n){
    int k = 0;
    int curr = arr[k];
    for(int i = 1; i < n; i++){
        if(arr[i] == curr)
            return curr;
    }
    k++;
}

int main()
{
    int A[] = { 1,2,9,-4,9,11};
    int n = sizeof(A)/sizeof(A[0]);

    int k = findDuplicate(A, n);

    cout<<k;

    return 0;
}
