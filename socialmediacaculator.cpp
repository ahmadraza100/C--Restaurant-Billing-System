#include <iostream>
using namespace std;
int main()
{
      int fb , insta , youtube  ,year; 
      cout<<"\t\t\t___________|Welcome to Social Media Survey App|___________\n\n\n";
      cout<<"How many hours you spend on Faceboook Daily = "; 
      cin>>fb; 
      cout<<"How many hours you spend on Instagram Daily = "; 
      cin>>insta; 
      cout<<"How many hours you spend on Youtube Daily = "; 
      cin>>youtube; 

      cout<<"\n\nFrom how which years you are using Internet = " ; 
      cin>>year ; 

      int hours = fb+insta+youtube; 
      int totalyears = 2021 - year;

      int TimeinHour = totalyears*365*hours;
      cout<<"\n\n You Spent "<<TimeinHour<<" Hours of your life on Social Media!\n\n";
      int TimeinDays = TimeinHour/24;
      cout<<"\n\n You Spent "<<TimeinDays<<" Days of your life on Social Media!\n\n";
      float TimeinYear = (float)TimeinDays/365;
      cout<<"\n\n You Spent "<<TimeinYear<<" Years of your life on Social Media!\n\n";

      cout<<"\t\t\t___________|Social Media Survey App|___________\n\n\n";




    

   
}