#include<string>
#include<sstream>
#include<iostream>
using namespace std;
class Student{

public:
int age, standard;
string first_name, last_name;

public:
void set_age(int a) {age = a;}
void set_standard(int s) {standard = s;}
void set_first_name(string fname) {first_name = fname;}
void set_last_name(string lname) {last_name = lname;}

int get_age() {return age;}
int get_standard() {return standard;}
string get_first_name() {return first_name;}
string get_last_name() { return last_name;}

string to_string()
  {
    stringstream ss;
    ss<< age << "," << first_name << "," << last_name << "," << standard;
    return ss.str();
  }

};

int main()
{
     int age, standard;
     string first_name, last_name;
     cin >> age >> first_name >> last_name >> standard;
     
     Student st;
     st.set_age(age);
     st.set_standard(standard);
     st.set_first_name(first_name);
     st.set_last_name(last_name);
    
      
    std::cout << st.get_age() << "\n";
      std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();


    return 0;
}