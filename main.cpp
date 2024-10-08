#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello World!\n";
    string input;
    cout<<"Enter your name: ";
    cin>>input;
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
    cout<<"Tadaaa...!!!";
    return 0;
}