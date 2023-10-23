#include <bits/stdc++.h>
using namespace std;
int max_of_first_k (int arr[], int N, int x){
    int max=arr[0];
    for(int i = 0; i < x;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}    


int main()
{
    int N,x;
    cin >> N;
    
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    cin >> x;
    
    if(x > 0 && x <= N){
        int hasil= max_of_first_k(arr, N, x);
        cout << hasil << endl;
    }
    else{ 
        cout << " "<< endl;
    }
return 0;
}
