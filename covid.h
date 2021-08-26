#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Quarantine(){
string y;
string state[4] = { "Maharashtra","Delhi","Gujrat","Rajasthan" };
std::cout<<"\nEnter your State: ";
std::cin>>y;
if(y==state[4]) cout<<"\nYour State has imposed a lockdown due to increasing no. for covid cases. Please stay at home!";
else cout<<"\nNo lockdown has been imposed in your state";
}