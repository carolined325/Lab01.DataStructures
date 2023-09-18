/*
*@file Users/carolinederolf/Lab02.2
*To create and display an array with 10 even values entered by user
*To calculate the average of odd numbers entered and display that and how many odd numbers entered
*@author Caroline DeRolf
*@date September 2023
*/


#include <iostream> 

using namespace std;

//function declaration

/*function return bool testing user integer if it is even or odd and returning boolean
*@return bool- if even=true, if odd=false
*@param userIn user input of a number
*@param total how many even numbers are currently in the array
*/

bool myFunction(int userIn, int total); 



//declare global variable
int userIn=0;
int main(){
    //declare variables
    int userIn=0;
    const int length=10;
    int total=0;
    bool test;
    int oddCount=0;

    //declare even and odd arrays
   
    int eArray[length]={};
    int oArray[length]={};


//get 10 even numbers in the string
while(total<10)
{
    cout<<"Enter a number(even only please)"<<endl;
    cin>>userIn;
    test=myFunction(userIn, total);
   
  
    
    //give instruction on even or odd returned bool value
    if(test==true)
        {
            eArray[total]=userIn;
            total++;
        }
    
    if (test==false)
        {
            oArray[oddCount]=userIn;
            oddCount++;
        }
}

//display the  even array to the user
cout<<"your even values are:"<<endl;
for(int i=0;i<=9; i++)
{
    cout<<eArray[i];
    if(i<9)
    {
        cout<<",";
    }
}
2
cout<<endl;

//display the odd array to the user



    return 0;
}

//function definition
/*returns boolean for true(even) or false(odd) value*/
bool myFunction(int userIn, int total)
{
    bool test=false;
    int modDiv=userIn%2;
    
    //test userIn to see if it is even or odd and return the corresponding boolean value
    while(total<10)
    {
            if(modDiv==0){
                test=true;
                return test;
            }
            if(modDiv!=0){
                test=false;
                return test;
            }
    }
    return false;
}

