#include <iostream>
using namespace std;

/*
BRUTE-FORCE SOLUTION:
bool pairwithgivensum(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}
*/

/*
 USINH HASHING:
 void printPairs(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        int temp = sum - arr[i];
        if(s.find(temp) != s.end())
            cout<<arr[i]<<","<<temp;
        s.insert(arr[i]);
    }
}

*/

void printPairs(int arr[], int n, int sum){
    sort(arr, arr+n);

    int low=0, high = n-1;

    while(low < high){
        if(arr[low] + arr[high] == sum){
            cout<<arr[low]<< "  " << arr[high];
        }
        else if (arr[low] + arr[high] < sum){
            low++;
            high--;
        }
    }
    cout<< "Pair not found";
}
int main()
{
    int arr[] = {3,4,8,-9,20,6};
    printPairs(arr, 6, 11);
}
