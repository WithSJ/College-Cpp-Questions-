#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int total=0;
    
    for (int i = 0; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {total += j;}
    }
    
    cout<<"\n"<<total<<endl;
    
    return 0;
}
