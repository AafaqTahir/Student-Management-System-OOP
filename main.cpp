#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
enum extraCurricularSkill {SocietyMember, Sportsman, InternetGeek, None};
class Student
{

private:

    string ID;
    float  GPA;
    int    Semester;
    string DOB;
    string name,Gender,Department;
    extraCurricularSkill skill;


public:
    void printSKillSMenu()
    {
        cout << "0-  Society Member." << endl;
        cout << "1-  Sports Man." << endl;
        cout << "2-  Internet Geek." << endl;
        cout << "3-  None." << endl;

    }
    void setSKillSet(int sk)
    {
        if(sk < 4)
            skill = extraCurricularSkill(sk);
        else
            skill = None;
    }
    void printSkillSet()
    {
        switch(skill)
        {
        case 0:
            cout << "Society Member"<< endl;
            break;
        case 1:
            cout << "sportsman"<< endl;
            break;
        case 2:
            cout << "Internet Geek"<< endl;
            break;
        case 3:
            cout << "None"<< endl;
            break;

        }
    }

    void setID(string id)
    {

        ID=id;
    }
    void setGPA(float gpa)
    {
        if(GPA<0.0)
        {

            cout<<"Invalid input"<<endl;
        }
        else
        {
            GPA=gpa;
        }

    }
    void setname(string n)
    {

        name=n;
    }
    void setDOB(string dob)
    {

        DOB=dob;

    }
    void setGender(string gender)
    {

        Gender=gender;

    }
    void setSemester(int semester)
    {

        if(Semester<0)
        {

            cout<<"Invalid input"<<endl;

        }
        else
        {

            Semester=semester;
        }

    }
    void setDepartment(string department)
    {

        Department=department;
    }
    string getID()
    {
        return ID;
    }
    float getGPA()
    {
        return GPA;
    }
    string getname()
    {
        return name;
    }
    string getDOB()
    {

        return DOB;
    }
    int getSemester()
    {

        return Semester;
    }
    string getDepartment()
    {

        return Department;
    }
    string getGender()
    {

        return Gender;
    }
    void input_details()
    {
        cin.ignore();
        cout<<"\n\n Enter ID =>";
        getline(cin,ID);
        setID(ID);

        cout<<"\n";
        cout<<"\n\n Enter First Name =>";
        getline(cin,name);
        setname(name);

        cout<<"\n";
        cout<<"\n\n Enter Gender =>";
        getline(cin,Gender);
        setGender(Gender);

        cout<<"\n";
        cout<<"\n\n Enter Date Of Birth =>";
        getline(cin,DOB);
        setDOB(DOB);

        cout<<"\n";
        cout<<"\n\n Enter Semester=>";
        cin >> Semester;
        setSemester(Semester);
        cin.ignore();

        cout<<"\n";
        cout<<"\n\n Enter Department =>";
        getline(cin,Department);
        setDepartment(Department);

        cout<<"\n";
        cout<<"\n\n Enter GPA =>";
        cin >> GPA;
        setGPA(GPA);
        cout<<"\n";

        printSKillSMenu();
        cout << "What is your skill .. ?? " ;
        int choice = 0;
        cin >> choice;
        setSKillSet(choice);
        cout<<endl;
        cout<<"\t\t****SUCCESSFULLY INSERTED****";
        cout<<endl;
    }
    void create()
    {
        cout<<"\n\n===========> Insert Information <===========\n\n";
        input_details();
    }
    void display()
    {
        if(getID() == "----")
            return;
        cout<< getID()<<setw(10)<<getname()<<setw(8)<<getSemester()<<setw(11)<<getGPA()<<setw(11)<<getDOB()<<setw(7)<<getGender()<<setw(9)<<getDepartment()<<"       ";
        printSkillSet();
        cout << endl;

    }
    bool isNerd()
    {
        if(GPA >= 3.5 && (skill == InternetGeek || skill == None))
            return true;
        return false;
    }
    bool isVibrant()
    {
        if ((GPA >= 3.0 && GPA < 3.5) &&  skill != None)
            return true;
        return false;
    }
    bool isDumb()
    {
        if (GPA < 2.0 && skill == None)
            return true;
        return false;
    }
    void update()
    {
        cout << "1-Update ID" << endl;
        cout << "2-Update Name" << endl;
        cout << "3-Update Semester" << endl;
        cout << "4-Update Department" << endl;
        cout << "5-Update GPA" << endl;
        cout<< " \t\t -Choose Option-"<<endl;

    }

//void checkifNerd(){

//}
};
void load_Data(Student * s)
{
    s[0].setID("F2017266194");
    s[0].setGPA(2.9);
    s[0].setname("AZAN");
    s[0].setGender("Male");
    s[0].setDOB("30-8-1998");
    s[0].setSemester(5);
    s[0].setDepartment("CS");
    s[0].setSKillSet(0);

    s[1].setID("F2017266296");
    s[1].setGPA(3.5);
    s[1].setname("Bilal");
    s[1].setGender("Male");
    s[1].setDOB("20-9-1998");
    s[1].setSemester(5);
    s[1].setDepartment("CS");
    s[1].setSKillSet(3);

    s[2].setID("F2017266195");
    s[2].setGPA(1.9);
    s[2].setname("AHMED");
    s[2].setGender("Male");
    s[2].setDOB("23-5-1998");
    s[2].setSemester(5);
    s[2].setDepartment("CS");
    s[2].setSKillSet(3);

    s[3].setID("F2017266193");
    s[3].setGPA(3.0);
    s[3].setname("AFAQ");
    s[3].setGender("Male");
    s[3].setDOB("3-2-1998");
    s[3].setSemester(5);
    s[3].setDepartment("CS");
    s[3].setSKillSet(3);

    s[4].setID("F2017266184");
    s[4].setGPA(3.2);
    s[4].setname("FAIZAN");
    s[4].setGender("Male");
    s[4].setDOB("7-6-1998");
    s[4].setSemester(5);
    s[4].setDepartment("CS");
    s[4].setSKillSet(2);
}
void printMenu()
{

    cout<<"\n\n\t ****** Choose Operation You Want To Perform ******\n\n";
    cout<<"\n\n\t\t 1-> Create Student.";
    cout<<"\n\n\t\t 2-> Display Student.";
    cout<<"\n\n\t\t 3-> Update Student.";
    cout<<"\n\n\t\t 4-> Search Duplicate.";
    cout<<"\n\n\t\t 5-> Search Student.";
    cout<<"\n\n\t\t 6-> Delete Student.";
    cout<<"\n\n\t\t 7-> Catogrize Student.";
    cout<<"\n\n\t\t 8-> Display Nerd Students.";
    cout<<"\n\n\t\t 9-> Display Vibrant Students.";
    cout<<"\n\n\t\t 10-> Display Dumb Students.";
    cout<<"\n\n\t\t 11-> Exit:";
    cout<<"\n\n Enter your choice=>";
}
int main()
{
    Student *s = new Student[10];
    load_Data(s);
    Student *nerdStudents = new Student[10];
    Student *dumbStudents = new Student[10];
    Student *vibrantStudents = new Student[10];
    int numberOfNerdStudent = 0;
    int numberOfVibrantStudents = 0;
    int numberOfDumbStudents = 0;
    int j = 5;
    int ch;
    while(ch < 11)
    {
        printMenu();
        int i;

        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            s[j].create();
            j++;
        }
        break;
        case 2:
        {
            cout<<"\t University of Management and Technology "<<endl;
            cout<<"\n_____________________________________________________________________________"<<endl;
            cout<<"ID"<<"             "<<"Name"<<"     "<<"Semester"<<"    "<<"GPA"<<"     "<<"DOB"<<"       "<<"Gender"<<"    "<<"Department"<< "   "<<"Extra Skills"<< endl;
            for(int i = 0; i < j; i++)
            {
                s[i].display();

            }
        }
        break;
        case 3:
        {
            string updateID;
            bool flag = true;
            cout<< "Enter ID of Student you want to update :  ";
            cin>>updateID;
            cout<<endl;
            for(int i = 0; i < j; i++)
            {
                if(updateID == s[i].getID())
                {
                    s[i].update();
                    int option = 0;
                    cout << "Enter Option :" << endl;
                    cin >> option;
                    switch(option)
                    {
                    case 1:
                    {
                        string ID;
                        cout << "Enter ID: " << endl;
                        cin >> ID;
                        s[i].setID(ID);
                        cout<<"****ID Successfully updated****";
                        break;
                    }
                    case 2:
                    {
                        string name;
                        cout << "Enter Name: " << endl;
                        cin >> name;
                        s[i].setname(name);
                        cout<<"****Name Successfully updated****";
                        break;
                    }
                    case 3:
                    {
                        int Semester;
                        cout << "Enter Semester: " << endl;
                        cin >> Semester;
                        s[i].setSemester(Semester);
                        cout<<"****Semester Successfully updated****";
                        break;
                    }
                    case 4:
                    {
                        string Department;
                        cout << "Enter Department: " << endl;
                        cin >> Department;
                        s[i].setDepartment(Department);
                        cout<<"****Department Successfully  updated****";
                        break;
                    }
                    case 5:
                    {
                        float GPA;
                        cout << "Enter GPA: " << endl;
                        cin >> GPA;
                        s[i].setGPA(GPA);
                        cout<<"****GPA Successfully updated****";
                        break;
                    }

                    }
                    break;
                }
            }
        }
        break;
        case 4:
        {
            for(int i = 0; i < j; i++)
            {
                for(int z = i+1; z < j; z++)
                {

                    if(s[i].getID() == s[z].getID())
                    {
                        s[z].setID("----");
                        s[z].setID("----");
                        s[z].setname("----");
                        s[z].setSemester(0);
                        s[z].setDepartment("----");
                        s[z].setGender("----");
                        s[z].setDOB("----");
                        s[z].setGPA(0.0);
                        s[z].setSKillSet(3);
                    }
                }
            }

        }
        break;
        case 5:
        {
            string searchID;
            cout<<"Enter ID of a Student You want to Search"<<endl;
            cin>>searchID;
            cout<<endl;
            cout<<"ID"<<"             "<<"Name"<<"     "<<"Semester"<<"    "<<"GPA"<<"     "<<"DOB"<<"       "<<"Gender"<<"    "<<"Department"<< "   "<<"Extra Skills"<< endl;
            for(int i = 0; i < j; i++)
            {
                if(searchID == s[i].getID())
                {

                    s[i].display();
                    break;
                }
                else
                {

                    cout<<"";
                }
            }
        }
        break;
        case 6:
        {
            string deleteID;
            cout<<"Enter ID of a Student You Want To Delete"<<endl;
            cin>>deleteID;
            cout<<endl;
            char yesorno;
            cout<<"ID"<<"             "<<"Name"<<"     "<<"Semester"<<"    "<<"GPA"<<"     "<<"DOB"<<"       "<<"Gender"<<"    "<<"Department"<< "   "<<"Extra Skills"<< endl;

            for(int i = 0; i < j; i++)
            {
                if(deleteID==s[i].getID())
                {
                    s[i].display();
                    cout<<"Do you want to delete:"<<endl;
                    cin>>yesorno;
                    if(yesorno=='y')
                    {

                        for(int z=j+1; z<j; z++)
                        {

                            s[i-z]=s[z];
                        }
                        j--;
                        cout<<"***Deleted***";
                    }
                }

            }
        }
        break;
        case 7:
        {
            for(int i = 0; i < j; i++)
            {
                if(s[i].isNerd())
                {
                    nerdStudents[numberOfNerdStudent] = s[i];
                    numberOfNerdStudent++;
                }
                else if(s[i].isVibrant())
                {
                    vibrantStudents[numberOfVibrantStudents] = s[i];
                    numberOfVibrantStudents++;
                }
                else if(s[i].isDumb())
                {
                    dumbStudents[numberOfDumbStudents] = s[i];
                    dumbStudents[numberOfDumbStudents].display();
                    numberOfDumbStudents++;
                }
            }
        }
        break;
        case 8:
        {
            cout << "List of Nerd Students." << endl;
            for(int i = 0; i < numberOfNerdStudent; i++)
            {
                nerdStudents[i].display();
            }
        }
        break;
        case 9:
        {
            cout << "List of vibrantStudents" << endl;
            for(int i = 0; i < numberOfVibrantStudents; i++)
            {
                vibrantStudents[i].display();
            }
        }
        break;
        case 10:
        {
            cout << "List of Dumb Students" << numberOfDumbStudents <<  endl;
            for(int i = 0; i < numberOfDumbStudents; i++)
            {
                dumbStudents[i].display();
            }
        }
        break;
        }


    }
    delete []s;
    delete []nerdStudents;
    delete []dumbStudents;
    delete []vibrantStudents;
}
