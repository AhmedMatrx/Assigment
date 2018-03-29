// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: 20160017_assaigment2_cipher7.cpp
// Author1 and ID and Group: Ahmed Abed Ahmed , 20160017 , group 5
// Teaching Assistant: TA'S for Group 5,6
// Purpose Cipher or Decipher program by Morse cipher
#include <iostream>
#include <string.h>
#include <cstring>
#include <string>


using namespace std;

int main()
{

    int x ;
     string  shafra[10],shfrat[26] = {".-", "-...", "-.-.", "-..",  ".",   "..-.",   "--.",    "....",  "..",  ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-", "..-","...-",".--","-..-","-.--", "--.."} ;
    char  c7rof[26] = {'A','B', 'C', 'D', 'E','F', 'G', 'H', 'I', 'J', 'K', 'L', 'M','N',  'O',  'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'} ;
    string  message ;
    start:
    cout << "Hello ya user ya habibi" << endl;
    cout << "What do you like to do today" << "\n" ;
    cout << "1- Cipher a message\n" << "2- Decipher a message\n" << "3- End\n" ;
    cin >> x ;
    if (cin.fail())
    {
        cout << "Enter the nember from 1 , 2 , 3 to continue" << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        goto start;
            }

    cin.ignore();
    if (x==1)
    {

            cout << "Please Enter the message to cipher\n";
          //  cin.getline(message,1000);

           getline(cin,message);
          int n=message.length();
            for (int i=0; i<n;i++)
             {


             if (message[i]=='A' || message[i]=='a')
             cout << ".-" << " ";
             else if (message[i]=='B' || message[i]=='b')
             cout << "-..." << " ";
             else if (message[i]=='C' || message[i]=='c')
             cout << "-.-." << " ";
              else if (message[i]=='D' || message[i]=='d')
             cout << "-.."  << " ";
              else if (message[i]=='E' || message[i]=='e')
             cout << "." << " ";
              else if (message[i]=='F' || message[i]=='E')
             cout << "..-." << " ";
              else if (message[i]=='G' || message[i]=='g')
             cout << "--." << " ";
              else if (message[i]=='H' || message[i]=='h')
             cout << "...." << " ";
              else if (message[i]=='I' || message[i]=='i')
             cout << ".."  << " ";
              else if (message[i]=='J' || message[i]=='j')
             cout << ".---"  << " ";
              else if (message[i]=='K' || message[i]=='k')
             cout << "-.-" << " ";
              else if (message[i]=='L' || message[i]=='l')
             cout << ".-.."<< " " ;
              else if (message[i]=='M' || message[i]=='m')
             cout << "--" << " ";
              else if (message[i]=='N' || message[i]=='n')
             cout << "-."<< " " ;
              else if (message[i]=='O' || message[i]=='o')
             cout << "---"<< " " ;
              else if (message[i]=='P' || message[i]=='p')
             cout << ".--." << " ";
              else if (message[i]=='Q' || message[i]=='q')
             cout << "--.-" << " ";
              else if (message[i]=='R' || message[i]=='r')
             cout << ".-." << " ";
              else if (message[i]=='S' || message[i]=='s')
             cout << "..." << " ";
              else if (message[i]=='T' || message[i]=='t')
             cout << "-" << " ";
              else if (message[i]=='U' || message[i]=='u')
             cout << "..-" << " ";
              else if (message[i]=='V' || message[i]=='v')
             cout << "...-" << " ";
              else if (message[i]=='W' || message[i]=='w')
             cout << ".--" << " ";
              else if (message[i]=='x' || message[i]=='x')
             cout << "-..-" << " ";
              else if (message[i]=='Y' || message[i]=='y')
             cout << "-.--" << " ";
              else if (message[i]=='Z' || message[i]=='z')
             cout << "--.." << " ";
              else if (message[i]==' ')
             cout << " " << " " << " ";
            }
    }
        else if(x==2)
        {
            int n ;
            cout << "how many char you want to enter: " ;
            cin >> n ;
            for(int l =0 ; l<n ; l++)
                cin >> shafra[l] ;
            for (int j=0 ; j <10 ; j++)
              {
                for(int i = 0 ; i <26 ; i++)
                {
                    if(shfrat[i]==shafra[j])
                        cout <<c7rof[i]  << "  " ;
                    else if(shfrat[i]==shafra[j])
                        cout  <<  c7rof[i]  << "  " ;
                }


              }
           }
         else if (x==3)
         {
             cout << "Thanks for using my program :) " << endl;
         }
         else
         {cout << "please Enter Number from 1 to 3 " << endl ;
            goto start ;

         }


        return 0;

    }



