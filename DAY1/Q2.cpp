#include <iostream>
#include <unordered_set>
#include<algorithm>
using namespace std;

void zeroSum(int arr[], int n){
    for(int i = 0; i<n; i++){
        int sum  = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];

            if(sum == 0){
                cout<<i<< "...." <<j<<"\n";
            }
        }
    }
}

void zeroSum(int arr[], int n){
    unordered_map <int, int> m;
    m.insert(pair<int, int> (0,-1));
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(m.find(sum) != m.end()){
            auto it = m.find(sum);
            while(it != m.end() && it -> first == sum){
                cout<< it -> second + 1<< "...." << i << "\n";
                it++;
            }
        }
        m.insert(pair<int,int>(sum, i));
    }
}

int main()
{
    int arr[] = {3,4,8,-9,20,6};
    printPairs(arr, 6, 26);
}
