#include<iostream>
using namespace std;

class LargerValues{
    public:
    vector<int> secondlargest(vector<int> v)
    {
        int largest = v[0];
        int slargest = -1;
        int i=0;
        for(int j=0; j<v.size();j++)
        {
            if(v[j] > largest)
            {
                slargest=largest;
                largest=v[j];
            }
            else if(v[j]<largest && v[j]>slargest ){
                slargest=v[j];
            }
        }
        return {largest,slargest};
    }
};

int main(){
    LargerValues largerValues;
    vector<int> values = {8,7,5,3,2,1};
    cout<<"largest:" << largerValues.secondlargest(values)[0] << endl;
    cout<<"second largest:" << largerValues.secondlargest(values)[1] << endl;
}