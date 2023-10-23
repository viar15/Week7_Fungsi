#include <iostream>
using namespace std;

int maxof(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

int maxof8(int data[9]){
    int temp;
    for(int i = 0; i < 7; i++){
        temp = maxof(data[i], data[i+1]);
        
    }
    return temp;
}

int main(){
    int a, b, data[8];
    for(int x = 0; x < 8; x++){
        cin >> data[x];
    }
    cout << maxof8(data) << endl;
    

    return 0;
}
