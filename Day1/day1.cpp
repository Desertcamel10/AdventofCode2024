#include <iostream>
#include <set>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    multiset<int> ar1;
    multiset<int> ar2;
    int number;
    int total = 0;
    bool toggle = true;
    string filename = "day1puzzle.txt";

    ifstream inputFile(filename);

    
    while(inputFile >> number){
        if(toggle){
            ar1.insert(number);
        }
        else
            ar2.insert(number);

        toggle = !toggle;
    }

    


    inputFile.close();

    for(const auto& num: ar1){
        total = total + (num * ar2.count(num));
    }
    cout << total << endl;

    return 0;
}

