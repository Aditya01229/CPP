#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/*
Stringstream is used to convert integer to string and vice versa
sstream is to be included
for sstrings string has to be incuded

<< to  add element in the stringstream
>> to extract
element can be any int, char, string, float, double..
stringstream name;  DECLARATION
name(str);   ADDING STRING TO THE STRINGSTREAM
name.str();  RETURN THE WHOLE STRING
name.clear()  TO CLEAR THE STREAM
*/
int main(int argc, char const *argv[])
{
    // Here I'm writing program to display all the integers separated by comma in new line of a string and saving it in a vector.
    string a;
    cout << "Enter athe string of ints separated by comma:";
    cin >> a;
    stringstream ss(a);
    vector<int> v;
    int temp1;
    char temp2;
    while (ss)
    {
        ss >> temp1;
        v.push_back(temp1);
        ss >> temp2;
    }
    // cout << v.size();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
