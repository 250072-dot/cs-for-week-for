#include <iostream>
#include <string>
#include <cctype>
#include <map>
using namespace std;

int main() {
 /*
  // problem 1

   int x;
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


    int a1,aa1;
    cout<<"enter 2 numbers , i will check first divided by second"<<endl;
    cin>>a1>>aa1;
    if (a1 % aa1==0) {cout<<"can be divided by second"<<endl;}
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


    float spe;
    cout << "enter the speed :";
    cin >>spe;
    if (spe<20) {cout << " your speed is very slow"<< endl;}
    else if (spe>20 && spe<120) {cout << " your speed is normal, go ahaed!"<< endl;}
    else {cout << " your speed is very fast"<< endl;}




    // problem 10


    float x4,y4;
     cout << "enter x cordinate :";
    cin >> x4;
    cout << "enter y cordinate :";
    cin >> y4;
    if (pow(x4, 2)+pow(y4, 2)<=100) {cout << "this point lies in the circle";}
    else {cout<<"this is out of the circle" <<endl;}

    //problem 11


    float we1,we2,pr1,pr2;
    cout << "enter weight ang price of package 1 :";
    cin >> we1 >> pr1;
    cout << "enter weight ang price of package 2 :";
    cin >> we2 >> pr2;
    cout <<pr1<<pr2<<we1<<we2 <<endl;
    if (pr1/we1 > pr2/we2) {cout<<"package 2 has better price"<<endl;}
    else if (pr2/we2>we1/pr1) {cout<<"package 1 has better price"<<endl;}
    else {cout<<"they are equal"<<endl;}

    //problem 12


    int pol;
    cout << "a three-digit integer: ";
    cin >> pol;
    if (pol/100==pol%10 && pol !=0) {cout << "this is polindrom";}
    else {cout << "this is not polindrom";}

    //porblem 13

    char light;
    cout << "enter a traffic lihgt colour :";
    cin >> light;
    if (light == 'r') {cout << "stop";}
    else if (light == 'g') {cout << "go"<<endl;}
    else if (light == 'y') {cout << "get ready!"<<endl;}


    else {cout << " you should use only r,g,y"<<endl;}

   // problem 14


     int kun;
     cout <<"kunni kirit: ";
     cin >> kun;
     if (kun==1) {cout << "monday"<<endl;}
     else if (kun==2) {cout << "tuesday"<<endl;}
     else if (kun==3) {cout << "wednesday"<<endl;}
     else if (kun==4) {cout << "thursday"<<endl;}
     else if (kun==5) {cout << "friday"<<endl;}

     else if (kun==6) {cout << "saturday"<<endl;}
     else if (kun==7) {cout << "sunday"<<endl;}
     else  {cout << "there is no such weekday"<<endl;}


    //problem 15

     int today,future;
     cout <<" Enter the number of today's day: " ;
     cin >>today;
     cout << "enter the number of days elapsed since today: ";
     cin >>future;
     int aft=(today+future)%7;
     map<int, string>lugat;
 lugat[1] = "monday";
 lugat[2]="tuesday";
 lugat[3]="wednesday";
 lugat[4]="thursday";
 lugat[5]="friday";
 lugat[6]="saturday";
 lugat[0]="sunday";
 lugat[7]="sunday";
    cout << "today is "<<lugat[today]<< " and after "<<future<<"  days"<<" the day will be "<<lugat[aft]<<endl;






    //problem 16


  int grade;
  cout << "Enter grade (0-100): ";
  cin >> grade;

  switch (grade / 10) {
   case 10:   // 100 uchun
   case 9: cout << "A" << endl; break;
   case 8: cout << "B" << endl; break;
   case 7: cout << "C" << endl; break;
   case 6: cout << "D" << endl; break;
   default: cout << "F" << endl; }




 //problem 17

 float num9;
 int be;
 cout << "enter a number :";
 cin >> num9;
 if (num9>0) be=1;
else if (num9<0) be=-1;
 else be=0;
 switch (be) {
  case 1: cout << "positive number"; break;
  case 0: cout << "zero number"; break;
  case -1: cout << "negative number"; break;
 }




 //problem 18

 char lang;
 cout << "select a language that computer greets them: u,e,r,g >> ";
 cin >> lang;
 switch (lang) {
  case 'u':cout << "salom" << endl;
   case  'e':cout << "hello" << endl;
   case  'r': cout << "здрастие" << endl;
  case 'g' : cout << "Hallo" << endl;
   default: cout << "none" << endl;

 }



 //problem 19
float wieght;
 int cas;
 cout << "enter the wieght :";
 cin >> wieght;
 if (0<wieght && wieght<= 1) cas = 1;
 else if (1<wieght && wieght<=3) cas = 2;
 else if (3<wieght && wieght<=10) cas = 3;
 else if (10<wieght && wieght<=20) cas = 4;
 else if (wieght>20) cas=5;
 else cas=6;

 switch (cas) {
  case 1: cout <<3500<<endl; break;
   case 2: cout <<5500<<endl; break;
   case 3: cout <<8500<<endl; break;
   case 4: cout <<10500<<endl; break;
   case 5: cout <<"this package cannot be shipped"<<endl; break;
   case 6: cout <<"invalid input"<<endl; break;
 }

*/

 // problem 20

 cout << "enter a digit :";
 int raq;
 cin >> raq;
 if (raq >= 0 && raq <= 9) {
  switch (raq) {
   case 0: cout << "zero" << endl; break;
    case 1: cout << "one" << endl; break;
    case 2: cout << "two" << endl; break;
    case 3: cout << "three" << endl; break;
    case 4: cout << "four" << endl; break;
    case 5: cout << "five" << endl; break;
    case 6: cout << "six" << endl; break;
    case 7: cout << "seven" << endl; break;
    case 8: cout << "eight" << endl; break;
    case 9: cout << "nine" << endl; break;
  }
 }
 else { cout << "it is not a digit" << endl; }




 return 0;
}