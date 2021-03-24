#include<iostream>

using namespace std;

string input()
{
    string data;
    char ch;
    while (ch != '\n')
    {
        ch=getchar();
        data += ch;
    }
    data += '\0';
    return data;
    
}

string trim(string data)
{
    int start=0,end=0;
    while (data[start] == ' ')
    {start++;}
    
    
}
// int count_space()
// {

// }

// string* split(string data)
// {

    
// }

bool is_number(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }else{return false;}

}

string only_number_space(string data)
{
    string num_data;
    int i=0;
    while (data[i] != '\0')
    {
        if(is_number(data[i]) || data[i] == ' ')
        {
            num_data += data[i];
        }
        i++;
    }

    return num_data;
    

}
int main(int argc, char const *argv[])
{
    string data;
    cout<<"Enter your string : ";
    data = input();

    string num_data = only_number_space(data);

    cout<<num_data;
    
    return 0;
}
