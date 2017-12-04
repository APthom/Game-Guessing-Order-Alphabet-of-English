#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdfix.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
    string english = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"\n                                  Hello This is \n                        Game Guessing Order Alphabet Of English\n\n""  You must enter integer oder is alphabet of english ""\n\n\n";

    srand(time(0));
    float score = 0;

    do
    {
        int randeng = (rand()%26);
        int guessoder;

        cout<<"Score : "<<score<<endl;
        cout << english[randeng] << " order is ";
        cin >> guessoder;

        if (randeng == 1)
        {
            if ( guessoder == randeng + 1) {
            cout<<"Correct\n\n"<<endl;
            score+=1.0;
            }
            else if (guessoder == randeng + 2 || guessoder == randeng + 3 || guessoder == randeng)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder != randeng + 1 || guessoder != randeng + 2 || guessoder != randeng){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        else if (randeng == 0)
        {
            if ( guessoder == randeng + 1) {
            cout<<"Correct\n\n"<<endl;
            score+=1.0;
            }
            else if (guessoder == randeng + 2 || guessoder == randeng + 3)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder != randeng + 1 || guessoder != randeng + 2 || guessoder != randeng){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        else if(randeng == 24)
        {
            if ( guessoder == randeng + 1) {
                cout<<"Correct\n\n"<<endl;
                score+=1.0;
            }
            else if (guessoder == randeng + 2 || guessoder == randeng)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder != randeng + 1 || guessoder != randeng + 2 || guessoder != randeng){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        else if(randeng == 25)
        {
            if ( guessoder == randeng + 1) {
                cout<<"Correct\n\n"<<endl;
                score+=1.0;
            }
            else if (guessoder == randeng)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder != randeng + 1 || guessoder != randeng + 2 || guessoder != randeng){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        else if (randeng != 1)
        {
            if ( guessoder == randeng + 1) {
                cout<<"Correct\n\n"<<endl;
                score+=1.0;
            }
            else if (guessoder == randeng + 2 || guessoder == randeng + 3 || guessoder == randeng || guessoder == randeng - 1 )
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder != randeng + 1 || guessoder != randeng + 2 || guessoder != randeng)
            {
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }





    }while(score != 10.0 );


    // ทายสองตัว
        do
    {
        int randeng1 = (rand()%26);
        int randeng2 = (rand()%26);
        int guessoder1;
        int guessoder2;

        cout<<"Score : "<<score<<endl;
        cout<<english[randeng1]<<" and "<<english[randeng2]<<" order is ";
        cin >> guessoder1 >> guessoder2;


        if(randeng1 == 1 || randeng2 == 1)
        {
            if(guessoder1 == randeng1 + 2 || guessoder1 == randeng1 + 3 || guessoder1 == randeng1 && guessoder2 == guessoder2 == randeng2 + 2 || guessoder2 == randeng2|| guessoder2 == randeng2 + 3)
            {
                cout<<"Correct\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder1 == randeng1 + 2 || guessoder1 == randeng1 && guessoder2 == randeng2 + 2 || guessoder2 == randeng2)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if(guessoder1 != randeng1 + 1 || guessoder1 != randeng1 + 2 || guessoder1 != randeng1 && guessoder2 != randeng2 + 1 || guessoder2 != randeng2 + 2 || guessoder2 != randeng2){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        else if(randeng1 == 0 || randeng2 == 0)
        {
            if(guessoder1 == randeng1 + 2 || guessoder1 == randeng1 + 3 || guessoder1 == randeng1 && guessoder2 == guessoder2 == randeng2 + 2 || guessoder2 == randeng2|| guessoder2 == randeng2 + 3)
            {
                cout<<"Correct\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder1 == randeng1 + 2 || guessoder1 == randeng1 + 3 && guessoder2 == randeng2 + 2 || guessoder2 == randeng2 + 3)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if(guessoder1 != randeng1 + 1 || guessoder1 != randeng1 + 2 || guessoder1 != randeng1 && guessoder2 != randeng2 + 1 || guessoder2 != randeng2 + 2 || guessoder2 != randeng2){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        if(randeng1 == 24 || randeng2 == 24)
        {
            if(guessoder1 == randeng1 + 2 || guessoder1 == randeng1 + 3 || guessoder1 == randeng1 && guessoder2 == guessoder2 == randeng2 + 2 || guessoder2 == randeng2|| guessoder2 == randeng2 + 3)
            {
                cout<<"Correct\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder1 == randeng1 + 2 || guessoder1 == randeng1 && guessoder2 == randeng2 + 2 || guessoder2 == randeng2)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if(guessoder1 != randeng1 + 1 || guessoder1 != randeng1 + 2 || guessoder1 != randeng1 && guessoder2 != randeng2 + 1 || guessoder2 != randeng2 + 2 || guessoder2 != randeng2){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }

        else if(randeng1 == 25 || randeng2 == 25)
        {
            if(guessoder1 == randeng1 + 2 || guessoder1 == randeng1 + 3 || guessoder1 == randeng1 && guessoder2 == guessoder2 == randeng2 + 2 || guessoder2 == randeng2|| guessoder2 == randeng2 + 3)
            {
                cout<<"Correct\n\n"<<endl;
                score+=0.5;
            }
            else if (guessoder1 == randeng1 && guessoder2 == randeng2)
            {
                cout<<"Near\n\n"<<endl;
                score+=0.5;
            }
            else if(guessoder1 != randeng1 + 1 || guessoder1 != randeng1 + 2 || guessoder1 != randeng1 && guessoder2 != randeng2 + 1 || guessoder2 != randeng2 + 2 || guessoder2 != randeng2){
                cout<<"Worng\n\n"<<endl;
                score-=1.0;
            }
        }



    }while(score != 20.0 );


    return 0;
}
