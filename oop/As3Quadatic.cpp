//============================================================================
// Name        : Assignment3.cpp
// Author      : Nikhil Kulkarni
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

//Problem Statement : Implement a class Quadratic that represents degree two polynomials i.e.,
//                    polynomials of type ax 2 +bx+c. The class will require three data members
//                    corresponding to a, b and c.
//                    Implement the following operations:
//                    A constructor (including a default constructor which creates the polynomial).
//                    Overloaded operator+ to add two polynomials of degree 2.
//                    Overloaded << and >> to print and read polynomials. To do this,
//                    you will need to decide what you want your input and output format to look like.
//                    A function eval that computes the value of a polynomial for a given value of x.
//                    A function that computes the two solutions of the equation ax 2 +bx+ c=0.
//============================================================================

//______________________________INCOMPLETE_________________________________//

#include <bits/stdc++.h>
using namespace std;

class Quadratic{
	int a,b,c;
public:
	Quadratic(){
		a=0;
		b=0;
		c=0;
	}
	void getData(){
		cout<<"Enter values of a,b,c"<<endl;
		cin>>a>>b>>c;
	}
	void display(){
		cout<<"entered quadratic equation is"<<endl<<a<<"x^2 +"<<b<<"x +"<<c<<endl;
	}
	Quadratic operator +(Quadratic q2){
		Quadratic q3;
		q3.a=a+q2.a;
		q3.b=b+q2.b;
		q3.c=c+q2.c;
		return q3;
	}

	void dis(){
		cout<<"sum of quadratic equations is"<<endl<<a<<"x^2 +"<<b<<"x +"<<c<<endl;
	}

	void eval(){
		int x;
		cout<<"enter value of x"<<endl;
		cin>>x;
		cout<<"Value of 1st quadratic equation is "<<(a*x*x)+(b*x)+(c)<<endl;
	}

	void sol(){
		float s1,s2;
		float temp=b*b-4*a*c;
		if(temp>=0){
		s1=(((-b)+sqrt((b*b)-(4*a*c)))/2*a);
		s2=(((-b)-sqrt((b*b)-(4*a*c)))/2*a);
		cout<<"Two solutions of x are"<<s1<<" & "<<s2<<endl;}
		else{
			temp=(b*b-4*a*c)*(-1);
			cout<<"Two solutions of x are"<<endl;
			cout<<"(-"<<b<<"+"<<temp<<"i)/"<<2*a<<endl;
			cout<<"(-"<<b<<"-"<<temp<<"i)/"<<2*a<<endl;}
	}
};
int main() {
	Quadratic q1,q2,q3;
	q1.getData();
	q1.display();
	q2.getData();
	q2.display();
	q3=q1+q2;
	q3.dis();
	q1.eval();
	q1.sol();
	return 0;
}
