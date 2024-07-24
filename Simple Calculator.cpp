#include<iostream>
#include<cmath>

using namespace std;

void arithmetic(){
	int op = 0;
	float A = 0;
	float B = 0;
	//SyedAhmedHaroon
	
	cout<<"Select opeartion\n";
	cout<<"[1] Addition\n";
	cout<<"[2] Substraction\n";
	cout<<"[3] Product\n";
	cout<<"[4] Division\n";

	cin>>op;
	cout<<"Enter the number:";
	cin>>A;

	cout<<"Enter second number:";
	cin>>B;

	cout<<"Result: ";

	switch(op){
		case 1:
			cout<<(A+B);
			break;
		case 2:
			cout<<(A-B);
			break;
		case 3:
			cout<<(A*B);
			break;
		case 4:
			cout<<(A/B);
			break;
		default:
			cout<<"Invalid operation";
			break;
	}
	cout<< endl;
}



int main(){
	int sel = 0;
	char choice = 'y';
	cout<<"====Calculator App(Advance)====\n";

	cout<<"[1] Arithmetic\n";
	cout<<"[2] Trigonometric\n";
	cout<<"[3] Exponential\n";
	cout<<"[4] Logarithmic\n";
	cout<<"Your choice:";

	while(choice == 'y'){
		cout<<"Enter the type of operation you want to calculate\n";
		cin>>sel;

		switch(sel){
			case 1:
				arithmetic();
				break;
			
			default:
				cout<<"Invalid Operation";
		}

		cout<<"Do you want to continue? y/n"<<endl;
		cin>>choice;
		if(choice == 'n'){
			break;
		}
	}
	return 0;
}
