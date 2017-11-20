#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
class cal
{
float a,b,r;
    int c;
	public:
	void out()
	{
		cout<<"1: Division\t\t"<<"8: Sin\t\t"<<"\t\t14: Log"<<"\t\t\t\t\t\t17: Simple Intrest"<<endl;
        cout<<endl;
cout<<"2: Multiplication\t"<<"9: Cos\t\t"<<"\t\t15: Log with base 10"<<"\t\t\t\t18: Compound Intrest"<<endl;
cout<<endl;
cout<<"3: Subtraction\t\t"<<"10: Tan\t\t"<<"\t\t16: Exponentional"<<"\t\t\t\t19: Celsius to Fahrenheit conversions "<<endl;
cout<<endl;
cout<<"4: Addition\t\t"<<"11: Inverse of Sin"<<"\t\t\t\t\t\t\t\t20: Fahrenheit to Celsius conversions"<<endl;
cout<<endl;
cout<<"5: Power\t\t"<<"12: Inverse of Cos"<<endl;
cout<<endl;
cout<<"6: Square root\t\t"<<"13: Inverse of Tan"<<endl;
cout<<endl;
cout<<"7: Cube root\t\t";
cout<<endl;	 
 }
	void in()
	{
	cout<<"Enter the function that you want to perform : ";
    cin>>c;
    cout<<endl;
    }
	void calc()
	{
switch(c)
{
case 1:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Division = "<<a/b<<endl;
break;
case 2:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Multiplication = "<<a*b<<endl;
break;
case 3:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Subtraction = "<<a-b<<endl;
break;
case 4:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Addition = "<<a+b<<endl;
break;
case 5:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Enter the power : ";
cin>>b;
cout<<endl;
cout<<"Power = "<<pow(a,b)<<endl;
break;
case 6:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Square Root = "<<sqrt(a)<<endl;
break;
case 7:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Cube root = "<<pow(a,0.333333)<<endl;
break;
case 8:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Sin = "<<sin(a)<<endl;
break;
case 9:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Cos = "<<cos(a)<<endl;
break;
case 10:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Tan = "<<tan(a)<<endl;
break;
case 11:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Inverse of Sin = "<<asin(a)*180.0/3.14159265<<endl;
break;
case 12:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Inverse of Cos = "<<acos(a)*180.0/3.14159265<<endl;
break;
case 13:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Inverse of tan = "<<atan(a)*180.0/3.14159265<<endl;
break;
case 14:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Log("<<a<<")"<<"="<<log(a)<<endl;
break;
case 15:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Log with base 10 = "<<log10(a)<<endl;
break;
case 16:
cout<<"Enter the power of e"<<endl;
cin>>a;
cout<<"Answer is : "<<pow(2.7,a);
cout<<endl;
break;
case 17:
cout<<"Enter the principle : ";
cin>>a;
cout<<"Enter the time in years : ";
cin>>b;
cout<<"Enter the rate of increase : ";
cin>>r;
cout<<"Simple intrest = "<<(a*b*r)/100<<endl; 
break;
case 18:
cout<<"Enter the amount : ";
cin>>a;
cout<<"Enter the rate of increase : ";
cin>>b;
cout<<"Enter the time in years : ";
cin>>r;
cout<<"Compound intrest = "<< a* pow(1.0 + b,r)<<endl; 
break;
case 19:
cout<<"Enter the temperature in Celsius:";
cin>>a;
cout<<"Temperature in Fahrenheit = "<<9.0/5.0*a+32<<endl;
break;
case 20:
cout<<"Enter the temperature in Fahrenheit:";
cin>>a;
cout<<"Temperature in Celsius = "<< (a-32)/9.0*5.0<<endl;
break;
default:
cout<<"Wrong Input"<<endl;
}
}
}t;
int main()
{
	char d;


	t.out();
	t.in();
	t.calc();	
	cout<<endl;
	return 0;
}

