#include <iostream>
#include <cctype>
using namespace std;

int main() {
   /* int x;
    cout<<"Enter a number: ";
    cin>>x;
   if (x>0) { cout<<"positive"<<endl; }
    else { cout<<"negative"<<endl; }
//problem 2
    if (x%2==0) { cout<<" the number is even and "<< ((x>0) ? "positive" : "negative")<<endl; }
    else { cout<<"The number is odd and "<<((x>0) ? "positive" : "negative")<<endl; }
    //problem 3
    float a2,b2,c2;
    cout<<"enter a,b and c: and I will find the greatest one "<<endl;
    cin>>a2>>b2>>c2;
    if (a2>=b2 && a2>=c2) {cout<<"the greatest number is "<<a2<<endl;}
    if (b2>a2 && b2>=c2) {cout<<"the greatest number is "<<b2<<endl;}
    else { cout<<"the greatest number is "<<c2<<endl;}



    //problem 4
    int a1,a2;
    cout<<"enter 2 numbers , i will check first divided by second"<<endl;
    cin>>a1>>a2;
    if (a1%a2==0) {cout<<"can be divided by second"<<endl;}
    else {cout<<"can not be divided by second"<<endl;}

    //problem 5
    cout<<"enter any year"<<endl;
    int year;
    cin >>year;
    if ((year%4==0 && year%100!=0) || (year%400==0)) {cout<<"this is  a leap year"<<endl;}
    else {cout<<"this is not a leap year"<<endl;}

    //problem 6
    float a,b,c;
    cout<<"Enter a,b and c: "<<endl;
    cin>>a>>b>>c;

    float dec = pow(b,2)-4*a*c;
    float x1=(-b+sqrt(dec))/(2*a);
    float x2=(-b-sqrt(dec))/(2*a);

    cout<<"x1 is "<<x1<<endl;
    cout<<"x2 is "<<x2<<endl;

    //problem 7

    float a6,b6,c6;
    cout <<"enter sides of trange :";
    cin >> a6 >> b6 >> c6;

    if (((a6>(b6+c6)) && (b6>(a6+c6))) && (c6>(a6+b6))) {cout << "they cannot be trange sides" << endl;}
    else {cout << "they can be sidesof trange " << endl;}



    //problem 8

    // isupper(letter) if letter is big , show True otherwise False
    // islower is also
    char chara;
    cout << "Enter a character: ";
    cin >> chara;
    if (isupper(chara)) {cout << chara << " is capital"<<endl; }
    if (islower(chara)) {cout << chara << " is not capital" << endl;}
    else {cout << chara << " is not a letter" << endl;}

    //problem 9



    // problem 10
    float x4,y4;
     cout << "enter x cordinate :";
    cin >> x4;
    cout << "enter y cordinate :";
    cin >> y4;
    if (pow(x4, 2)+pow(y4, 2)<=100) {cout << "this point lies in the circle";}
    else {cout<<"this is out of the circle" <<endl;}  */

    //problem 12
    int pol;
    cout << "a three-digit integer: ";
    cin >> pol;
    if (pol/100==pol%10 && pol !=0) {cout << "this is polindrom";}
    else {cout << "this is not polindrom";}





    return 0;
}
