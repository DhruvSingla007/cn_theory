#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1;i<n;++i)
    {
        int j=i;
        int temp=arr[i];
        while(j>0)
        {

            if(temp>arr[j-1])
            {
                arr[j]=temp;
                break;
            }
            else
            {
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }


}



int main() {

    int size;
    cin>>size;

    int input[size];

    for(int i=0;i<size;i++)
        cin>>input[i];

    InsertionSort(input,size);

    for(int i=0;i<size;i++)
        cout << input[i]<<" ";

    return 0;
}