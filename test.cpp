#include<iostream>
#include<vector>
using namespace std;

struct test
{
    string name;
    int num;
    test(){
        name="Nil";
        num=0;
    }
    test(string _name,int _num){
        name=_name;
        num=_num;
    }
    void testdisplay(){
        cout<<"Name : "<<name<<endl;
        cout<<"Num : "<<num<<endl;
    }
};

vector<test> v;

int main(){
    v.push_back(test());
    v[0].testdisplay();
    v.push_back(test("Jyotirmoy",1));
    v[1].testdisplay();
    return 0;
}