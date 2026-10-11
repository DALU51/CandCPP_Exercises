#include <string>
#include <vector>
#include <cctype>
using namespace std;

struct person {
    string OGname;
    vector<char> name; 
    int cleanSize;
} myPerson;

person cleaner(string y);

person cleaner(string y){

    for (char i : y){
        if (!std::isspace(i)){
            myPerson.name.push_back(i);
        }
    }
    
    myPerson.cleanSize = myPerson.name.size();
    return myPerson;
}