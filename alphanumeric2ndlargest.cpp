#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

class Alphanumericsecondlargest {
public:
    int secondLargest(string inputString) {
        vector<int> intArray;

        for (int i = 0; i < inputString.length(); i++) {
            if (isdigit(static_cast<unsigned char>(inputString[i]))) {
                intArray.push_back(inputString[i] - '0'); // convert char digit to int
            }
        }

        if (intArray.empty()) {
            cout << "No digits found in string." << endl;
            return -1;
        }

        int largest = intArray[0];
        int slargest = -1;

        for (int i = 0; i < intArray.size(); i++) {
            //cout << "test : " << intArray[i] << endl;
            if (intArray[i] > largest) {
                slargest = largest;
                largest = intArray[i];
            } else if (intArray[i] < largest && intArray[i] > slargest) {
                slargest = intArray[i];
            }
        }

        return slargest;
    }
};

int main() {
    Alphanumericsecondlargest alpha;
    string inputString = "dfa12321afd";
    cout << "second largest : " << alpha.secondLargest(inputString) << endl;
}