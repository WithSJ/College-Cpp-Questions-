#include<iostream>

using namespace std;

int count_digits(int num);

void num_to_arr(int num,int arr[],int count);

void swap_arr(int arr[],int count);

int arr_to_num(int arr[],int count);

int main()
{
    int num;

    cout<<"Input:";
    cin>> num;
    
    int count = count_digits(num); 
    int arr[count];
    
    num_to_arr(num,arr,count);
    swap_arr(arr,count);

    cout<<"\nOutput : "<<arr_to_num(arr,count)<<endl;
    return 0;
}

int arr_to_num(int arr[],int count)
{   int num=0;
    for (--count; count >= 0; count--)
    {
        num = num + arr[count];
        num = num * 10;
    }
    
    return num/10;

}

void swap_arr(int arr[],int count)
{
    if (count %2 == 0)
    {
        for (int i = 0; i < count; i+=2)
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                
            }
    }else{

        for (int i = count-1; i > 0; i-=2)
            {
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;

                
            }
        

    }
    
    
    
}
void num_to_arr(int num,int arr[],int count)
{
    for (int i = 0; i < count && num > 0; i++)
    {
        arr[i] = num % 10;
        num = num / 10;
    }

}

int count_digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num % 10;
        num = num / 10;
    }

    return count;
    
    
}

