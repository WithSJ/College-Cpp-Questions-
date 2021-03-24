#include<iostream>
#include<fstream>

using namespace std;

class Student
{
    public:
        int srno;
        string name;
        int age;
        string cls;
        string email;
        long int phone;
        string city;
};

class  DataRecord
{

    public:
    
    void add_student(Student stu_obj)
    {
        // Add new student in records
        ofstream file_obj;
        file_obj.open("DATA",ios::out | ios::app);
        file_obj.write((char*)&stu_obj,sizeof(stu_obj));
        file_obj.close();
    }

    static void show_students()
    {
        Student stu_obj;
        ifstream file_obj;
        file_obj.open("DATA",ios::in);
        // while (file_obj.eof() == 0)
        // {
            file_obj.read((char*)&stu_obj,sizeof(stu_obj));
            cout<<"| Sr no : "<<stu_obj.srno<<" |";
        //     cout<<"| Name : "<<stu_obj.name<<" |";
        //     cout<<"| Age : "<<stu_obj.age<<" |";
        //     cout<<"| Class : "<<stu_obj.cls<<" |";
        //     cout<<"| Email : "<<stu_obj.email<<" |";
        //     cout<<"| Phone : "<<stu_obj.phone<<" |";
        //     cout<<"| City : "<<stu_obj.city<<" |";
        // }

        file_obj.close();


    }

    // Student* all_students()
    // {
        
    //     static Student list[this->auto_id()];
    //     int i=0;
        
    //     Student stu_obj;
    //     fstream file_obj;
    //     file_obj.open("DATA",ios::in);

    //     while (!file_obj.eof())
    //     {
    //         file_obj.read((char*)&stu_obj,sizeof(stu_obj));
    //         list[i] = stu_obj;
    //         i++;
    //     }
    //     file_obj.close();

    //     return list;
        
        
        
        
    // }

    static int auto_id()
    {
        int i=0;
        Student stu_obj;
        ifstream file_obj;
        file_obj.open("DATA",ios::in);
        while (file_obj.eof() == 0)
        {
            i++;
            file_obj.read((char*)&stu_obj,sizeof(stu_obj));
        }

        file_obj.close();

        return i;
    }

};

void input_data()
{
    Student stu_obj;
    cout<< "Enter Sr no. : ";
    cin>> stu_obj.srno;
    cout<< "Enter Name : ";
    cin>> stu_obj.name;
    cout<< "Enter Age : ";
    cin>> stu_obj.age;
    cout<< "Enter Class : ";
    cin>> stu_obj.cls;
    cout<< "Enter Email : ";
    cin>> stu_obj.email;
    cout<< "Enter Phone : ";
    cin>> stu_obj.phone;
    cout<< "Enter City : ";
    cin>> stu_obj.city;

    DataRecord().add_student(stu_obj);
}
int main(int argc, char const *argv[])
{
    
    // input_data();
    DataRecord().show_students();

    return 0;
}
