#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
	start:
	int turn=0;
    char disp,a,chk[9],tic[9]={'1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<9;i++){chk[i]=tic[i];
    }
    char use[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char rec[9]={'0','0','0','0','0','0','0','0','0'};
    begin:
    turn++;
    if (turn%2 == 1)
    {
    	disp='X';
    }
    else
    disp='O';
    cout<<endl<<endl<<"   -> Wellome to Tic Tac Toe Multi player game !!"<<endl;
    cout<<endl<<"        ->just enter the numeric value of the grid you want to move into\n        using the reference table";
    cout<<endl<<"        ->player one takes \"X\"";
    
    cout<<"\n";
	cout<<endl<<endl<<endl<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"       "<<tic[0]<<"  #  "<<tic[1]<<"  #  "<<tic[2]<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"     #################"<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"       "<<tic[3]<<"  #  "<<tic[4]<<"  #  "<<tic[5]<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"     #################"<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"       "<<tic[6]<<"  #  "<<tic[7]<<"  #  "<<tic[8]<<endl;
    cout<<"          #     #     "<<endl;
    
    
    cout<<endl<<endl<<endl<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"       "<<use[0]<<"  #  "<<use[1]<<"  #  "<<use[2]<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"     #################"<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"       "<<use[3]<<"  #  "<<use[4]<<"  #  "<<use[5]<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"     #################"<<endl;
    cout<<"          #     #     "<<endl;
    cout<<"       "<<use[6]<<"  #  "<<use[7]<<"  #  "<<use[8]<<endl;
    cout<<"          #     #     "<<endl;
    
    
    a=getch();
   switch (a)
   {
  	case 1:
   		break;
   	case 2:
   		break;
   	case 3:
	   break;
	case 4:
	   break;
	case 5:
		break;
    case 6:
    	break;
    case 7:
    	break;
   	case 9:
   		break;
   	default goto begin;
   	    break;
   	
   	
   }
    
    system("cls"); 
    
     for(int i=0;i<9;i++)
    {
    	if(tic[i]==a)
    	{
    	  use[i]=disp;
    	  chk[i]=disp;
    	  goto out;
    	}
    }
          out:
    if (chk[0]==chk[1] && chk[1]==chk[2]) {
    cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[3]==chk[4] && chk[4]==chk[5]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[6]==chk[7] && chk[7]==chk[8]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[0]==chk[3] && chk[3]==chk[6]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[1]==chk[4] && chk[4]==chk[7]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[2]==chk[5] && chk[5]==chk[8]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[0]==chk[4] && chk[4]==chk[8]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	if (chk[2]==chk[4] && chk[4]==chk[6]) {
	cout<<endl<<"    "<<disp<<" WINS !";
	goto over;}
	 	
    goto begin;
   over:
    cout<<endl<<"    Game Over "<<endl<<endl<<"    Press R to start over or any key to exit ";
    a=getch();
    if(a=='r' || a=='R') goto start;

    return 0;
    
     
     
     
     
     
     
	
}
