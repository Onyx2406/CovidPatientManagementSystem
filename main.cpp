#include "covid.h";
#include<fstream>
using namespace std;
std::ofstream file("corona_record.txt", std::ios_base::app);
 
class Patient{
private:
string fname="";
string sname="";
string gender="";
int age;
string city="";
string dob;
public:
 
Patient(string fn, string sn,int a,string gen,string coun,string d){
 
fname=fn; file<<"First Name: "<<fn;
sname=sn; file<<"Surname: "<<sn;
age=a; file<<"\nAge: "<<a;
city=coun; file<<"\nCoutry: "<<coun;
gender=gen; file<<"\nGender: "<<gen;
dob=d; file<<"\nDate of birth: "<<d;
}
//Creating class methods
 
 
bool state_of_Patient();
};
bool Patient::state_of_Patient(){
char y;
cout<<"\n\nIs the Patient Covid Positive/Negative?(y/n): ";
cin>>y;
if(y=='y'){
return true;
}
return false;
}
 
int main(){
cout<<"****\tCoronaVirus Patient Management System \t****\n\n";
 
string fname="";
string sname="";
string gender="";
int age;
string city="";
string dob;
cout<<"\nEnter First name: ";
cin>>fname;
cout<<"\nEnter Surname: ";
cin>>sname;
cout<<"\nEnter gender (M/F): ";
cin>>gender;
cout<<"\nEnter age: ";
cin>>age;
cout<<"\nEnter city name: ";
cin>>city;
cout<<"\nEnter date of birth: ";
cin>>dob;
 
//Creating object
Patient T(fname,sname,age,gender,city,dob);
 
//calling from header 'covid.h'
Quarantine();
cout<<"\n";
 
//Calling the function
char s;
cout<<"\nDo you have the the symptoms such as dry cough,fever,tiredness or shortness of breath? press y/n: ";
cin>>s;
if(s=='y')
cout<<"\nYou are Not Allowed to use public transport or any public services !\n";
if(s=='n')
cout<<"\nYou are Allowed to use public transport or any public services !\n";
 
char v;
cout<<"\nAre you Vaccinated? press y/n: ";
cin>>v;
if(v=='y')
cout<<"\nCongratulations! Fully vaccinated people can resume activities without wearing a mask or physically distancing, except where required by federal, state, local, tribal, or territorial laws, rules, and regulations, including local business and workplace guidance.";
if(v=='n')
cout<<"\nPlease book your slot as soon as possible. Getting Vaciinated is essential!";
 
int immunity;
cout<<"\n\nYour immunity level in the range (0-10): ";
cin>>immunity;
if(immunity>4) cout<<"\nYour immunity is normal ";
if(immunity<=4) cout<<"\nYour immunity is too low ! You must avoid going to public places unless its essential. ";

char a;
string address;
if(T.state_of_Patient()==true)
cout<<"\n\nDo you need medical supplies and check up by a healthcare worker? press 'y' for yes and 'n' for no: ";
cin>>a;
if(a=='y')
{
    cout<<"\nEnter your address for checkup by healthcare worker and to deliver the medical supplies: ";
    cin>>address;
    cout<<"\nYour address is: " << address;
}
else
{
    cout<<"";
} 
 
cout<<"\n\nThank you for giving this survey. If you are covid positive, a medical healthcare worker will reach out to you in 24 hours to supply medical needs. Stay safe.";
 
file<<"\n\nImmunity level of pateint: "<<immunity;
 
file<<"\n\n\n";
file.close();
}
