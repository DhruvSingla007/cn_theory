#include <bits/stdc++.h>
using namespace std;

class Fraction{
    int numerator;
    int denominator;

public:

    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print() const{
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }

    void simplify(){
        int gcd = 1;

        for(int i = 1;i<=min(this->numerator,this->denominator);++i){
            if(this->numerator % i == 0 && this->denominator % i == 0){
                gcd = i;
            }
        }

        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;

    }

    void add(Fraction const &f){
        int lcm = this->denominator * f.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f.denominator;

        int num = x* this->numerator + (y*f.numerator);

        this->numerator = num;
        this->denominator = lcm;

        simplify();
    }

    Fraction addition(Fraction const &f){
        int lcm = this->denominator * f.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f.denominator;

        int num = x* this->numerator + (y*f.numerator);

        Fraction f3(num,lcm);

        f3.simplify();
        return f3;
    }

    // binary operator overloading
    // first object is passed into this

    Fraction operator+(Fraction const &f) const{
        int lcm = this->denominator * f.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f.denominator;

        int num = x* this->numerator + (y*f.numerator);

        Fraction f3(num,lcm);

        f3.simplify();
        return f3;
    }

    bool operator==(Fraction f2) {
        this->simplify();
        f2.simplify();
        return (this->numerator == f2.numerator) && (this->denominator == f2.denominator);
    }

    // unary operator overloading

    Fraction& operator++(){
        this->numerator = this->numerator + this->denominator;
        this->simplify();

        return *(this);
    }

};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction f3 = f1.addition(f2);
    f1.print();
    f2.print();
    f3.print();

    Fraction f4 = f1 + f2;
    f4.print();

    Fraction f5(70,8);

    cout<< (f5 == f4)<<endl;

    ++f1;
    f1.print();

    Fraction f6 = ++(++f1);
    f6.print();
    f1.print();

}