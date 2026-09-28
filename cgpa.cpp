#include<iostream>
#include<vector>
using namespace std;
class Subject{
  public:      
    string subjectName;
    int credit;
    int greadPoint;
  Subject(string sn, int c, int gp){
    subjectName=sn;
    credit=c;
    greadPoint=gp;
  }  
};
class Student{
  public:
    string name;
    vector<Subject>subjects; 
  Student(string studentName){
    name=studentName;
  }

    void addSubject(string subjectName, int credit, float greadPoint){
        Subject new_subject(subjectName,credit,greadPoint);
        subjects.push_back(new_subject);
    }
    float calculateCGPA(){
        float num=0,den=0;
        for(int i=0 ; i<subjects.size() ; i++){
            num = num + subjects[i].credit*subjects[i].greadPoint;
            den=den+subjects[i].credit;
        }
      return (den>0)?(num/den):0;  
    }
    void print(){
        cout<<"student name = "<<name<<endl;
        float cgpa = calculateCGPA();
        cout<<"CGPA = "<<cgpa<<endl;
    }
    // void addSubject(string subjectName, int credit, float greadPoint){
    // }
};
int main(){
    string studentName;
    int numSub;
    cout<<"enter student's name = ";
    getline(cin,studentName);
    cout<<"enter number of subjects = ";
    cin>>numSub;
    cin.ignore();
    Student student(studentName);
    float num = 0, den = 0;
    for(int i=0 ; i<numSub ; i++){
        string subjectName;
        int credit;
        float greadPoint;
        cout<<"Enter the subject name = ";
        getline(cin,subjectName);
        cout<<"Enter the credit = ";
        cin>>credit;
        cout<<"Enter the greadPoint = ";
        cin>>greadPoint;
        cin.ignore();
        student.addSubject(subjectName,credit,greadPoint);
        // student.calculateCGPA(credit,greadPoint,numSub);
        // num = num + credit*greadPoint;
        // den = den + credit;
    }
    student.print();
    // if(den !=0 )
    // cout<<"CGPA = "<<num/den;
    // else
    // cout<<"CGPA = "<<0;
    return 0;
}
// float calculateCGPA(int credit, float greadPoint, int numSub){
//         float num=0,den=0;
//         for(int i=0 ; i<subjects.size() ; i++){
//             num = num + subjects[i].credit*subjects[i].greadPoint;
//             den=den+subjects[i].credit;
//         }
//       return (den>0)?(num/den):0;  
//     }