#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;
struct student
{
   int age = 15;
   string first_name = "Ankit";
   string last_name = "Kumar";
   int standard = 10;

};
int main()
{ 
   student st;
   cin>> st.age >>st.first_name>>st.last_name>>st.standard;
   cout<<st.age <<" "<<st.first_name<<" "<<st.last_name<<" "<<st.standard<<endl;
   
    return 0;
}