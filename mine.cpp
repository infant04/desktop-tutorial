//Multiple inheritance is used in the project
#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;
class main
{
protected:
    string username;//to take username
    string password; //to take password
public:

    void get();
};
void main::get()
{
    cout<<"ENTER THE USERNAME AND PASSWORD"<<endl;
    string phrase = "ENTER THE USERNAME AND PASSWORD ";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    cout<<"Username : ";
    cin>>username;
    cout<<"Password : ";
    cin>>password;
}
class tim:public main
{
public:
    void greetings();
    void datetime()
    {
        time_t now = time(0);
        char *dt = ctime(&now);
        cout<<"The date and time is "<<endl<<dt<<endl;
    }
};
class com:public tim
{
protected:
    string command;
public:

    int check();
    void wrong();
};
class cop:public com
{

public:
    void getdata();
    void a();
};
void cop::a()
{
    int ch;
    char x[100];
    cout<<"1-> search a url\n2->search a words\n3->exit";
    string phrase = "one is for searching url  two is for searching words in the google  three is for exit";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    while(1)
    {

        cout<<"\nEnter the your choice : ";
        string phrase = "Enter the your choice";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter the url to search : ";
            cin>>x;
            cout<<"opening google search"<<endl;
            string phrase = "opening google search";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(NULL,"open",x,NULL,NULL,SW_SHOWNORMAL);
        }
        else if(ch==2)
        {
            cout<<"Enter the word to search : ";
            cin>>x;
            cout<<"opening google search"<<endl;
            string phrase = "opening google search";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            char url[100]="https://www.google.com/search?q=";
            strcat(url,x);
            ShellExecute(NULL,"open",url,NULL,NULL,SW_SHOWNORMAL);
        }
        else if(ch==3)
        {
            cop::getdata();
        }
        else
        {
            cout<<"You choose wrong option ";
            string phrase = "You choose wrong option";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }

    }
}
void tim::greetings()
{
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12)
    {
        cout<< "Good Morning master"<<endl;
        string phrase = "Good Morning master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout<< "Good Afternoon master"<<endl;
        string phrase = "Good Afternoon master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24)
    {
        cout<< "Good Evening master"<<endl;
        string phrase = "Good Evening master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

}
void cop::getdata()
{
    STARTUPINFO startInfo = {0};
    PROCESS_INFORMATION processInfo = {0};
    while(1)
    {
        cout<<endl<<"How can i u help mr."<<username<<endl<<endl;
        string phrase = "How can i u help mister"+username;
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        cout<<">> ";
        cin>>command;
        cout<<endl;
        if(command=="hello" || command=="hi")
        {
            cout<<"Hello "<<username<<endl;
            string phrase = "hello "+username;
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(command=="open_google")
        {
            cout<<"opening google"<<endl;
            string phrase = "opening google";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.google.com");
        }
        else if(command=="open_chrome")
        {
            cout<<"opening google"<<endl;
            string phrase = "opening google";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }
        else if(command=="open_youtube")
        {
            cout<<"opening YouTube"<<endl;
            string phrase = "opening youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.google.com");
        }
        else if(command=="open_notepad")
        {
            cout<<"opening notepad"<<endl;
            string phrase = "opening notepad";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }


        else if(command=="what_is_the_time_right_now")
        {

            datetime();
        }
        else if(command=="start_search")
        {
            cout<<"Start searching mr."<<username<<endl;
            string phrase = "Start searching mister"+username;
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            cop::a();
        }
        else if(command=="tell_me_your_self")
        {
            cout<<"I'm a personal assistant that was created by Karthikeyan, Hari Haran, and Infant Raj. I can be used to search a phone app and to search google."<<endl;
            string phrase = "I'm a personal assistant that was created by Karthikeyan, Hari Haran, and Infant Raj. I can be used to search a phone app and to search google.";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(command=="open_oops_drive")
        {
            cout<<"opening drive"<<endl;
            string phrase = "opening drive";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("https://drive.google.com/drive/folders/1-SFV7am4WHfMwZOXiKgvqSydVtMrvqmh");
        }
        else if(command=="open_youtube")
        {
            cout<<"opening YouTube"<<endl;
            string phrase = "opening youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com");
        }
        else if(command=="open_onlinegdb")
        {
            cout<<"opening YouTube"<<endl;
            string phrase = "opening youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.onlinegdb.com/online_c_compiler");
        }
        else if(command=="open_files")
        {
            cout<<"opening files"<<endl;
            string phrase = "opening files";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Windows\\explorer.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);

        }
        else if(command=="who_are_you" || command=="who_is_speaking")
        {
            cout<<"I'm a your personal assistant and I'm a your friend "<<endl;
            string phrase = "I'm a your personal assistant and I'm a your friend";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(command=="open_vtop")
        {
            cout<<"opening vtop"<<endl;
            string phrase = "opening vtop";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://vtop.ac.in");
        }
        else if(command=="open_word")
        {
            cout<<"opening Microsoft Word"<<endl;
            string phrase = "opening Microsoft Word";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }
        else if(command=="open_excel")
        {
            cout<<"opening Microsoft excel"<<endl;
            string phrase = "opening Microsoft excel";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }
        else if(command=="open_book")
        {
            cout<<"opening book"<<endl;
            string phrase = "opening book";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(NULL,"open","C:\\Users\\Infant Raj\\Downloads\\BalagurusamyBook (1).pdf",NULL,NULL,SW_SHOWNORMAL);
        }
         else if(command=="open_photo")
        {
            cout<<"opening photo"<<endl;
            string phrase = "opening photo";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(NULL,"open","D:\\visual studio\\web developed\\personal assitent\\in.jpg",NULL,NULL,SW_SHOWNORMAL);
        }
         else if(command=="play_music")
        {
            cout<<"opening music"<<endl;
            string phrase = "opening music";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(NULL,"open","C:\\Users\\Infant Raj\\Downloads\\WhatsApp Audio 2022-11-13 at 4.54.36 PM.mpeg",NULL,NULL,SW_SHOWNORMAL);
        }
        else if(command=="open_vscode")
        {
            cout<<"opening visual studio code"<<endl;
            string phrase = "opening visual studio code";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Users\\Infant Raj\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }
        else if(command=="open_powerpoint")
        {
            cout<<"opening Power Point"<<endl;
            string phrase = "opening Power Point";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }
        else if(command=="open_codeblocks")
        {
            cout<<"opening Code Blocks"<<endl;
            string phrase = "opening code blocks";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\CodeBlocks\\codeblocks.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        }
        else if(command=="close_chrome")
        {
            cout<<"closing chrome browser"<<endl;
            string phrase = "closing chrome browser";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("taskkill /f /im chrome.exe");
        }

        else if(command=="close_vscode")
        {
            cout<<"closing visual studio code"<<endl;
            string phrase = "closing visual studio code";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("taskkill /f /im code.exe");
        }
        else if(command=="close_notepad")
        {
            cout<<"closing note pad"<<endl;
            string phrase = "closing note pad";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("taskkill /f /im notepad.exe");
        }
        else if(command=="close_word")
        {
            cout<<"closing Microsoft Word"<<endl;
            string phrase = "closing Microsoft Word";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("taskkill /f /im WINWORD.EXE");
        }
        else if(command=="close_powerpoint")
        {
            cout<<"closing Microsoft Power Point"<<endl;
            string phrase = "closing Microsoft Power Point";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("taskkill /f /im POWERPNT.EXE");
        }
        else if(command=="close_excel")
        {
            cout<<"closing Microsoft Excel"<<endl;
            string phrase = "closing Microsoft Excel";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("taskkill /f /im EXCEL.EXE");
        }
        else if(command=="bye" || command=="exit")
        {
            cout<<"Thank you mr."<<username<<" see you back later"<<endl;
            string phrase = "Thank you mister "+username+" see you back later";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            exit(0);
        }

        else
        {
            cout<<"Sorry could not understand your command please try again !!!"<<endl;
            string phrase = "Sorry could not understand your command please try again";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }

    }
}
int com::check()
{
    system("cls");
    cout<<"-----------------------------------------------  PERSONAL ASSISSTANT ---------------------------------------------------"<<endl<<endl;
    main::get();
    if((username=="infant"&&password=="21bca0104")||(username=="karthi"&&password=="21bca0089")||(username=="hari"&&password=="21bca0100"))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void com::wrong()
{
    system("cls");
    cout << "Incorrect username and Password" << endl;
    string phrase = "Incorrect username and Password please try again!";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    com::check();
}
int main()
{
    cop c1;
    cout<<"Name:"<<endl<<"->Karathikeyan.G-21BCA0089"<<endl<<"->Hari Haran.G-21BCA0100"<<endl<<"->Infant Raj.S-21BCA0104"<<endl;
    do
    {
        if(c1.check())
        {
            c1.greetings();
            c1.getdata();
            exit(0);
        }
        c1.wrong();
    }
    while(1);
}
/**/
