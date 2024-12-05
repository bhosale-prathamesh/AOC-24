#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream myfile("Day_1/input.txt");
    int num1;
    int num2;
    
    string line;
    vector<int> nums_1;
    vector<int> nums_2;

    while(getline(myfile, line)) {
        istringstream iss(line);
        if (iss >> num1 >> num2){
            // cout << num1 << " " << num2 << endl;
            nums_1.push_back(num1);
            nums_2.push_back(num2);
        }
        else break;

    }

    sort(nums_1.begin(), nums_1.end());
    sort(nums_2.begin(), nums_2.end()); 

    int answer = 0;
    for (int i = 0; i < nums_1.size(); i++){
        answer += abs(nums_1[i] - nums_2[i]);
    }

    cout << answer << endl; 
    myfile.close();
    return 0;
}