#include<iostream>
#include<vector>
using namespace std;
class student{
  public:  
    string name;
    int arr[2];
};
int main(){
    student s1;
    s1.name = "Shivam";
    // s1.v.push_back(2);
    s1.arr[0] = 2;
    cout<<s1.name<<endl;
    cout<<s1.arr[0];
    return 0;
}