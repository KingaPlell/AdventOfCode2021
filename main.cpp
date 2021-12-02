#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string txt;
    vector<int> num;
    ifstream f;
    f.open("input.txt");

    int x;
    while(getline (f, txt)){
        x = stoi(txt);
        num.push_back(x);
    }

    int counter = 0;
    int sum1 = num[0] + num[1] + num[2];
    for(int i = 3; i < num.size(); i++)
    {
        int sum2 = num[i-2] + num[i-1] + num[i];
        if(sum1 < sum2){
            counter++;
        }
        sum1 = sum2;
    }
    f.close();
    cout << counter<<endl;
    return 0;
}
