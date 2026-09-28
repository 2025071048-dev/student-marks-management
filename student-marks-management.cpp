#include<iostream>
#include<vector>
using namespace std;

class student{
  public:  
    string name;
    int total;
    float obtain;
};
class subjects{
  public:  
  string stdname;
    vector<student>visay;

    void addsub(string name, int total, float obtain){
      student s;
      s.name = name;
      s.total = total;
      s.obtain = obtain;
      visay.push_back(s);
    }
    void print(){
          float num=0;
          float den=0;
      for(int i=0; i<visay.size() ; i++){
          num = num + visay[i].obtain;
          den = den + visay[i].total;
      }
      float ans = (num / den) * 100;
      cout<<"You are : "<<stdname<<endl;
      cout<<"Obtain percentage = ";
      cout<<ans;
      cout<<"%"<<endl;
    }
};
int main(){
    string stdname;
    cout<<"Enter student name = ";
    getline(cin,stdname);
    int numsub;
    cout<<"Enter number of subject = ";
    cin>>numsub;
    subjects s2;
    s2.stdname = "Shivam";

    for(int i=0 ; i<numsub ; i++){
      string subname;
      cout<<"Enter subject name = ";
      cin>>subname;
      int total;
      cout<<"Enter total marks = ";
      cin>>total;
      cout<<"Enter obtain marks = ";
      float obtain;
      cin>>obtain;
      s2.addsub(subname,total,obtain);
    }
    s2.print();
    return 0;
}