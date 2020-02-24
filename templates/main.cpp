#include <bits/stdc++.h>
using namespace std;

template  <typename T, typename V>

class Pair{
    T x;
    V y;

public:

    void setX(T x){
        this->x = x;
    }

    T getX(){
        return this->x;
    }

    void setY(V y){
        this->y = y;
    }

    V getY(){
        return this->y;
    }



};


int main(){

//    Pair<int> p1;
//    p1.setX(25);
//    cout<<p1.getX();

Pair<int,int> p1;
p1.setX(1);
p1.setY(2);

    Pair<Pair<int,int>,int> p2;

    p2.setX(p1);
    p2.setY(16);

    cout<<p2.getX().getY()<<endl;


}