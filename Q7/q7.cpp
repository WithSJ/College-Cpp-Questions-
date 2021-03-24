#include<iostream>

using namespace std;

string input()
{
    string data="";
    char ch;
    while (ch != '\n')
    {
        ch = getchar();
        data += ch;
    }

    return data;
    
}
int len(string data)
{
    int i =0;
    while(data[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(int argc, char const *argv[])
{

    cout<<"Enter number : ";
    string data = input();
    for (int k = 0; k < len(data)-1; k++)
    {

        for (int i = k; i < len(data)-1; i++)
        {
            for (int j = k; j <= i; j++)
            {
                cout<<data[j];
            }
            cout<<",";
            
        }
            
    }
    
    
    return 0;
}
