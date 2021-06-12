
#include<iostream>
#include<conio.h>
#include<unistd.h>//for using the function sleep

#include<windows.h>

using namespace std;

int back;
//login
void login();
//intro
void intro();
//display welcome
void displayWelcome();

int main()
{
	
	cout<<"\n\n\t\t\t\t\t\t*********************************************************************\n";
	cout<<"\n\t\t\t\t\t\t\t\tCHAIR LIFT MANAGEMENT\n";
	cout<<"\n\t\t\t\t\t\t*********************************************************************\n\n\n";
	
	cout<<"\t\t\t\t\t\t\tNOTE: 1st case based upon First Come First Server\n";
	cout<<"\n\t\t\t\t\t\t\t2nd case will server Adult People First\n\n";
	getch();
	system("cls");
	intro();
	getch();
	system("cls");
	getch();
	displayWelcome();
	login();
	sleep(3); 	//Make the programme waiting for 3 seconds
	system("cls");
	
	
	int size;
	int temp;
	
	label:
	cout<<"\nPlease Enter the total number of Customers: ";
	cin>>size;
	//getch();
	system("cls");
	string customer[size];
	string temp1;
	
	int ID[size];
	int age[size];
	cout<<"\n   Please Register Customers with their  ID, Name and Age\n\n";
	
	for(int i=0; i<size; i++)
	{
		cout<<"\n";
		cout<<"   Customer # "<<i+1<<"\n";
		cout<<"   *******************************\n";
		cout<<"   Name    : "; cin>>customer[i];
		cout<<"   ID      : "; cin>>ID[i];
		cout<<"   AGE     : "; cin>>age[i];
	}
	getch();
	system("cls");
	cout<<"\n                 ***CUSTOMERS ARE NOW REGISTERED***\n\n";
	
	cout<<"    NOTE: In this Case Customer Came First Will Get Seat First (FIFO)\n\n";
	
	cout<<"   Customer ID                 Customer NAME \n";
	
	cout<<"   ***********************************************************\n\n";
	for(int i=0; i<size; i++)
	{
		cout<<"    "<<ID[i]<<"                            "<<customer[i]<<"\n";
	}
    cout<<"    ";
    
	for(int i=0; i<size; i++)
	{
	
		cout<<"----------";
	
	} 
	
	cout<<"\n   ";
	
	for(int i=0; i<size; i++)
	{
		
		cout<<"| "<<customer[i]<<" ";
	
	} 
	
	cout<<"|\n    ";
	
	for(int i=0; i<size; i++)
	{
	
		cout<<"----------";
	
	}
	cout<<"\n";
	
	cout<<"\n\n   *******************************************************\n\n";
	
	cout<<"\n\nNOTE:In This Case Adults will Get Seat First (Priority Base Algo)\n\n";
	
//	int i, key, j;  
//    for (i = 1; i < n; i++) 
//    {  
//        key = arr[i];  
//        j = i - 1;  
//  
//        while (j >= 0 && arr[j] > key) 
//        {  
//            arr[j + 1] = arr[j];  
//            j = j - 1;  
//        }  
//        arr[j + 1] = key;  
//    } 
//	
    for(int i = 0; i<size-1; i++)
	{
	
       for (int j = 0; j < size-i-1; j++)
	    {
             if (age[j] < age[j+1])
			{
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
                
                temp = ID[j];
                ID[j] = ID[j+1];
                ID[j+1] = temp;
                
                temp1 = customer[j];
                customer[j] = customer[j+1];
                customer[j+1] = temp1;
            }
    
	    }
    
	}
	
	cout<<"   Customer ID                 Customer NAME \n";
	
	cout<<"   ***********************************************************\n\n";
	
	for(int i=0; i<size; i++)
	{
	
		cout<<"    "<<ID[i]<<"                            "<<customer[i]<<"\n";
	
	}
    
	cout<<"    ";
	
	for(int i=0; i<size; i++)
	{
	
		cout<<"----------";
	
	} 
	cout<<"\n   ";
	
	for(int i=0; i<size; i++)
	{
	
		cout<<"| "<<customer[i]<<" ";
	
	} 
	cout<<"|\n    ";
	
	for(int i=0; i<size; i++)
	{
		
		cout<<"----------";
	
	}
	
	cout<<"\n";
	cout<<"\n\n   *******************************************************\n\n";
	
	
	cout<<"   Mix Array\n\n";
	
	for(int i=0; i<size; i++)
	{
	
		cout<<"    "<<ID[i]<<"                            "<<customer[i]<<"\n";
	
	}
    
	cout<<"    ";
	
	for(int i=0; i<size; i++)
	{
	
		cout<<"----------";
	
	} 
	cout<<"\n   ";
	
	for(int i=0; i<size; i++)
	{
		cout<<"| "<<customer[i]<<" "<<customer[i+1];
	
	} 
	cout<<"|\n    ";
	
	for(int i=0; i<size; i++)
	{
		
		cout<<"----------";
	
	}
	
	cout<<"\n";
	cout<<"\n\n   *******************************************************\n\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	cout<<"\n\t\t\t\t\t\t\t0.back: ";
				cin>>back;
				if(back==0)
				{
					system("cls");
					goto label;	
				}
}
	
void login()
{
	string userName=" ";
	string passWord=" ";
	bool loginSuccess=false;
	getch();
	do
	{
		
		cout<<"\n\n\t\t\t\t\t\t";
		
		cout<<"UserName: ";
		getline(cin,userName);
		
		cout<<"\t\t\t\t\t\tEneter The Password: ";
		getline (cin,passWord);
		
		if(userName=="zain" && passWord=="a1b2c3")
		{
			cout<<"\n\n\t\t\t\t\t\t\tYou Have Successfully Logged In ...!!! "<<endl;
			cout<<"\n\t\t\t\t\t\t\t\tWait....!!!\n\t\t\t\t\t\t\tit can take upto 3 seconds For Services.... "<<endl;
			loginSuccess=true;
		}
		else 
			{
			cout<<"\n\t\t\t\t\t\t\t\t\"Please Try Again\" \n"<<endl;	
			}
	}while (!loginSuccess);// we can while(loginSuccess==false);// Yahan Pay False ka(NOT OPERATOR) Mtlb H K Login Jo phelay false Tha 
						
}
		
void displayWelcome()
{
	cout<<endl<<endl<<endl;
	cout<<"\n\t\t\t===================================================================================================================\n\n"<<endl;
	cout<<endl;
	
cout<<"\t\t\t$$            $$    $$$$$$$$$$$   $$            $$$$$$$$      $$$$$$$      $$          $$    $$$$$$$$$$$"<<endl;
cout<<"\t\t\t$$            $$    $$            $$          $$            $$       $$    $$  $$  $$  $$    $$"<<endl;
cout<<"\t\t\t$$     $$     $$    $$$$$$$$$$$   $$          $$            $$       $$    $$    $$    $$    $$$$$$$$$$$"<<endl;
cout<<"\t\t\t$$  $$    $$  $$    $$            $$          $$            $$       $$    $$          $$    $$"<<endl;
cout<<"\t\t\t$$            $$    $$$$$$$$$$$   $$$$$$$$$     $$$$$$$$      $$$$$$$      $$          $$    $$$$$$$$$$$\n\n"<<endl;
cout<<"\n\t\t\t==================================================================================================================="<<endl;

}
void intro()
{
	cout<<"\n\n\n\t\t\t=========================================================================="<<endl;
		cout<<"\n\n\t\t\t\t\tZain Rehman Ansariii"<<endl;
		cout<<"\t\t\t\t\tAhsan Amin"<<endl;	
		cout<<"\n\n\t\t\t\t\tRoll No: BITM-F18-096"<<endl;
		cout<<"\t\t\t\t\t\t BITM-F18-102"<<endl;
		cout<<"\n\n\t\t\t\t\t Os Project Using C"<<endl;
		cout<<"\n\n\t\t\t=========================================================================="<<endl;
		cout<<"\t\t\t\t  _________________________________________\n\n"<<endl;
		Beep(2020,1100);                                                             // causes the computer to beep
    	char l=219;                                                                  //for loading bar
    cout<<"\t\t\t\tPlease wait while system is analyzing the data\n";
    cout<<"\t\t\t\t";
    for ( int i=0; i<5 ; i++)
   		 {
        	Beep(2000,500);
        	cout<<l; 
         }
}
