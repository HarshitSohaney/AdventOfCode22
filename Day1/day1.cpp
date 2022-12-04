#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <set>

using namespace std;

int main(int argc, char *argv[]) {
    std::ifstream myfile; 
    myfile.open("day1.in");
    set<int> maxes;

    std::string mystring;
    int calc = 0;
    while(myfile.good()){
        getline(myfile, mystring); // pipe file's content into stream
        //std::cout << mystring; // pipe stream's content to standard output
        if(mystring == "") {
            maxes.insert(calc);
            cout << calc <<endl;
            calc = 0;
            continue;
        }
        //cout << stoi(mystring) <<endl;
        if(!myfile.eof())
            calc = calc + stoi(mystring);
    
    }
    int count = 0;
    int total = 0;
    cout <<"Sorted" <<endl;
    for(auto i = maxes.rbegin(); ; i++) {
        if(count == 3)
            break;
        cout << *i <<endl;
        total += *i;
        count++;
    }
    cout << total;
    return 0;
}


