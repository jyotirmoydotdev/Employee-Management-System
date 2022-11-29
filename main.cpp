#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;

int exit(){
    return 0;
}

void displayoption(){
    cout<<"Employee  Table (1)"<<endl;
    cout<<"Add    Employee (2)"<<endl;
    cout<<"Delete Employee (3)"<<endl;
    cout<<"Edit   Employee (4)"<<endl;
    cout<<"Search Employee (5)"<<endl;
    cout<<"Exit ---------> (6)"<<endl;
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
   displayoption();
   int i=0;
   cout<<"Enter Number : ";
   cin>>i;
   if (i==6){
    exit();
   }
   return 0;
}