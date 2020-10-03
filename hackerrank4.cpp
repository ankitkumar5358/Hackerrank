
#include <iostream>
#include <cstdio>
using namespace std;

int main()
 {

      int num1, num2;
      cin>>num1>>num2;

      string Arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight",             "nine"};
       for(int i = num1; i <= num2; i++)
        {
            if(i<=9)
            {
                cout<<Arr[i-1]<<endl;
            }
        }
        

      if(num1%2==0)
        cout<<"even"<<endl;

        
         else;
         cout<<"odd";
       

    return 0;
}