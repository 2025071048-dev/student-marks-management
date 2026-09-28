#include<iostream>
#include<vector>
using namespace std;
class student{
  public:  
    string name = "SHivam";
    vector<int>v;
    // vector<int>v(5,2); is wrong bcz compiler understood it as object
    student(string name,int x, int y){
        this->name=name;
        // this->v=vector<int>(5,2);
        this->v=vector<int>(x,y);
    }
};
int main(){
    student s1("Shivam",2,5);
    // s1.name = "Shivam";
    // s1.v.push_back(2);
    // s1.v[0] = 2;
    cout<<s1.name<<endl;
    for(int i=0 ; i<s1.v.size() ; i++){
    cout<<s1.v[i]<<endl;
    }
    return 0;
}