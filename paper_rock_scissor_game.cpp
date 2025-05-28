//Stone Paper Scissor or Rock Paper Scissor is a game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string getChoiceName(int choice){
	switch(choice){
		case 1: return "Rock";
		case 2: return "Paper";
		case 3: return "Scissor";
		default : return "Invalid";
	}
}
void determineWinner(int userChoice,int computerChoice){
	cout<<"\nYou choose : "<<getChoiceName(userChoice)<<endl;
	cout<<"Computer Choice : "<<getChoiceName(computerChoice)<<endl;
	if(userChoice == computerChoice){
		cout<<"It's a draw "<<endl;
	}
	else if((userChoice ==1 && computerChoice == 3) || (userChoice == 2 && computerChoice ==1) || (userChoice == 3 && computerChoice == 2)){
	
		cout<<endl<<"You Win!"<<endl;
	}
	else{
		cout<<endl<<"Computer Win!"<<endl;
	}
}
int main(){
	int userChoice;
	char playagain;
	srand(time(0));
	do{
	system("cls");
	cout<<"Welcome to the Rock, Paper & Scissor Game---------"<<endl;
	cout<<"1. Rock \n2. Paper \n3. Scissor"<<endl;
	cout<<"Enter Choice ";
	cin>>userChoice;
	int option;
	if(userChoice<1 || userChoice >3){
		cout<<"Invalid choice "<<endl;
		return 1;
	}
	int computerChoice = (rand()%3)+1;
	determineWinner(userChoice, computerChoice);
	
	cout<<"\nDo you want to play again enter Y or N ";
	cin>>playagain;
	}while(playagain == 'Y' || playagain == 'y');
	cout<<endl<<"Thanks for playing. Goodbye!"<<endl<<endl;
	return 0;
	
}