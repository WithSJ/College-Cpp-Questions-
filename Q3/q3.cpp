#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int total=0;
    
    for (int i = 1; i <= num && i > 0; i++)
    {
        int sub_total = 0;
        cout<<endl;
        for (int j = 1; j <= i; j++)
        {   cout<<j;
            sub_total += j;
            total += j;
            if(j<i)
            {cout<<" + ";}
        }
        cout<<" = ["<<sub_total<<"]";
    }
    
    cout<<"\nThe Sum of above series : ["<<total<<"]"<<endl;

    return 0;
}
