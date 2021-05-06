//Olivia Walker
//Scope Function.

#include <iostream>
#include <cstring>

using namespace std;

void greet_someone() {
    string greeting = "from someone function";
    cout << endl << greeting << endl; //local scope
}

int main()
{
    
    string greeting = "from main function";
    greet_someone();
    cout << endl << greeting << endl;


}


