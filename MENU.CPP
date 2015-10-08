#include<iostream.h>
#include<conio.h>

void showMenu() 
{
	cout << "Menu\n";
	cout << "1 Adobo    \t50\n";
	cout << "2 Chopsuey \t30\n";
	cout << "3 Barbeque \t40\n";
}

int main() 
{
	clrscr();
	int orders[5];
	int position = 0;
	int input = 0;
	char isRepeat = 'y';
	while(isRepeat == 'y') 
	{
		showMenu();
		cout << "What is your order (type the number)? ";
		cin >> input;
		if(input == 1) 
		{
			cout << "You have ordered an Adobo";
			orders[position] = input;
			position++;
		}
		else if(input == 2) 
		{
			cout << "You have ordered an Chopsuey";
			orders[position] = input;
			position++;
		}
		else if(input == 3) 
		{
			cout << "You have ordered an Barbeque";
			orders[position] = input;
			position++;
		}
		else
		{
			cout << "That is an invalid order!";
		}
		
		if(position > 4)
		{
			break;
		}
		
		cout << "\nDo you want to order again? (y/n) ";
		cin >> isRepeat;
	}
	
	int sum = 0;
	for(int x = 0; x < position; ++x)
	{		
		int myOrder = orders[x];
		if(myOrder == 1)
		{
			sum += 50;
			cout<<"You have ordered an Adobo\n";
		}
		else if(myOrder == 2)
		{
			sum += 30;
			cout<<"You have ordered an Chopsuey\n";
		}
		else if(myOrder == 3)
		{
			sum += 40;
			cout<<"You have ordered an Barbeque\n";
		}
		
	}
	cout<<"With a total of "<< sum <<" for " << position <<" item/s";
	getch();
	
	return 0;
}