#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int rock=1;
	int paper=2;
	int scissor=3;
	string playerName;
	
	
	int ans;
  srand(time(0));
		
				
	int gameGuess1=(rand() % 2) +1;
	int gameGuess2=(rand() % 1) +2;
	int gameGuess3=(rand() % 2) +1;
	
	//welcome to the game
	cout<<"ROCK-PAPER-SCISSOR GAME"<<endl;
	cout<<"welcome to the game"<<endl;
	cout<<"Rock= "<< rock <<endl;
	cout<<"Paper= "<< paper <<endl;
	cout<<"Scissor= "<< scissor<<endl;
	cout<<endl;
	cout<<endl<<endl;
	cout<<"Instruction: when the computer says 'rock-paper-scissor', you must input your answer using the numbers that indicate rock, paper or scissor"<<endl;
	cout<<"Also note that this game is between you and the computer and your input for each round must be different"<<endl;
	cout<<endl<<endl;
	cout<<"Enter your name: ";
	cin>>playerName;
	cout<<"______________________________________________________________________________________"<<endl;
	cout<<"ROUND ONE:"<<endl;
	
	cout<<"rock-paper-scissors: ";
	cin>>ans;
	if (ans==1 && gameGuess1==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==1 && gameGuess1==1)
	{ 
	cout<<"the ans you inputed is: "<< ans << "for rock"<<endl;
		cout<<"the ans the compute guess is: "<< gameGuess1 << "for rock"<<endl;
		cout<<" it is a tie"<<endl;
		}
		else if (ans==1 && gameGuess1==2)
		{
			cout<<"the ans you inputed is: "<< ans <<" for rock"<<endl;
		cout<<"the ans the compute guess is: "<< gameGuess1 <<" for paper"<<endl;
		cout<<"computer wins as paper covers rock"<<endl;
		cout<<playerName <<" lost"<<endl;
		}
		else if (ans==1 && gameGuess1==3)
		{
			cout<<" the ans you inputed is: "<< ans <<" for rock"<<endl;
			cout<<" the ans the computer guessed is: "<< gameGuess1 <<" for scissor"<<endl;
			cout<<playerName <<" wins as rock beats scissors"<<endl;
			cout<<" computer lost"<<endl;
		}
	
	//if the user inputed 2 for paper
		if (ans==2 && gameGuess1==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==2 && gameGuess1==1)
	{ 
	cout<<"the ans you inputed is: "<< ans<< "for paper"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess1<<"for rock"<<endl;
		cout<<playerName <<" wins as paper covers rock"<<endl;
		cout<<"computer lost"<<endl;
		}
		else if (ans==2 && gameGuess1==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for paper "<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess1<<" for paper"<<endl;
		cout<<"it is a tie"<<endl;
		}
		else if (ans==2 && gameGuess1==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for paper"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess1<<" for scissor"<<endl;
			cout<<" computer wins as scissor cuts paper"<<endl;
			cout<<playerName<<" lost"<<endl;
		}
		
		//if the user inputed 3 for scissor
		if (ans==3 && gameGuess1==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==3 && gameGuess1==1)
	{ 
	cout<<"the ans you inputed is: "<<ans<<" for scissors"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess1<<"for rock"<<endl;
		cout<<" computer wins as rock beats scissor"<<endl;
		cout<<playerName<<" lost"<<endl;
		}
		else if (ans==3 && gameGuess1==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for scissor "<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess1<<" for paper"<<endl;
		cout<<playerName<<" wins as scissor cuts paper"<<endl;
		cout<<"computer lost"<<endl;
		}
		else if (ans==3 && gameGuess1==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for scissor"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess1<<" for scissor"<<endl;
			cout<<" it is a tie"<<endl;
		}
			cout<<" ROUND ONE OVER"<<endl<<endl;
			cout<<"______________________________________________________________________________________"<<endl<<endl;
			
			//round two
	cout<<"______________________________________________________________________________________"<<endl;
	cout<<"ROUND TWO:"<<endl;
	
	cout<<"rock-paper-scissors: ";
	cin>>ans;
	if (ans==1 && gameGuess2==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==1 && gameGuess2==1)
	{ 
	cout<<"the ans you inputed is: "<<ans<< "for rock"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess2<< "for rock"<<endl;
		cout<<" it is a tie"<<endl;
		}
		else if (ans==1 && gameGuess2==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for rock"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess2<<" for paper"<<endl;
		cout<<"computer wins as paper covers rock"<<endl;
		cout<<playerName <<" lost"<<endl;
		}
		else if (ans==1 && gameGuess2==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for rock"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess2<<" for scissor"<<endl;
			cout<<playerName <<" wins as rock beats scissors"<<endl;
			cout<<" computer lost"<<endl;
		}
	
	//if the user inputed 2 for paper
		if (ans==2 && gameGuess2==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==2 && gameGuess2==1)
	{ 
	cout<<"the ans you inputed is: paper"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess2<<endl;
		cout<<playerName <<" wins as paper covers rock"<<endl;
		cout<<"computer lost"<<endl;
		}
		else if (ans==2 && gameGuess2==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for paper "<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess2<<" for paper"<<endl;
		cout<<"it is a tie"<<endl;
		}
		else if (ans==2 && gameGuess2==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for paper"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess2<<" for scissor"<<endl;
			cout<<" computer wins as scissor cuts paper"<<endl;
			cout<<playerName<<" lost"<<endl;
		}
		
		//if the user inputed 3 for scissor
		if (ans==3 && gameGuess2==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==3 && gameGuess2==1)
	{ 
	cout<<"the ans you inputed is: "<<ans<<" for scissors"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess2<<"for rock"<<endl;
		cout<<" computer wins as rock beats scissor"<<endl;
		cout<<playerName<<" lost"<<endl;
		}
		else if (ans==3 && gameGuess2==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for scissor "<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess2<<" for paper"<<endl;
		cout<<playerName<<" wins as scissor cuts paper"<<endl;
		cout<<"computer lost"<<endl;
		}
		else if (ans==3 && gameGuess2==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for scissor"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess2<<" for scissor"<<endl;
			cout<<" it is a tie"<<endl;
		}
			cout<<" ROUND TWO OVER"<<endl<<endl;
			cout<<"______________________________________________________________________________________"<<endl<<endl;	
	
	//round three
	cout<<"ROUND THREE:"<<endl;
	
	cout<<"rock-paper-scissors: ";
	cin>>ans;
	if (ans==1 && gameGuess3==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==1 && gameGuess3==1)
	{ 
	cout<<"the ans you inputed is: "<<ans<< "for rock"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess3<< "for rock"<<endl;
		cout<<" it is a tie"<<endl;
		}
		else if (ans==1 && gameGuess3==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for rock"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess3<<" for paper"<<endl;
		cout<<"computer wins as paper covers rock"<<endl;
		cout<<playerName <<" lost"<<endl;
		}
		else if (ans==1 && gameGuess3==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for rock"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess3<<" for scissor"<<endl;
			cout<<playerName <<" wins as rock beats scissors"<<endl;
			cout<<" computer lost"<<endl;
		}
	
	//if the user inputed 2 for paper
		if (ans==2 && gameGuess3==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==2 && gameGuess3==1)
	{ 
	cout<<"the ans you inputed is: "<< ans << " for paper"<<endl;
		cout<<"the ans the compute guess is: "<< gameGuess3 <<" for rock"<<endl;
		cout<<playerName <<" wins as paper covers rock"<<endl;
		cout<<"computer lost"<<endl;
		}
		else if (ans==2 && gameGuess3==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for paper "<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess3<<" for paper"<<endl;
		cout<<"it is a tie"<<endl;
		}
		else if (ans==2 && gameGuess3==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for paper"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess3<<" for scissor"<<endl;
			cout<<" computer wins as scissor cuts paper"<<endl;
			cout<<playerName<<" lost"<<endl;
		}
		
		//if the user inputed 3 for scissor
		if (ans==3 && gameGuess3==0)
	{
		cout<<"invalid"<<endl;
	}
	else if(ans==3 && gameGuess3==1)
	{ 
	cout<<"the ans you inputed is: "<<ans<<" for scissors"<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess3<<"for rock"<<endl;
		cout<<" computer wins as rock beats scissor"<<endl;
		cout<<playerName<<" lost"<<endl;
		}
		else if (ans==3 && gameGuess3==2)
		{
			cout<<"the ans you inputed is: "<<ans<<" for scissor "<<endl;
		cout<<"the ans the compute guess is: "<<gameGuess3<<" for paper"<<endl;
		cout<<playerName<<" wins as scissor cuts paper"<<endl;
		cout<<"computer lost"<<endl;
		}
		else if (ans==3 && gameGuess3==3)
		{
			cout<<" the ans you inputed is: "<<ans<<" for scissor"<<endl;
			cout<<" the ans the computer guessed is: "<<gameGuess3<<" for scissor"<<endl;
			cout<<" it is a tie"<<endl;
		}
			cout<<" ROUND THREE OVER"<<endl;
			cout<<"______________________________________________________________________________________"<<endl;	
	return 0;
}
