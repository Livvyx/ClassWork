
//Olivia Walker
//if no value is passe din the function then the default value will be used

#include <iostream>
#include <cstring>
using namespace std;

//function definition
string greet_someone(string college = "Yoobee Colleges") {
    string greeting = "hello " + college;
    return(greeting);
}


int main()
{
    string member1 = greet_someone("Olivia");
    string member2 = greet_someone("Larissa");
    string member3 = greet_someone();//uses default
    cout << member1 << endl;
    cout << member2 << endl;
    cout << member3 << endl;
}







