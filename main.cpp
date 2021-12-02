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

    int hor_poz= 0;
    int depth = 0;
    int aim = 0;
    int numb;
    while(getline (f, txt)){
        char first_char = txt[0];
        txt.erase(txt.begin(),txt.end()-2);
        numb = stoi(txt);

        switch (first_char) {
            case 'f':
                hor_poz += numb;
                depth += aim * numb;
                break;
            case 'd':
                aim += numb;
                break;
            case 'u':
                aim -= numb;
                break;
        }

    }
    cout << hor_poz << endl;
    cout << depth << endl;
    int result = hor_poz * depth;
    cout << result << endl;
    return 0;
}
