#include<bits/stdc++.h>

using namespace std;


class Solution {

public:
    int i = 5;

    int fn(int &num) const {
        for (int i = 0; i < 5; i++) {
            num++;
            // can't do this since const functions can't change the value of properties
            //this->i = this->i+ 1;
        }
        return i;
    }
};


int main() {
//    int arr[] = {1,2,3};
//    char b[]  = "abc";
//
//    cout<<arr<<endl;
//    cout<<b<<endl;
//
//    char * c = b;
//    cout<<c<<endl;

//    char c1 = 'a';
//    char * pc = &c1;
//
//    cout<<c1<<endl;
//    cout<<pc<<endl;

//    int num = 5;
//    Solution const s1;
//    int f = s1.fn(num);
//
//    cout<<f<<" "<<num;
//
//    int i = 5;
//    ++(++i);
//
//    cout <<" " << i << endl;


}