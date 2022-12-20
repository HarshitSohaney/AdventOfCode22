#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    std::ifstream myfile; 
    myfile.open("day2.in");

    std::string mystring;
    int calc = 0;
    int total = 0;

    while(myfile.good()){
        getline(myfile, mystring); // pipe file's content into stream
        //std::cout << mystring; // pipe stream's content to standard output
        string opponent = "";
        string you = "";

        if(mystring[0] == 'A')
            opponent = "rock";
        else if(mystring[0] == 'B')
            opponent = "paper";
        else if(mystring[0] == 'C')
            opponent = "scissors";
        if(mystring[2] == 'X') {
            if(opponent == "rock")
                total += 3;
            if(opponent == "paper")
                total += 1;
            if(opponent == "scissors")
                total += 2;
        }
        else if(mystring[2] == 'Y'){
            if(opponent == "rock")
                total += 1;
            if(opponent == "paper")
                total += 2;
            if(opponent == "scissors")
                total += 3;
            total += 3;
        }
        else if(mystring[2] == 'Z'){
            if(opponent == "rock")
                total += 2;
            if(opponent == "paper")
                total += 3;
            if(opponent == "scissors")
                total += 1;
            total += 6;
        }
        //cout << stoi(mystring) <<endl;
    }

    cout << total;
    return 0;
}


