#include <iostream>
#include <cstdio>
using namespace std;

int main()
 {

    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    std::cout<<a<<endl;
    std::cout<<b<<endl;
    std::cout<<c<<endl;
    /*cout<<d<<endl;
    cout<<e<<endl;*/
    
    std::cout.precision(3);
    std::cout<<fixed<<d<<endl;
    std::cout.precision(9);
    
    std::cout<<fixed<<e<<endl;


     

    return 0;
}