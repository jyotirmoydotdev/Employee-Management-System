#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;

struct employee
{
    string name;
    int employeeid;
    string designation;
    int experience;
    int age;
    employee(){
        name="Nil";
        employeeid=0;
        designation="Nil";
        experience=0;
        age=0;
    }
    employee(string name_,int employeeid_,string designation_,int experience_,int age_){
        name=name_;
        employeeid=employeeid_;
        designation=designation_;
        experience=experience_;
        age=age_;
    }
    //All employee data
    // Single data return
    string _name(){
        return name;
    }
    int _id(){
        return employeeid;
    }
    string _designation(){
        return designation;
    }
    int _experience(){
        return experience;
    }
    int _age(){
        return age;
    }
};
vector<employee> e;

void store(){

}
void fetch(){

}
void table(){
    cout<<endl;
    for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
    cout<<"-> Emploee Data"<<endl;
    for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
    cout<<"Name->ID->Designation->Experience->Age"<<endl;
    for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;

    for (int i=0;i<e.size();i++){
        cout<<e[i]._name()<<"->";
        cout<<e[i]._id()<<"->";
        cout<<e[i]._designation()<<"->";
        cout<<e[i]._experience()<<"->";
        cout<<e[i]._age()<<endl;
    }
}
int exit(){
    return 0;
}

void add(){
    string name,designation;
    int employeeid, experience, age;
    string fname,lname;
    cout<<"Enter first Name: ";
    cin>>fname;
    cout<<"Enter Last name: ";
    cin>>lname;
    name=fname+" "+lname;
    cout<<"Enter Employee ID: ";
    cin>>employeeid;
    cout<<"Enter Designation: ";
    cin>>designation;
    cout<<"Enter Experience: ";
    cin>>experience;
    cout<<"Enter Age: ";
    cin>>age;
    e.push_back(employee(name,employeeid,designation,experience,age));
    for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
    cout<<"Employee Added to the system."<<endl;
    for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
}

void displayoption(){
    cout<<"Employee  Table (1)"<<endl; // table() done
    cout<<"Add -- Employee (2)"<<endl; // add() done
    cout<<"Delete Employee (3)"<<endl; 
    cout<<"Edit - Employee (4)"<<endl;
    cout<<"Search Employee (5)"<<endl; 
    cout<<"Exit ---------> (6)"<<endl; // exit() Done
}

int main(){
    /*
    ofstream file("data.txt");
    file<<"Hello\nhi"<<endl;
    file.close();
    string array[2];
    int loop=0;
    string line;
    ifstream ofile("data.txt");
    if(ofile.is_open()){
        while(!ofile.eof()){
            getline(ofile,line);
            array[loop]=line;
            loop++;
        }
        ofile.close();
    }

    for (int i=0;i<2;i++){
        cout<<array[i]<<endl;
    }
    return 0;
    */
    fetch();
    int i=0;
    while(i!=6){
        displayoption();
        i=0;
        cout<<"Enter Number : ";
        cin>>i;
        if (cin.fail()){
            cin.clear(); cin.ignore(512, '\n');
            cout<<endl;
            for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
            cout<<"-> Not a number";
        }
        if (i==1){
            table();
        }
        else if (i==2){
            add();
        }
        else if (i==3){
            
        }
        else if (i==4){

        }
        else if (i==5){

        }
        else if (i==6){
            exit();
        }
        else{
            cout<<endl;
            for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
            cout<<"-> Enter a Valid number !!"<<endl;
            for (int i=0;i<10;i++){cout<<"+-";}cout<<endl;
        }
    }
    store();
    return 0;
}