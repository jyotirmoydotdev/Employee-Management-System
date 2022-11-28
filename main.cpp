#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;

int main(){
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
}
