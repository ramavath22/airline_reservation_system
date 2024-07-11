

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

int pk1 = 0, pk2 = 0, pk3 = 0;
int memberid = 0;

void login()
{
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                   AIRLINE RESERVATION SYSTEM                          |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    cout << "Press Enter to continue...";
    cin.ignore();
    system("clear"); // Use "cls" for Windows, "clear" for Unix-based systems
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
    std::this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
    std::this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
   std:: this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
    std::this_thread::sleep_for(chrono::milliseconds(2000));
}

void schedule()
{
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Airline Flight Schedule ***" << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t    Read the Schedule CAREFULLY before reserving your seat" << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\tNumber count        Flight Name        From            To            Seats Left" << endl << endl;
    cout << "\t\t\t\t\t\t<1>                  000              Malaysia        Bombay" << "\t\t" << 40 - pk1 << endl << endl;
    cout << "\t\t\t\t\t\t<2>                  001              Dubai           Lahore" << "\t\t" << 40 - pk1 << endl << endl;
    cout << "\t\t\t\t\t\t<3>                  002              Paris           Sydney" << "\t\t" << 60 - pk2 << endl << endl;
    cout << "\t\t\t\t\t\t<4>                  003              Gaza            Delhi" << "\t\t" << 120 - pk3 << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\tPress Enter to continue...";
    cin.ignore();
    cin.get();
}

class Declaration
{
public:
    string id, name, age, gender, cnic, address, contact, depar, desti, f_name, seat_type, passport;
};

class Member : public Declaration
{
public:
    Declaration m[10];
    string back;
    int status1;
    void get_data();
    void show_data();
    void reservation();
    void seat();
    void edit();
    void alldata();
    void delet();
};

void Member::get_data()
{
    system("clear");
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\tMention a unique id       : ";
    cin.ignore();
    getline(cin, m[memberid].id);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tName                      : ";
    getline(cin, m[memberid].name);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tAge                       : ";
    getline(cin, m[memberid].age);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tGender                    : ";
    getline(cin, m[memberid].gender);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tCnic                      : ";
    getline(cin, m[memberid].cnic);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tPassport number           : ";
    getline(cin, m[memberid].passport);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tAddress                   : ";
    getline(cin, m[memberid].address);
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tContact                   : ";
    getline(cin, m[memberid].contact);

back:
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tProceed Forward[Y/N]      : ";
    cin >> back;
    if (back == "Y" || back == "y")
    {
        cout << endl << endl;
        cout << "\t\t\t\t\t\t\t\tYou filled all Entries of traveler successfully...";
        cin.ignore();
        cin.get();
    }
    else if (back == "N" || back == "n")
    {
        cout << endl << endl;
        cout << "\t\t\t\t\t\t\t\tYou filled all Entries of traveler successfully...";
        cin.ignore();
        cin.get();
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\t\tWrong Input";
        goto back;
    }
}

void Member::show_data()
{
    system("clear");
    string n;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID to display Record: ";
    cin >> n;
    system("clear");
    if (n == "0")
    {
        system("clear");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
        cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display. Please Go Back And Enter Some Entries...";
    }
    else
    {
        int i;
        for (i = 0; i < memberid; i++)
        {
            status1 = 0;
            if (n == m[i].id)
            {
                status1 = 1; // here 1 is considered as bool true
                break;
            }
        } // for loop closed

        if (status1) // if true
        {
            cout << "\n\n\n\n\n\n\n\n\n\n";
            cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
            cout << "\t\t\t\t\t\t\t\tID                   :" << m[i].id << endl << endl;
            cout << "\t\t\t\t\t\t\t\tName                 :" << m[i].name << endl << endl;
            cout << "\t\t\t\t\t\t\t\tAge                  :" << m[i].age << endl << endl;
            cout << "\t\t\t\t\t\t\t\tGender               :" << m[i].gender << endl << endl;
            cout << "\t\t\t\t\t\t\t\tCNIC No.             :" << m[i].cnic << endl << endl;
            cout << "\t\t\t\t\t\t\t\tPassport No.         :" << m[i].passport << endl << endl;
            cout << "\t\t\t\t\t\t\t\tAddress              :" << m[i].address << endl << endl;
            cout << "\t\t\t\t\t\t\t\tContact No.          :" << m[i].contact << endl << endl;
            cout << "\t\t\t\t\t\t\t\tFlight Name          :" << m[i].f_name << endl << endl;
            cout << "\t\t\t\t\t\t\t\tDeparture            :" << m[i].depar << endl << endl;
            cout << "\t\t\t\t\t\t\t\tDestination          :" << m[i].desti << endl << endl;
            cout << "\t\t\t\t\t\t\t\tSeat Type            :" << m[i].seat_type << endl << endl;
            cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
            cout << "\n\n\t\t\t\t\t\t\t\tPress Enter to go back...";
            cin.ignore();
            cin.get();
        }
        else
        {
            system("clear");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display. Please Go Back And Enter Some Entries...";
            cin.ignore();
            cin.get();
        }
    }
}

void Member::reservation()
{
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Airline Flight Reservation System ***" << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t    Read the Schedule CAREFULLY before reserving your seat" << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\tNumber count        Flight Name        From            To            Seats Left" << endl << endl;
    cout << "\t\t\t\t\t\t<1>                   000              Malaysia       Bombay" << "\t\t" << 40 - pk1 << endl << endl;
    cout << "\t\t\t\t\t\t<2>                   001              Dubai          Lahore" << "\t\t" << 40 - pk1 << endl << endl;
    cout << "\t\t\t\t\t\t<3>                   002              Paris          Sydney" << "\t\t" << 60 - pk2 << endl << endl;
    cout << "\t\t\t\t\t\t<4>                   003              Gaza           Delhi" << "\t\t" << 120 - pk3 << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\tNumber of the Flight You want to travel with: ";
    cin >> m[memberid].f_name;

    if (m[memberid].f_name == "1" || m[memberid].f_name == "2")
    {
        m[memberid].f_name = "pk001";
    }
    else if (m[memberid].f_name == "3")
    {
        m[memberid].f_name = "pk002";
    }
    else if (m[memberid].f_name == "4")
    {
        m[memberid].f_name = "pk003";
    }
    else
    {
        cout << "\n\t\t\t\t\t\tWrong Input!";
        return;
    }

    cout << "\t\t\t\t\t\tEnter your Departure Location: ";
    cin >> m[memberid].depar;
    cout << "\t\t\t\t\t\tEnter your Destination Location: ";
    cin >> m[memberid].desti;
    cout << "\n\n\t\t\t\t\t\tPress Enter to choose seat type...";
    cin.ignore();
    cin.get();
    seat();
}

void Member::seat()
{
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Seat Reservation ***" << endl << endl;
    cout << "\t\t\t\t\t\t-----------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t|\t<1>       Business Class                |" << endl;
    cout << "\t\t\t\t\t\t|\t<2>       Economy Class                 |" << endl;
    cout << "\t\t\t\t\t\t-----------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\tSelect the seat type: ";
    cin >> m[memberid].seat_type;
    if (m[memberid].seat_type == "1")
    {
        m[memberid].seat_type = "Business";
    }
    else if (m[memberid].seat_type == "2")
    {
        m[memberid].seat_type = "Economy";
    }
    else
    {
        cout << "\n\t\t\t\t\t\tWrong Input!";
        return;
    }

    if (m[memberid].f_name == "pk001")
    {
        pk1++;
    }
    else if (m[memberid].f_name == "pk002")
    {
        pk2++;
    }
    else if (m[memberid].f_name == "pk003")
    {
        pk3++;
    }
    memberid++;
    cout << "\n\n\t\t\t\t\t\tYour Seat Has Been Reserved Successfully!";
    cout << "\n\n\t\t\t\t\t\tPress Enter to continue...";
    cin.ignore();
    cin.get();
}

void Member::edit()
{
    system("clear");
    string n;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID to Edit Record: ";
    cin >> n;
    int status2 = 0;
    int i;
    for (i = 0; i < memberid; i++)
    {
        if (n == m[i].id)
        {
            status2 = 1;
            break;
        }
    }

    if (status2)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\tEnter new details for the member" << endl;
        cout << "\t\t\t\t\t\t\t\tName                      : ";
        cin.ignore();
        getline(cin, m[i].name);
        cout << endl;
        cout << "\t\t\t\t\t\t\t\tAge                       : ";
        getline(cin, m[i].age);
        cout << endl;
        cout << "\t\t\t\t\t\t\t\tGender                    : ";
        getline(cin, m[i].gender);
        cout << endl;
        cout << "\t\t\t\t\t\t\t\tCnic                      : ";
        getline(cin, m[i].cnic);
        cout << endl;
        cout << "\t\t\t\t\t\t\t\tPassport number           : ";
        getline(cin, m[i].passport);
        cout << endl;
        cout << "\t\t\t\t\t\t\t\tAddress                   : ";
        getline(cin, m[i].address);
        cout << endl;
        cout << "\t\t\t\t\t\t\t\tContact                   : ";
        getline(cin, m[i].contact);
        cout << endl;
        cout << "\n\n\t\t\t\t\t\t\t\tRecord updated successfully!";
        cout << "\n\n\t\t\t\t\t\t\t\tPress Enter to continue...";
        cin.get();
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\t\tNo such member found!";
        cout << "\n\n\t\t\t\t\t\t\t\tPress Enter to continue...";
        cin.get();
    }
}

void Member::alldata()
{
    system("clear");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tDisplaying All Members Records: ";
    for (int i = 0; i < memberid; i++)
    {
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\tID                   :" << m[i].id << endl;
        cout << "\t\t\t\t\t\t\t\tName                 :" << m[i].name << endl;
        cout << "\t\t\t\t\t\t\t\tAge                  :" << m[i].age << endl;
        cout << "\t\t\t\t\t\t\t\tGender               :" << m[i].gender << endl;
        cout << "\t\t\t\t\t\t\t\tCNIC No.             :" << m[i].cnic << endl;
        cout << "\t\t\t\t\t\t\t\tPassport No.         :" << m[i].passport << endl;
        cout << "\t\t\t\t\t\t\t\tAddress              :" << m[i].address << endl;
        cout << "\t\t\t\t\t\t\t\tContact No.          :" << m[i].contact << endl;
        cout << "\t\t\t\t\t\t\t\tFlight Name          :" << m[i].f_name << endl;
        cout << "\t\t\t\t\t\t\t\tDeparture            :" << m[i].depar << endl;
        cout << "\t\t\t\t\t\t\t\tDestination          :" << m[i].desti << endl;
        cout << "\t\t\t\t\t\t\t\tSeat Type            :" << m[i].seat_type << endl;
        cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl;
    }
    cout << "\n\n\t\t\t\t\t\t\t\tPress Enter to go back...";
    cin.ignore();
    cin.get();
}

void Member::delet()
{
    system("clear");
    string n;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID to delete Record: ";
    cin >> n;
    int status3 = 0;
    int i;
    for (i = 0; i < memberid; i++)
    {
        if (n == m[i].id)
        {
            status3 = 1;
            break;
        }
    }

    if (status3)
    {
        for (int j = i; j < memberid - 1; j++)
        {
            m[j] = m[j + 1];
        }
        memberid--;
        cout << "\n\n\t\t\t\t\t\t\t\tRecord deleted successfully!";
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\t\tNo such member found!";
    }
    cout << "\n\n\t\t\t\t\t\t\t\tPress Enter to continue...";
    cin.ignore();
    cin.get();
}

int main()
{
    Member m;
    login();

main_menu:
    system("clear");
    int menu_choice;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t** Main Menu **" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t| <1> Schedule        |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t| <2> Reservation     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t| <3> View Records    |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t| <4> Edit Records    |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t| <5> Delete Records  |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t| <6> Exit            |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tEnter your choice: ";
    cin >> menu_choice;

    switch (menu_choice)
    {
    case 1:
        schedule();
        goto main_menu;
    case 2:
        m.get_data();
        m.reservation();
        goto main_menu;
    case 3:
        m.alldata();
        goto main_menu;
    case 4:
        m.edit();
        goto main_menu;
    case 5:
        m.delet();
        goto main_menu;
    case 6:
        cout << "\n\n\t\t\t\t\t\t\t\tThank you for using the Airline Reservation System!";
        exit(0);
    default:
        cout << "\n\n\t\t\t\t\t\t\t\tInvalid choice! Please try again.";
        cin.ignore();
        cin.get();
        goto main_menu;
    }
    return 0;
}
