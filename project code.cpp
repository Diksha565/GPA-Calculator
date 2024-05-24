#include<iostream>
#include<math.h>
using namespace std;
class student
{
public:
    float a;
    int rno;
    float m[5];
    string nm;
    float perc;
    string branch;
public:
    void avg(float m[5])
    {
        int sum=0,avg=0;
        for(int j=0;j<5;j++){
        sum=sum+m[j];
        avg=sum/5;
        }
        //for(int i=0;i<2;i++){
       cout<<"Avg marks of student = "<<avg<<endl;

}
void getdata(){
        cout<<"Enter data of 10 Students: \n";
        // for(int i=0;i<2;i++){
        cout<<"\nEnter roll number of student "<<": ";
        cin>>rno;
        cout<<"\nEnter Name of student "<<": ";
        cin>>nm;
        cout<<"Enter marks of Student "<<" for subjects \n1. PPS\n2. Calculus \n3. Physics \n4. EOB \n5. PE  "<<endl;
        for(int j=0;j<5;j++){
         cout<<"Subject "<<j+1<<": ";
         cin>>m[j];
         cout<<endl;
         }
}
void show_data(){
         for(int i=0;i<1;i++){
         cout<<"\nRoll number of student "<<i+1<<": "<<rno;
         cout<<"\nName of student "<<": "<<nm;
         cout<<"\nMarks of Student "<<" for subjects \n1. PPS\n2. Calculus \n3. Physics \n4. EOB \n5. PE  "<<endl;
            for(int j=0;j<5;j++){
            cout<<"Subject "<<j+1<<": "<<m[j];
            cout<<endl;
            }
         }
}
void GPA(float m[5]){
       float sum=0,per=0,gpa=0;
        for(int j=0;j<5;j++){
        sum=sum+m[j];
        per=(sum*100)/500;
        gpa=(per*4)/100;
        }
        cout<<"GPA of student = "<<gpa<<endl;

}
void topper(float m[5]){

}
void fail(float m[5]){
    float sum=0,per=0,gpa=0;
        for(int j=0;j<5;j++){
        sum=sum+m[j];
        per=(sum*100)/500;}
        if(per<40){
            cout<<"Student with roll number "<<rno<<" Failed!!!"<<endl;
        }
        else{
        cout<<"Student with roll number "<<rno<<" Passed***"<<endl;
        }
}
void search(){
    cout<<"Enter roll number of student: ";
    cin>>rno;
    cout<<endl;
}
void Ascending( );
void Descending( );
};
int main(){
    student s[2];
    for(int i=0;i<2;i++){
    s[i].getdata();
    }
    int choice;
     cout<<"MENU - \n\n";
     cout<<"1.Data of all students \n";
     cout<<"2.Average marks \n";
     cout<<"3.GPA \n";
     cout<<"4.Topper of the class \n";
     cout<<"5.Students who failed \n";
     cout<<"6.Sorting in Ascending/Descending order \n";
     cout<<"7.Search Data \n";
     cout<<"8.Deletion of records \n\n\n";
     cout<<"\t\t\t\t\tPlease enter a choice to get started: ";
     cin>>choice;
    switch(choice){
     case 1:
          for(int i=0;i<2;i++){
           s[i].show_data();
          }
         break;
     case 2:
        for(int i=0;i<2;i++){
        s[i].avg(s[i].m);
        }
        break;
     case 3:
        for(int i=0;i<2;i++){
        s[i].GPA(s[i].m);
        }
        break;
     case 4:
     //for(int i=0;i<2;i++){
       // s[i].topper(s[i].m);
        //}

        break;
    case 5:
     for(int i=0;i<2;i++){
        s[i].fail(s[i].m);
        }
    break;
    case 6:{
        int i,j,man;
        int a[i],n;
        for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				man=a[i];
				a[i]=a[j];
				a[j]=man;
			}
		}
	}
	cout<<"ascending "<<endl;
	for(i=0;i<n;i++){
	cout<<" "<<a[i]<<endl;;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]>a[j]){
				man=a[i];
				a[i]=a[j];
				a[j]=man;
			}
		}
	}
	cout<<" descending"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<a[i]<<endl;
}
    break;}
    case 7:
    s[2].search();
    int rno;
    if (rno=1){
       s[1].show_data();
    }
    else if(rno=2){
        s[2].show_data();
    }
    else
    cout<<"Enter a correct roll no.";
}
}
