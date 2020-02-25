#include <bits/stdc++.h>
using namespace std;

void changeArray(int* input, int size){
    for(int i = 0;i<size;i++){
        *(input + i) = 100;
    }
}

int main() {
    int input[5] = {1,2,3,4,5};

    cout<<"Original Array : "<<endl;
    for(int i = 0;i<5;i++){
        cout<<input[i]<<" ";
    }

    cout<<endl;
    changeArray(input,5);
    cout<<"Changed Array : "<<endl;
    for(int i = 0;i<5;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}
