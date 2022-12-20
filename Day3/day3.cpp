#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
    std::ifstream myfile; 
    myfile.open("day3.in");

    std::string mystring;
    int total = 0;

    while(myfile.good()){
        int count = 0;
        set<char> items = {};
        getline(myfile, mystring); 
        while(count != 2) {
            // pipe file's content into stream
            int halfpoint = mystring.length()/2;

            if(count == 0)
                for(int i = 0; i < halfpoint; i++)
                    items.insert(mystring[i]);
            if(count == 1)
                for(int i = halfpoint; i < halfpoint*2; i++) {
                    if(items.find(mystring[i]) != items.end()) {
                        cout << "common: " << mystring[i] << " with value" << int(mystring[i]) <<endl;
                        if(mystring[i] <= 90)
                            total += int(mystring[i]) - 38 ;
                        else
                            total += int(mystring[i]) - 96;
                        break;
                    }
                }
            count++;
        }
        //std::cout << mystring; // pipe stream's content to standard output
       
        //cout << stoi(mystring) <<endl;
    }

    cout << total;
    return 0;
}


