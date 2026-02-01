#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout << "Enter your name: ";
    cin>>name;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    string address;
    cout<<"Enter your address: ";
    cin>>address;
    long int phone;
    cout<<"Enter your phone number: ";
    cin>>phone;
    // print user name
    cout<<"Hello "<<name<<"\n";
    // print user age
    cout<<"you are "<<age<<" year's old"<<"\n";
    // print address
    cout<<"your address is "<<address<<"\n";
    // print phone
    cout<<"your phone: "<<phone<<"\n";
return 0;
}