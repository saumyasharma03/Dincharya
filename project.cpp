#include<iostream>
#include<fstream>
#include<iomanip>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <vector>
#include <string>
#include <cmath>
#include <limits>
#include <queue>
#include<stdlib.h>

using namespace std;

void rating()
{
    int r;
    int i;
    int j;

    cout<<"PLEASE ENTER YOUR RATING THIS WILL BE VALUABLE TO US"<<endl<<endl;
    cout<<"5 MEANS ABSOLUTELY BEST 1 MEANS WORST:";
    cin>>r;
    if(r==1)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=5; j++)
            {
                if((i==2 && j==2) ||(i==3 && j==1)|| (j==3) || (i==7))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;

        }

        cout<<"THANK YOU FOR RATING US,YOU GAVE US 1 STARS"<<endl<<endl;
        cout<<"WE WILL MAKE SURE TO CHANGE YOUR EXPERIENCE NEXT TIME"<<endl;

    }

    if(r==2)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=4; j++)
            {
                if((i<=4 && j==4) ||(i<=7 && i>=4 && j==1)|| (i==1) || (i==4) || (i==7))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;

        }

        cout<<"THANK YOU FOR RATING US,YOU GAVE US 2 STARS"<<endl<<endl;
        cout<<"WE WILL MAKE SURE TO GIVE YOU BETTER EXPERIENCE NEXT TIME"<<endl;

    }

    if(r==3)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=4; j++)
            {
                if((j==4) || (i==1) || (i==4) || (i==7))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;

        }

        cout<<"THANK YOU FOR RATING US,YOU GAVE US 3 STARS"<<endl<<endl;
        cout<<"WE WILL MAKE SURE TO IMPROVE YOUR EXPERIENCE FURTHER NEXT TIME"<<endl;

    }

    if(r==4)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=4; j++)
            {
                if((j==4) || (i==4) || (j==1) && (i<=4) )
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;

        }

        cout<<"THANK YOU SO MUCH FOR RATING US,YOU GAVE US 4 STARS"<<endl<<endl;
        cout<<"WE WILL MAKE SURE TO IMPROVE YOUR EXPERIENCE FURTHER NEXT TIME"<<endl;

    }

    if(r==5)
    {
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=5; j++)
            {
                if((i==1) || (i==4) || (i==7) || (i<=4) && (j==1) || (i>=4) && (i<=7) && (j==5))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        cout<<endl;

        }

        cout<<"THANK YOU SO MUCH FOR RATING US,YOU GAVE US 5 STARS"<<endl;
        cout<<"WE WILL MAKE SURE TO IMPROVE YOUR EXPERIENCE FURTHER NEXT TIME"<<endl;

    }

    cout<<"THANK YOU FOR BEING WITH US AND BELIEVING US"<<endl<<endl;
    cout<<"MAY YOUR EXPERIENCE BE GREAT"<<endl;
}

void captcha()
{

    char str2[100];
    char str1[10] ="yes";
    int l1;
    int l2;
    int i,j,k;

    cout<<"TO ENTER WE WILL ASK SOME QUESTIONS TO VERIFY YOU ARE HUMAN OR NOT\n"<<endl;
    cout<<"WRITE 'yes' TO CONTINUE 'no' TO DISCONTINUE\n"<<endl;

    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);

    if(l1!=l2)
    {
        cout<<"YOU DISCONTINUED CAPTCHA VERIFICATION FAILED!!!\n";
        return;
    }
    for(i=0; str1[i]; i++)
    {
        if(str1[i]!=str2[i])
        {
            cout<<"YOU DISCONTINUED CAPTCHA VERIFICATION FAILED!!!";
            exit(0);
        }

    }
    cout<<"ENTER THE NAME OF THE BELOW SHAPE?\n";

    for(i=1; i<=5; i++)
    {
        k=1;
    for(j=1; j<=9; j++)
    {

        if(j>=6-i && j<=4+i && k)
        {
        cout<<"*";
        k=0;
        }
        else
        {
        cout<<" ";
        k=1;
        }

    }
    cout<<"\n";
    }

    char str4[]="triangle";
    char str5[10];
    gets(str5);

    int l4,l5;

    l4=strlen(str4);
    l5=strlen(str5);
    if(l4!=l5)
    {
        cout<<"CAPTCHA VERIFICATION FAILED\n";
        cout<<"YOU ENTERED THE WRONG SHAPE\n";
        return;
    }

    for(i=0; str4[i]; i++)
    {
        if(str4[i]!=str5[i])
        {
        cout<<"CAPTCHA VERIFICATION FAILED\n";
        cout<<"YOU ENTERED THE WRONG SHAPE\n";
        return;
        }
    }

    cout<<"YOU ENTERED THE RIGHT SHAPE\n\n";

    cout<<"NOW WHAT IS THE SHAPE BELOW?\n";

    for(i=1; i<=9; i++)
    {

        if(i<=5)
        {
            k++;
        }
        else
        {
            k--;
        }
    for(j=1; j<=9; j++)
    {
        if((j==6-k || j==4+k)|| (j==5 || i==5))
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<"\n";

    }

    int l6,l7;
    char str6[]="diamond";
    char str7[10];
    gets(str7);
    l6=strlen(str6);
    l7=strlen(str7);
    if(l6!=l7)
    {
        cout<<"CAPTCHA VERIFICATION FAILED\n";
        cout<<"YOU ENTER THE WRONG SHAPE\n";
        return;
    }
     for(i=0; str6[i]; i++)
    {
        if(str6[i]!=str7[i])
        {
        cout<<"CAPTCHA VERIFICATION FAILED\n";
        cout<<"YOU ENTERED THE WRONG SHAPE\n";
        return;
        }
    }

    cout<<"YOU ENTERED THE RIGHT SHAPE\n\n";

    cout<<"ENTER THE BELOW SHAPE\n";

    for(i=1; i<=5; i++)
    {
    for(j=1; j<=9; j++)
    {
        if(j>=6-i && j<=4+i)
        cout<<"*";
        else
       cout<<" ";
    }
    cout<<"\n";
    }

    for(i=1; i<=3; i++)
        {
            for(j=1; j<=9; j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
    {
        if(j>=i && j<=10-i)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<"\n";
    }


    int l8,l9;
    char str8[]="hexagon";
    char str9[10];
    gets(str9);
    l8=strlen(str8);
    l9=strlen(str9);
    if(l8!=l9)
    {
        cout<<"CAPTCHA VERIFICATION FAILED\n";
        cout<<"YOU ENTERED THE WRONG SHAPE\n";
        return;
    }

     for(i=0; str8[i]; i++)
    {
        if(str8[i]!=str9[i])
        {
        cout<<"CAPTCHA VERIFICATION FAILED\n";
        cout<<"YOU ENTERED THE WRONG SHAPE\n";
        return;
        }
    }

    cout<<"YOU ENTERED THE RIGHT SHAPE\n\n";
    cout<<"YOU HAVE SUCCESFULLY PASSED OUR CAPTCHA VERIFICATION\n ";
    cout<<"NOW YOU HAVE ENTERED OUR CAFE SERIVES\n";

}

//For converting distance from degrees to radian -->
double to_radians(const double& degree){
    return ((M_PI)/180)*degree;
}

//For calculating distance using longitude and latitude -->
double distance(double lat1, double long1, double lat2, double long2){
    // Convert each one of them from degree to radian -->
    lat1 = to_radians(lat1);
    long1 = to_radians(long1);
    lat2 = to_radians(lat2);
    long2 = to_radians(long2);

    // Haversine formula to calculate distance using latitude and longitude -->
    double long_diff = long2-long1;
    double lat_diff =  lat2-lat1;

    double ans = pow(sin(lat_diff/2),2) + cos(lat1)*cos(lat2)*pow(sin(long_diff/2),2);
    ans = 2 * asin(sqrt(ans));

    // Radius of earth = 6371 km
    return ans*6371;
}

class rent;
void gotoXY(int X, int Y)
{
    COORD coordinates;
    coordinates.X = X;
    coordinates.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void border(int xLenS = 2, int yLenS = 2,int xLenE = 76, int yLenE = 22 )
{   char c1=201;
    char c2=200;
    char c3= 205;
    char c4= 187;
    char c5= 188;
	system("cls");
	gotoXY(xLenS,yLenS);
	cout<<c1;

	gotoXY(xLenS,yLenE);
	cout<<c2;

    for(int i=xLenS+1;i<=xLenE-1;i++) //Top and Bottom Border line
    {
        gotoXY(i,yLenS);
        cout<<c3;
		//puts(style);
        gotoXY(i,yLenE);
        //puts(style);
        cout<<c3;

    }
    gotoXY(xLenE,yLenS);cout<<c4;
    gotoXY(xLenE,yLenE);cout<<c5;
    for(int i=yLenS+1;i<=yLenE-1;i++)         //Left and Right Border Line
    {
        gotoXY(xLenS, i);
        cout<<c4;
		//puts(style);
        gotoXY(xLenE, i);
        cout<<c5;
		//puts(style);
    }
    cout<<endl;
}
void loginFrame(int xLenS = 18, int yLenS = 8, int xLenE = 70, int yLenE = 25)
{
    border(xLenS,yLenS,xLenE,yLenE);
}
void intro()
{
	gotoXY(24,4);
	cout<<("WELCOME TO DINCHARYA");
	gotoXY(24,6);
	cout<<"SUBMITTED BY:";
	gotoXY(24,8);
	cout<<"SAUMYA SHARMA\t9922103195";
	gotoXY(24,10);
	cout<<"AMAN TYAGI\t 9922103176";
	gotoXY(24,12);
	// cout<<"AKSHAT BHARDWAJ\t 9922103177";
	// gotoXY(24,14);
    cout<<("Press Any key to continue...");
    getch();
}

class customer  // customer class
{
	public:
	    int id;
	    int age;
	    int contact;
    string gen;
    string pas;
    string uppas;
	string customername=" ";
  //  char data;
    int login();
    // variables defined in this class in public mode.
};
class profile: public customer{
public:
  //  int op;
   // void write_user();
   // void update_user();
   // void displayprof();
    //void showdata();
    void registerr(){

    cout<<endl;
    gotoXY(0,3);
    cout<<"____________________________________________________________________________"<<endl;
    gotoXY(29,5);
    cout<<"REGISTRATION PAGE"<<endl;
    gotoXY(0,7);
    cout<<"____________________________________________________________________________"<<endl;
    gotoXY(20,10);
    ofstream file1("Profile.txt", ofstream::app);
    cout << "Please Enter your ID: ";
    cin>>id;
    file1<<id<<" ";
    fflush(stdin);
    gotoXY(20,12);
    cout << "Please Enter your Name: "; //taking data from the user
    cin >> customername;
    file1<<customername<<" ";
    cout<<endl;
    gotoXY(20,13);
    fflush(stdin);
    cout<<"Please enter your age: ";
    cin>>age;
    file1<<age<<" ";
    gotoXY(20,14);
    cout << "Please Enter your gender (M/F/O): "; //taking data from the user
    cin >> gen;
    file1<<gen<<" ";
    gotoXY(20,15);
    cout << "Please Enter your contact info: ";
    cin >> contact;
    file1<<contact<<" ";
    file1.close();
    setpass();
    if(pas!=uppas){

        cout<<"\t\t Entered password should be same as confirmed password!"<<endl;
        cout<<"\t\t  TRY AGAIN!"<<endl;
        setpass();}
    gotoXY(20,22);
    cout<<"\t\t REGISTERED SUCCESSFULLY!"<<endl;
    gotoXY(20,23);
    cout<<"\t\t  LOGIN TO YOUR ACCOUNT"<<endl;
    system("PAUSE");
    system("CLS");
    }
    void login(){
    string pass ="";
   char ch;
   gotoXY(20,10);
   cout<<"DINCHARYA \n\n";
   gotoXY(20,12);
   cout<<"------------------------------";
   gotoXY(20,14);
   cout<<"LOGIN \n";
   gotoXY(20,15);
   cout<<"-----------------------------\n\n";
   gotoXY(20,17);
   cout << "Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == pas){
      gotoXY(20,19);
      cout << "Access Granted! \n";
      system("PAUSE");
      system ("CLS");

   }
   else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
     login();

   }
    }
    void setpass(){
        char ch2;
    ofstream file1("Profile.txt", ofstream::app);
    cout<<endl;
    gotoXY(20,16);
    cout << "Please Enter your password: ";
    ch2 = _getch();
     //taking data from the user
    while(ch2 != 13){//character 13 is enter
      pas.push_back(ch2);
      cout << '*';
      ch2 = _getch();
   }
   file1<<pas<<"\n";
    cout<<endl;
gotoXY(20,17);
    cout << "Please Confirm your password: ";
    ch2 = _getch(); //taking data from the user
    while(ch2 != 13){//character 13 is enter
      uppas.push_back(ch2);
      cout << '*';
      ch2 = _getch();
   }
    }
};
class Event
{
public:
    string day;
    int time;
    string name;
    string Location;
    string LocationCategory;
    Event(string s, string n, int t, string l, char lc)
    {
        name = n;
        day = s;
        time = t;
        Location = l;
        LocationCategory = lc;
    }
    void addEventtofile(Event a);
};

void addEventtofile(Event a)
{
    std::ofstream locationfile("locations.txt", ofstream::app);
    if (!locationfile)
    {
        cerr << "Error opening the file!" << endl;
        return;
    }

    // Write data to the file
    locationfile << "Location: " << a.Location << endl;
    locationfile << "Location Category: " << a.LocationCategory << endl;
    locationfile << "Event Name: " << a.name << endl;
    locationfile << "Event Day: " << a.day << endl;
    locationfile << "Event Timings: " << a.time << endl;

    // Close the file
    locationfile.close();

    cout << "Data has been written to the file." << endl;
}

// Node class representing a location
class Location
{
public:
    char category;
    string name;
    double x, y;   // Coordinates of the location
    float ratings; // Ratings of each place

    // Constructor to initialize the location
    Location(char cat, const string &n, double xCoord, double yCoord, float rate)
    {
        category = cat;
        name = n;
        x = xCoord;
        y = yCoord;
        ratings = rate;
    }
    Location() {}
};
// Graph class representing the collection of locations and edges
class Graph
{
public:
    vector<Location> locations;    // Vector to store locations
    vector<vector<int>> adjacency; // Adjacency list to store edges

    // Function to add a location to the graph
    void addLocation(char category, const string &name, double x, double y, float rate)
    {
        Location location(category, name, x, y, rate);
        locations.push_back(location);
        // Add an empty vector for the new location in the adjacency list
        adjacency.emplace_back();
    }

    // Function to add an edge between two locations in the graph
    void addEdge(int from, int to)
    {
        adjacency[from].push_back(to);
        adjacency[to].push_back(from);
    }

    // Function to display all locations and edges in the graph
    void displayGraph()
    {
        for (int i = 0; i < locations.size(); ++i)
        {
            cout << "Name: " << locations[i].name << " | Coordinates: (" << locations[i].x << ", " << locations[i].y << ") | Connected Places: ";
            for (int j = 0; j < adjacency[i].size(); ++j)
            {
                int connectedIndex = adjacency[i][j];
                cout << locations[connectedIndex].name;
                if (j < adjacency[i].size() - 1)
                    cout << ", ";
            }
            cout << "|";
            cout << endl;
        }
    }

    // To display all places assocated with a given category
    void displayGraph_Category(char ch)
    {
        int cnt = 1;
        for (int i = 0; i < locations.size(); ++i)
        {
            if (locations[i].category == ch)
            {
                cout << cnt << ".) Name: " << locations[i].name << ", Coordinates: (" << locations[i].x << ", " << locations[i].y << ")";
                cout << "\n";
                cnt++;
            }
        }
    }

    // To find the nearest location of a given category from the source location -->
    pair<Location,double> findNearestLocation(char category){
        double minDistance = numeric_limits<double>::max();
        int nearestIndex = -1;
        // Iterate through locations to find the nearest location of the given category
        for (int i = 1; i < locations.size(); ++i) {
            if (locations[i].category == category) {
                double dist = distance(locations[0].x, locations[0].y, locations[i].x, locations[i].y);
                if (dist < minDistance) {
                    minDistance = dist;
                    nearestIndex = i;
                }
            }
        }
        if(nearestIndex!=-1)
            return {locations[nearestIndex],minDistance};
        else{
            cout<<"No location of category '"<<category<<"' found.\n";
            return {Location(' ', "", 0.0, 0.0,0.0),0.0};
        }
    }

    // To find the highest rated location of a given category from the source location -->
    pair<Location,double> findBestLocation(char category){
        int max_rating = 0;
        double dist;
        Location ans;
        // Iterate through locations to find the best location of the given category
        for(int i = 1; i < locations.size(); ++i){
            if(locations[i].category==category){
                if(locations[i].ratings>max_rating){
                    ans = locations[i];
                    dist = distance(locations[0].x, locations[0].y, locations[i].x, locations[i].y);
                }

                // If both have same rating then, we will decide on the basis of distance --> 
                else if(locations[i].ratings==max_rating){
                    double new_distance = distance(locations[0].x, locations[0].y, locations[i].x, locations[i].y);
                    double old_distance = dist;
                    if(new_distance<old_distance){
                        ans = locations[i];
                        dist = new_distance;
                    }
                }
            }
        }
        return {ans,dist};
    }

    // For traversing the paths to finally reach the destination starting from source -->
    void dfs(vector<int> &path_visited, vector<int> &visited, int i, int dest, int n)
    {
        visited[i] = 1;
        path_visited[i] = 1;
        if (i != dest)
        {
            for (auto j : adjacency[i])
            {
                if (!visited[j])
                    dfs(path_visited, visited, j, dest, n);
            }
        }
        else
        {
            int cnt = 1;
            for (int j = 0; j < n; j++)
            {
                if (path_visited[j] == 1 && cnt != 1)
                {
                    cout << " -> " << locations[j].name;
                }
                else if (path_visited[j] == 1 && cnt == 1)
                {
                    cout << locations[j].name;
                }
                cnt++;
            }
        }
        path_visited[i] = 0;
    }

    // For finding the path from source location to destination -->
    void path(int src, int dest)
    {
        int n = locations.size();
        vector<int> visited(n, 0);
        vector<int> path_visited(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && i == src)
            {
                dfs(path_visited, visited, i, dest, n);
            }
        }
    }

    int search_in_graph(Location nearest)
    {
        for (int i = 0; i < locations.size(); i++)
        {
            if (nearest.x == locations[i].x && nearest.y == locations[i].y)
                return i;
        }
        return -1;
    }
};

struct task
{
    string name;
    int hours;
};

task *initialise(string n, int h)
{
    task *t = new task();
    t->name = n;
    t->hours = h;
    return t;
}

struct lnode
{
    string day;
    lnode *next;
    vector<task *> down; // Vector of tasks for each day
};

lnode *newn(const string &d)
{
    lnode *newnode = new lnode();
    newnode->day = d;
    newnode->next = nullptr;
    return newnode;
}

lnode *head = nullptr;
string filename = "sch.txt";

void insertatend(lnode *&head, string d)
{
    lnode *n = newn(d);
    lnode *temp = head;
    if (head == nullptr)
    {
        head = n;
        n->next = nullptr;
    }
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
            
        }
        temp->next = n;
        n->next = nullptr;
    }
}

void insertfinaldata(string date, string taskname, int hours)
{
    ofstream file2("myfile.txt", ofstream::app);
    if (!file2)
    {
        cout << "ERROR OPENING THE FILE!" << endl;
    }
    else
    {
        file2 << date << " " << taskname << " " << hours << endl;
    }
}
void displayfile()
{
    ifstream inputFile("myfile.txt");

    // Check if the file is successfully opened
    if (!inputFile)
    {
        cerr << "Error opening the file!" << endl;
        return;
    }

    // Read and display the contents of the file line by line
    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    // Close the file
    inputFile.close();
}

lnode *loadschedule(lnode *&head, const string &filename)
{
    string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int i = 0; i < 7; i++)
    {
        insertatend(head, week[i]);
    }

    ifstream file("myfile.txt");

    if (file.is_open())
    {
        string day;
        string taskName;
        int hours;
        task *t;
        while (file >> day >> taskName >> hours)
        {
            lnode *currentDay = head;
            while (currentDay != nullptr && currentDay->day != day)
            {
                currentDay = currentDay->next;
            }

            if (currentDay != nullptr)
            {
                t = initialise(taskName, hours);
                currentDay->down.push_back(t);
            }
        }
    }
    return head;
}

vector<task *> availableslots(lnode *head, string d)
{
    while (head != NULL && head->day != d)
        head = head->next;
    return head->down;
    // slots that are available for scheduling the task
    // input the taken slots from the txt file in a set
    // traverse and find the slots that are not found in the given set
}

void addtask(lnode *&head, const string &d, int h)
{
    cout << "Enter task name" << endl;
    string name;
    cin >> name;

    task *t = initialise(name, h);

    lnode *currentDay = head;
    while (currentDay != nullptr && currentDay->day != d)
    {
        currentDay = currentDay->next;
    }

    if (currentDay == nullptr)
    {
        cout << "Invalid day" << endl;
    }
    else
    {
        currentDay->down.push_back(t);
        insertfinaldata(d, t->name, t->hours);
        cout << "Task added successfully!" << endl;
    }
}
void displayfreeslots(lnode *head)
{
    string d;
    cout << "Enter day you need to find availale slots for" << endl;
    cin >> d;
    vector<task *> v;
    v = availableslots(head, d);
    vector<int> hourstaken;
    for (auto i : v)
    {
        hourstaken.push_back(i->hours);
    }
    // std::sort(hourstaken.begin(),hourstaken.end());
    cout << "For" << d << endl
         << "Free Slots are--" << endl;
    auto it = hourstaken.begin();

    for (int i = 0; i < 24; i++)
    {
        if (i != *it)
        {
            cout << i << ":00" << endl;
            it++;
        }
    }
}
void searchtaskbyname(lnode *head, const string &taskName)
{
    cout << "Searching for tasks with name: " << taskName << endl;

    lnode *currentDay = head;
    while (currentDay != nullptr)
    {
        cout << "Tasks on " << currentDay->day << ": ";

        for (task *t : currentDay->down)
        {
            if (t->name == taskName)
            {
                cout << t->name << " at " << t->hours << ":00, ";
            }
        }

        cout << endl;

        currentDay = currentDay->next;
    }
}

void searchtaskbytime(lnode *head, int hours)
{
    cout << "Searching for tasks at time: " << hours << ":00" << endl;

    lnode *currentDay = head;
    while (currentDay != nullptr)
    {
        cout << "Tasks on " << currentDay->day << ": ";

        for (task *t : currentDay->down)
        {
            if (t->hours == hours)
            {
                cout << t->name << ", ";
            }
        }

        cout << endl;

        currentDay = currentDay->next;
    }
}

void displayll(lnode *head)
{
    lnode *temp = head;
    while (temp != NULL)
    {
        cout << temp->day << "--";
        for (auto i : temp->down)
        {
            cout << i->hours << ":00 (" << i->name << ") ||";
        }
        cout << endl;
        temp = temp->next;
    }
}
void dailytask()
{
    lnode *root = NULL;
    string da;
    int ho;
    string d;
    string str;
    int hourss;
    // loadschedule(root, filename);
    // displayll(root);
    // // checkslotandadd(root);

    // addtask(root, da, ho);
    // displayll(root);
    int x1;
    loadschedule(root, filename);
    while (x1 != 6)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*********************************************************************************************************************" << endl;
        cout << "\t\t\t\t\t\tPLAN YOUR WEEK!\n";
        cout << "*********************************************************************************************************************" << endl;
        cout << "Enter the task of your choice" << endl;
        cout << "1. ADD A TASK" << endl;
        cout << "2. VIEW PREVIOUSLY SCHEDULED TASKS" << endl;
        //cout << "3. FIND YOUR FREE SLOT ON A DAY" << endl;
        cout << "3. SEARCH A TASK BY NAME" << endl;
        cout << "4. SEARCH TASKS SCHEDULED ON A SPECIFIED TIME THROUGHOUT THE WEEK" << endl;
        cout << "5. EXIT" << endl;
        fflush(stdin);
        cout << "ENTER HERE: ";
        cin >> x1;
        switch (x1)
        {
        case 1:
            cout << "Enter day and hours" << endl;
            cin >> da >> ho;
            addtask(root, da, ho);
            displayfile();
            fflush(stdin);
            break;
        case 2:
            fflush(stdin);
            displayll(root);
            fflush(stdin);
            break;
        // case 3:
        //     displayfreeslots(root);
        //     fflush(stdin);
        //     break;
        case 3:
            cout << "Enter task by name" << endl;
            cin >> str;
            searchtaskbyname(root, str);
            fflush(stdin);
            break;
        case 4:
            cout << "Enter task by hours" << endl;
            cin >> hourss;
            searchtaskbytime(root, hourss);
            return;
        case 5:
            return;
        }
    }
}
void eventplan()
{
    int h;
    string name = "Travelling plan";
    string day;
    cout << "Enter the day of the event" << endl;
    cin >> day;
    cout << "Enter the time of the event" << endl;
    cin >> h;
    Graph locationGraph; // Graph to store locations and edges

    // Add locations to the graph

    // Noida to Delhi Lane(Blue Line) -->
    locationGraph.addLocation('c', "JIIT 62", 28.62914, 77.37402, 4.1);
    locationGraph.addLocation('d', "Ithum", 28.62710, 77.37239, 4.3);
    locationGraph.addLocation('r', "3rd Wave Coffee", 28.62828, 77.37495, 4.7);
    locationGraph.addLocation('r', "Haldirams", 28.62053, 77.38115, 4.0);
    locationGraph.addLocation('h', "Fortis Hospital", 28.61843, 77.37299, 4.5);
    locationGraph.addLocation('d', "Mithaas", 28.61816, 77.37055, 4.6);
    locationGraph.addLocation('h', "Kailash Hospital", 28.60062, 77.37592, 4.0);
    locationGraph.addLocation('t', "Iskcon", 28.55498, 77.25075, 4.1);
    locationGraph.addLocation('m', "Logix", 28.57434, 77.35384, 4.7);
    locationGraph.addLocation('h', "Metro Multi Speciality hospital", 28.59765, 77.33598, 4.2);   
    locationGraph.addLocation('r', "The Great Kebab Factory", 28.60423, 77.35019, 4.2);
    locationGraph.addLocation('o', "Golf Course", 28.56517, 77.34511, 3.9);
    locationGraph.addLocation('o', "Botanical Garden", 28.56335, 77.33598, 4.1);
    locationGraph.addLocation('m', "Wave Mall", 28.56822, 77.32300, 4.5);
    locationGraph.addLocation('m', "DLF Mall", 28.56761, 77.32113, 4.9);
    locationGraph.addLocation('h', "Felix hospital", 28.50606, 77.40855, 3.9);
    locationGraph.addLocation('t', "Akshardham", 28.61285, 77.27730, 5.0);
    locationGraph.addLocation('o', "Pragati Maidan", 28.61969, 77.24398, 3.5);
    locationGraph.addLocation('a', "Cannaught Palace", 28.63208, 77.22037, 4.6);

    // 128 lane -->
    locationGraph.addLocation('r', "Karigari Restaurent(By : Harpal Singh)", 28.58589, 77.37545, 4.2);
    locationGraph.addLocation('m', "Shopprix Mall", 28.57420, 77.36796, 4.8);
    locationGraph.addLocation('c', "JIIT 128", 28.51930, 77.36537, 4.2);

    // Botanical Lane -->
    locationGraph.addLocation('r', "Thios", 28.54326, 77.37007, 4.4);
    locationGraph.addLocation('o', "Okhla Bird Sanctuary", 28.55955, 77.30986, 4.5);
    locationGraph.addLocation('r', "The Saffron Boutique", 28.53959, 77.36596, 4.4);
    locationGraph.addLocation('c', "Jamia Milia Islamia", 28.56221, 77.28010, 3.7);
    locationGraph.addLocation('t', "Kalkaji Mandir", 28.54965, 77.25931, 4.6);
    locationGraph.addLocation('o', "Hauz Khaas", 28.54800, 77.20297, 4.6);

    // Pragati Maidan -->
    locationGraph.addLocation('o', "Mandi House", 28.62586, 77.23252, 3.6);
    locationGraph.addLocation('a', "Khan Market", 28.60038, 77.22696, 4.9);

    // Cannaught Palace -->
    locationGraph.addLocation('o', "New Delhi", 28.60565, 77.20073, 4.6);
    locationGraph.addLocation('h', "A.I.I.M.S. hospital", 28.56604, 77.2110,4.6);
    locationGraph.addLocation('o', "Chawri Bazaar", 28.64878, 77.22620, 4.2);
    locationGraph.addLocation('o', "Chandni Chowk", 28.65906, 77.22928, 4.0);
    locationGraph.addLocation('a', "Red Fort", 28.65639, 77.24104, 5.0);
    locationGraph.addLocation('o', "Majnu ka tila", 28.70004, 77.22730, 4.8);

    // Noida to Ghaziabad -->
    locationGraph.addLocation('m', "Shipra Mall", 28.63423, 77.37032, 3.8);
    locationGraph.addLocation('o', "Shipra Market", 28.63802, 77.36919, 4.5);
    locationGraph.addLocation('o', "Habitat", 28.63944, 77.36933, 4.6);
    locationGraph.addLocation('d', "Windsor Street", 28.63670, 77.36616, 5.0);

    // Connecting edges in the graph
    locationGraph.addEdge(0, 1);   // JIIT 62 to Ithum
    locationGraph.addEdge(1, 2);   // Ithum to 3rd Wave Coffee
    locationGraph.addEdge(2, 3);   // 3rd Wave Coffee to Haldirams
    locationGraph.addEdge(3, 4);   // Haldirams to Fortis Hospital
    locationGraph.addEdge(4, 5);   // Fortis to Mithaas
    locationGraph.addEdge(5, 6);   // Mithaas to Kailash
    locationGraph.addEdge(6, 7);   // Kailash to Iskcon
    locationGraph.addEdge(7, 8);   // Isckon to Logix
    locationGraph.addEdge(8, 9);   // Logix to Metro Multi Speciallity hospital
    locationGraph.addEdge(9, 10);  // Metro Multi Speciallity hospital to The Great Kebab factory
    locationGraph.addEdge(10, 11); // The Great Kebab Factory to Golfcourse
    locationGraph.addEdge(11, 12); // Golf Course to Botanical
    locationGraph.addEdge(12, 13); // Botanical to Wave
    locationGraph.addEdge(13, 14); // Wave to DLF
    locationGraph.addEdge(14, 15); // DLF to Felix
    locationGraph.addEdge(15, 16); // Felix to Akshardham
    locationGraph.addEdge(16, 17); // Akshardham to Pragati Maidan
    locationGraph.addEdge(17, 18); // Pragati to Cannaught

    locationGraph.addEdge(5, 19);  // Mithaas to Karigari
    locationGraph.addEdge(19, 20); // Karigari to Shopprix
    locationGraph.addEdge(20, 21); // Shopprix to JIIT 128

    locationGraph.addEdge(12, 22);  // Botanical to Thios
    locationGraph.addEdge(22, 23);  // Thios to Okhla
    locationGraph.addEdge(23, 24);  // Okhla to The Saffron Boutique
    locationGraph.addEdge(24, 25);  // The Saffron Boutique to Jamia
    locationGraph.addEdge(25, 26);  // Jamia to Kalkaji
    locationGraph.addEdge(26, 27);  // Kalkaji to Hauz Khaas

    locationGraph.addEdge(17, 28); // Pragati to Mandi House
    locationGraph.addEdge(28, 29); // Mandi House to Khan Market

    locationGraph.addEdge(18, 30); // Cannaught Palace to New Delhi
    locationGraph.addEdge(30, 31); // New Delhi to AIIMS
    locationGraph.addEdge(31, 32); // AIIMS to Chawri Bazar
    locationGraph.addEdge(32, 33); // Chawri Bazar to Chandni Chowk
    locationGraph.addEdge(33, 34); // Chandni Chowk to Red Fort
    locationGraph.addEdge(34, 35); // Red Fort to Majnu ka tila

    locationGraph.addEdge(0, 36);  // JIIT 62 to Shipra Mall
    locationGraph.addEdge(36, 37); // Shipra Mall to Shipra Market
    locationGraph.addEdge(37, 38); // Shipra Market to Habitat
    locationGraph.addEdge(38, 39); // Habitat to Windsor Street

    // Display all locations and edges in the graph
    cout << endl
         << endl;
    cout << " *********************" << endl;
    cout << "| Available locations |" << endl;
    cout << " *********************" << endl
         << endl;

    locationGraph.displayGraph();

    char a;
    cout << endl
         << endl
         << "Do you want to visit any of the above given locations(y/n):";
    cin >> a;
    system("CLS");
    switch (a)
    {
    case 'y':
    {
        // Search for the nearest location of a given category from the first location
        int a;
        char searchCategory;
        cout << endl
             << endl
             << "Choose the type of location you want to go to: " << endl
             << endl;
        cout << " ****************************" << endl;
        cout << "| 1. r => Restaurent         |" << endl;
        cout << "| 2. h => Hospital           |" << endl;
        cout << "| 3. t => Temples            |" << endl;
        cout << "| 4. d => Dine-out Places    |" << endl;
        cout << "| 5. a => Tourist attraction |" << endl;
        cout << "| 6. m => Mall               |" << endl;
        cout << "| 7. c => College            |" << endl;
        cout << "| 8. o => Other              |"<< endl;
        cout << " ****************************" << endl
             << endl;
        cout << "Enter the option: ";
        cin >> a;
        system("CLS");
        switch (a)
        {
        case 1:
            searchCategory = 'r';
            break;
        case 2:
            searchCategory = 'h';
            break;
        case 3:
            searchCategory = 't';
            break;
        case 4:
            searchCategory = 'd';
            break;
        case 5:
            searchCategory = 'a';
            break;
        case 6:
            searchCategory = 'm';
            break;
        case 7:
            searchCategory = 'c';
            break;
        case 8:
            searchCategory = 'o';
            break;
        }

        cout << endl
             << "Ahhhh shit, Here you are again!!!" << endl;

        locationGraph.displayGraph_Category(searchCategory);

        cout << endl
             << endl
             << "Choose wisely as your \'SAFAR\' should not become a \'SUFFER\' for you" << endl;
        cout << "************************" << endl;
        cout << "1.) SEARCH BY NEAREST DISTANCE"<<endl;
        cout << endl
             << "2.) SEARCH BY RATING" << endl;
        cout << endl;
        fflush(stdin);
        int b;
        cout << endl
             << endl
             << "Enter your prefered option : ";
        fflush(stdin);
        cin >> b;

        switch (b)
        {
        case 1:
        {
            // Here, place is suggested according to distance -->
            Location nearest = locationGraph.findNearestLocation(searchCategory).first;
            
            Event e(day, name, h, nearest.name, nearest.category);
            addEventtofile(e);
            cout<<endl<<endl<<"Nearest place to go --> "<<"Name: "<<nearest.name<<", Coordinates: ("<<nearest.x<<", "<<nearest.y<<")"<<endl;
                    cout<<"*******************"<<endl<<endl;
                    cout<<"Distance from current location = "<<locationGraph.findNearestLocation(searchCategory).second<<" km"<<endl<<endl;
                    cout<<"For above place to be visited following path can be followed :- "<<endl;   
                    int src = 0;
                    int nearest_dest = locationGraph.search_in_graph(nearest);
                    locationGraph.path(src,nearest_dest);
                    cout<<endl<<endl;
                    break;
        }
        case 2:{
            // Here, place is suggested according to rating -->
            Location best = locationGraph.findBestLocation(searchCategory).first;

            Event e(day, name, h, best.name, best.category);
            addEventtofile(e);
            cout<<endl<<endl<<"Best rated place --> "<<"Name: "<<best.name<<", Coordinates: ("<<best.x<<", "<<best.y<<")"<<endl;
                    cout<<"****************"<<endl<<endl;
                    cout<<"Distance from current location = "<<locationGraph.findNearestLocation(searchCategory).second<<" km"<<endl<<endl;
                    cout<<"For above place to be visited following path can be followed :- "<<endl;  
                    int src = 0; 
                    int best_dest = locationGraph.search_in_graph(best);
                    locationGraph.path(src,best_dest);
                    cout<<endl<<endl;
                    break;
                }
        }

        break;
    }

    case 'n':
    {   
        string loc;
        char loccat;
        // Now user can enter any new location which he just found out -->
        cout << "Ohhhh! You seem to be a travel buff  You must have an immense taste cause you here, let's take you somewhere, it's gonna be lit tonight.";

        cout<<"Enter your location "<<endl;
        cin>>loc;
        cout << " *****************************" << endl;
        cout << "| 1. r => Restaurent          |" << endl;
        cout << "| 2. h => Hospital            |" << endl;
        cout << "| 3. t => Temples             |" << endl;
        cout << "| 4. d => Dine-out Places     |" << endl;
        cout << "| 5. a => Tourist attraction  |" << endl;
        cout << "| 6. m => Mall                |" << endl;
        cout << "| 7. c => College             |" << endl;
        cout << "| 8. o => Other               |" << endl;
        cout << " *****************************"<<endl<<endl;
        cout<<"Enter your location char from the above"<<endl;
        cin>>loccat;
        Event e(day, name, h, loc, loccat);
        addEventtofile(e);
    }
    }
}
void displayMenu()
{
    cout << "1. Add Task\n";
    cout << "2. Complete Task\n";
    cout << "3. View To-Do List\n";
    cout << "4. Exit\n";
}

void todo()
{
    queue<string> todoList;

    int choice;
    string task;

    do
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the task: ";
            cin.ignore();
            getline(cin, task);
            todoList.push(task);
            cout << "Task added to the to-do list.\n";
            break;

        case 2:
            if (!todoList.empty())
            {
                cout << "Completed task: " << todoList.front() << endl;
                todoList.pop();
            }
            else
            {
                cout << "No tasks in the to-do list.\n";
            }
            break;

        case 3:
            if (!todoList.empty())
            {
                cout << "To-Do List:\n";
                queue<string> temp = todoList;
                while (!temp.empty())
                {
                    cout << temp.front() << endl;
                    temp.pop();
                }
            }
            else
            {
                cout << "No tasks in the to-do list.\n";
            }
            break;

        case 4:
            cout << "Exiting the program.\n";
            break;

        default:
            cout << "Invalid choice. Please enter a valid option.\n";
            break;
        }

    } while (choice != 4);
}
int display(profile p){
    int n;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "*********************************************************************************************************************" << endl;
    cout << "\t\t\t\t\t\tPROFILE\n";
    cout << "*********************************************************************************************************************" << endl;
    cout << "Name:"<<p.customername<<endl;
    cout << "Age:"<<p.age<<endl;
    cout << "Gender:"<<p.gen<<endl;
    cout << "Contact Number:"<<p.contact<<endl;

    cout << "HOW CAN WE HELP YOU?" << endl;
    cout << "1. PLAN YOUR EVENT" << endl;
    cout << "2. PLAN DAILY TASKS" << endl;
    cout << "3. WRITE YOUR TO-DO" << endl;
    cout << "4. EXIT" << endl;
    fflush(stdin);
    cout << "ENTER HERE: ";
    cin >> n;
    return n;
}
int main(){
    captcha();
    system("CLS");
    border();
    intro();
    profile p;
    loginFrame();
    p.registerr();
    loginFrame();
    p.login();
    int n= display(p);
    while (n != 4)
    {
        switch (n)
        {
        case 1:
            eventplan();
            n=display(p);
            break;
        case 2:
            dailytask();
            n=display(p);
            break;
        case 3:
            todo();
            n=display(p);
            break;
        }
    }
    system("CLS");
    rating();
    return 0;
}