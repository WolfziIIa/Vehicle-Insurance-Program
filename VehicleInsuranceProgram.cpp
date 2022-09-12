// Vehicle Insurance System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
string username;
string password;
string users_name;
string users_password;
string email;
string address;
string full_name;
string password_2;
int counter;
int option_select;
int contact_number;
int i;
int counter_car = 0;
int counter_claims = 0;


struct admin
{
	string admin_name;
	string admin_password;
};

struct car_details
{
	int car_id{};
	string car_model;
	int car_year{}; //{} included to initialise the variable without having to declare it. Only int requires that
	string car_rego;
	string car_make;
};

struct policies
{
	string policy_name;
	float policy_price;
	string policy_description;
	int duration;
};

struct claims
{
	int claims_id{};
	int date{}; //to be confirmed date input form
	string claim_description;
	string claim_address;
};

struct insurer
{
	int insurer_ID{};
	string user_name;
	string insurer_name;
	string insurer_address;
	string insurer_city;
	string insurer_country;
	string user_email;
	int insurer_phone_number{};
	string password;
	int register_date{};
	int insurance_expiry_date{};
	car_details car[5];
	claims user_claim[5];
};


insurer maximum[10000]; // This is the array I have created with 10000 blocks to accommodate the objects
int count_key = 0; //This is the counter starter to allow us to control to manage how many entry we have .


//main menu included in a function 
void call_main_menu()
{
	cout << "Vehicle Insurance System  - Version 1.00\n\n";
	cout << "\n::Main Menu:: \n";
	cout << "\n1. Client Login";
	cout << "\n2. Admin login";
	cout << "\n3. Exit program" << endl;
	cout << "\nPlease select an option: ";
	cin >> option_select;
};

void client_logged_menu()
{
	cout << "Vehicle Insurance System  - Version 1.00\n\n";
	cout << "\n::Client Menu:: \n";
	cout << "\n1. See My Profile";
	cout << "\n2. Insure New Car";
	cout << "\n3. Insurance Claims" << endl;
	cout << "\nPlease select an option: ";
	cin >> option_select;

	switch (option_select) // menu detailing in progress
	{
	case 1:

		cout << maximum[count_key].insurer_name;
		break;
	case 2:

		cout << "Please Type your new car details\n";
		cout << "Please Type your new car model\n";
		cin >> maximum[count_key].car[1].car_model;
	//we need to include a counter to be able to include more that one car on the car's array
		cout << "Please Type your new car make\n";
		cin >> maximum[count_key].car[1].car_make;
		cout << "Please Type your new car rego\n";
		cin >> maximum[count_key].car[1].car_rego;
		cout << "Please Type your new car year\n";
		cin >> maximum[count_key].car[1].car_year;
		maximum[count_key].car[1].car_id = 1;
		counter_car++;
		break;

	case 3:

		cout << "Please type your claim details\n";
		cout << "Please type your claim date\n";
		cin >> maximum[count_key].user_claim[1].date;
		cout << "Please type your claim description\n";
		cin >> maximum[count_key].user_claim[1].claim_description;
		cout << "Please type the claim address\n";
		cin >> maximum[count_key].user_claim[1].claim_address;
		counter_claims++;
		break;

	case 4:

		cout << maximum[count_key].insurer_name;
		break;

	default:
		cout << "Please select a valid option";
		client_logged_menu();
		break;
	}
};

int main()
{
	while (true)
	{
		//cout<<"Vehicle Insurance System";
		//cout<<"\nMain Menu\n";
		//cout<<"\n1. Client Login";
		//cout<<"\n2. Admin login";
		//cout<<"\n3. Exit program"<<endl;
		//cout<<"\nPlease select an option: ";
		//cin>>option_select;

		call_main_menu(); // I have included the menu above in a function to make it easier to call it back at anytime

		if (option_select == 1)
		{
			cout << "\nClient login: \n***************************";
			cout << "\n1. Login";
			cout << "\n2. Register" << endl;
			cout << "\nPlease select an option: ";
			cin >> option_select;

			if (option_select == 1)
			{
				for (i = 0; i < 3; i++)
				{
					cout << "\nPlease enter your username and password: \n";
					cout << "Username: ";
					cin >> username;
					cout << "Password: ";
					cin >> password;
					//maximum[].insurer_ID;
					if (users_name == username && password == users_password)
					//need to figure out a way to extract the actual users name and password to compare whether correct. maybe this could become a for loop or while loop for 3 turns
					{
						cout << "Your sign in was successful\n";
					system: "CLS";
						void client_logged_menu();
					}
					else
					{
						cout << "\ninvalid username or password, please try again\n";
						cout << "\n";
					}
				}
			}
			if (option_select == 2)
			{
				if (count_key < 10000)
				{
					maximum[count_key].insurer_ID = count_key;
					cout << "\nPlease enter a user name: \n";
					//cin>>full_name;
					cin >> maximum[count_key].user_name;

					cout << "\nPlease enter your full name: \n";
					//cin>>full_name;
					cin >> maximum[count_key].insurer_name;


					cout << "\nPlease enter your city: \n";
					cin >> maximum[count_key].insurer_city;

					cout << "\nPlease enter your Country: \n";
					cin >> maximum[count_key].insurer_country;

					cout << "\nPlease enter your contact number: \n";
					//cin>>contact_number;
					cin >> maximum[count_key].insurer_phone_number;

					cout << "\nPlease enter your email: \n";
					//cin>>email;
					cin >> maximum[count_key].user_email;
					cout << "\nPlease enter your address: \n";
					//cin>>address;
					cin >> maximum[count_key].insurer_address;
					cout << "\nPlease enter your password: \n";
					cin >> password;
					cout << "\nRe-enter your password: \n";
					cin >> password_2;

					while (password != password_2)
					{
						cout << "\nPasswords do not match, Please try again. \n";
						cout << "\nPlease enter your password: ";
						cin >> password;
						cout << "\nRe-enter your password: ";
						cin >> password_2;
					}
					maximum[count_key].password = password;
					// cout << maximum[count_key].user_name;
					// cout << maximum[count_key].insurer_phone_number;
					// cout << count_key;
					count_key++;
					cout << "\nThank you for registering\n ";
					cout << count_key;
					call_main_menu();
				}
			}
		}

		if (option_select == 2)
		{
			for (i = 0; i < 3; i++)
			{
				cout << "\nPlease enter your username and password: \n";
				cout << "Username: ";
				cin >> username;
				cout << "Password: ";
				cin >> password;

				if (username == users_name && password == users_password)
				//need to figure out a way to extract the actual users name and password to compare whether correct. maybe this could become a for loop or while loop for 3 turns
				{
					cout << "Your sign in was successful\n";
				}
				else
				{
					cout << "\ninvalid username or password, please try again\n";
					cout << "\n";
				}
			}
		}

		if (option_select == 3)
		{
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
