#include<iostream>
#include <windows.h>
using namespace std;
void sleeper()
{
	Sleep( 5000 );
}
int main()
{
		bool cont=true;
	long double n;
	int temp=0,bill,counts=0;
	char charr;
	bool again;
	char drinks[5]={'c','b','l','g','s'},ch;
	float cost[5]={25,25,25,40,40};
	int amount[5]={20,20,20,20,20};


		system("cls");
	do{

	cout<<"                             DRINK NAMES                  COST              NUMBER IN MACHINE\n\n"
	    <<"Press 'c' to Buy:               COLA                       25$                    "<<amount[0]<<endl
		<<"Press 'b' to Buy:            ROOT BEER                     25$                    "<<amount[1]<<endl
		<<"Press 'l' to Buy:            LEMON-LIME                    25$                    "<<amount[2]<<endl
		<<"Press 'g' to Buy:            GRAPE SODA                    40$                    "<<amount[3]<<endl
		<<"Press 's' to Buy:            CREAM SODA                    40$                    "<<amount[4]<<endl<<endl<<endl;
	cout<<"Or press 'q' to QUIT \n";
	cout<<"ENTER:";
	cin>>ch;
		if(ch=='c'||ch=='b'||ch=='l'||ch=='g'||ch=='s'||ch=='q'){

	cout<<"\n\n";
	system("cls");
		while (cont)
	{
		if(counts!=0){
			system("cls");
		cout<<"                          DRINK NAMES                  COST             NUMBER IN MACHINE\n\n"
	    <<"Press 'c' to Buy:                COLA                       25$                    "<<amount[0]<<endl
		<<"Press 'b' to Buy:             ROOT BEER                     25$                    "<<amount[1]<<endl
		<<"Press 'l' to Buy:             LEMON-LIME                    25$                    "<<amount[2]<<endl
		<<"Press 'g' to Buy:             GRAPE SODA                    40$                    "<<amount[3]<<endl
		<<"Press 's' to Buy:             CREAM SODA                    40$                    "<<amount[4]<<endl<<endl<<endl;
		cout<<"\n\nyour money left is "<<n<<"$"<<"\n\n";
	cout<<"\nOr press 'q' to QUIT \n";
	cout<<"ENTER:";
	cin>>ch;
	cout<<"\n\n";

		}



	switch (ch)
	{

		case 'c':	if(amount[0]!=0)
					{
						if(counts==0||n<=40)
						{
					cout<<"Enter Money :";
					cin>>n;
				}
					system("cls");
					cout<<"HOW MANY DO YOU WANT :";
					cin>>temp;


							if(temp<=amount[0]&&n>=25*temp){
						amount[0]=amount[0]-temp;
						bill=25*temp;
						n=n-bill;
					}
					else if(temp>amount[0]||n<25*temp){
						cout<<"\n\n\n\n\n                                 !!!SORRY NOT ENOUGH MONEY!!!" ;
						sleeper();
						counts++;
						break;
					}


					cout<<"\n\n\n";




						cout<<"                                 !!ENJOY YOUR DRINK!!\n\n";
					    cout<<"                                        _____   \n";
					    cout<<"                                        |   |   \n";
						cout<<"                                        |   |   \n";
						cout<<"                                       <     >  \n";
					    cout<<"                                      |       | \n";
						cout<<"                                      | COLA  | \n";
					    cout<<"                                      |       | \n";
						cout<<"                                      [_______] \n\n\n\n";
						cout<<"Your change :"<<n<<endl<<endl<<endl<<endl<<endl;


					sleeper();

					cout<<"to quit enter q or to buy more enter y:\n";
					cin>>charr;
					if(charr=='q')
					{
						return 0;
					}
					else if(charr=='y')
					{
						counts++;

						break;
					}

				}



							if(amount[0]<=0)
						{
							cout<<"                                    !ALL OUT OF STOCK!\n\n\n\n\n";
							sleeper();
							break;
						}
	case 'b':	if(amount[1]!=0){
			if(counts==0||n<=40)
						{
					cout<<"Enter Money :";
					cin>>n;
				}
		             system("cls");
					cout<<"HOW MANY DO YOU WANT :";
					cin>>temp;


							if(temp<=amount[1]&&n>=25*temp){
						amount[1]=amount[1]-temp;
						bill=25*temp;
						n=n-bill;
					}
					else if(temp>amount[1]||n<25*temp){
						cout<<"\n\n\n\n\n                                    !!!SORRY NOT ENOUGH MONEY!!!" ;
						sleeper();
						counts++;
						break;
					}




						cout<<"                                        !!ENJOY YOUR DRINK!!\n\n";
						cout<<"                                               ~~~~~~\n";
						cout<<"                                               |    |\n";
						cout<<"                                               |    |\n";
						cout<<"                                              <      >\n";
						cout<<"                                              | BEER |\n";
						cout<<"                                             <        >\n";
						cout<<"                                             |        |\n";
						cout<<"                                             [________]\n\n\n";
						cout<<"Your change :"<<n<<endl<<endl<<endl<<endl<<endl;


						sleeper();

                	cout<<"to quit enter q or to buy more enter y:\n";
					cin>>charr;
					if(charr=='q')
					{
						return 0;
					}
					else if(charr=='y')
					{
						counts++;

					break;
						}
			}
							if(amount[1]<=0)
						{
							cout<<"                                      !ALL OUT OF STOCK!\n\n\n\n\n";
							sleeper();
							break;
					    }

		case 'l':	if(amount[2]!=0)
					{
							if(counts==0||n<=40){
					cout<<"Enter Money :";
					cin>>n;
				}
				system("cls");
					cout<<"HOW MANY DO YOU WANT :";
					cin>>temp;


							if(temp<=amount[2]&&n>=25*temp){
						amount[2]=amount[2]-temp;
						bill=25*temp;
						n=n-bill;
					}
					else if(temp>amount[2]||n<25*temp){
						cout<<"\n\n\n\n\n                                  !!!SORRY NOT ENOUGH MONEY!!!" ;
						sleeper();
						counts++;
						break;
					}
						cout<<"                                            !!ENJOY YOUR DRINK!!\n\n";
						cout<<"                                                ___________       \n";
						cout<<"                                               [           ]      \n";
						cout<<"                                               [           ]----] \n";
						cout<<"                                               [ LAMONADE  ]    ] \n";
						cout<<"                                               [           ]----] \n";
						cout<<"                                               [___________]      \n\n\n";
						cout<<"Your change :"<<n<<endl<<endl<<endl<<endl<<endl;


						sleeper();

						 cout<<"to quit enter q or to buy more enter y:\n";
					cin>>charr;
					if(charr=='q')
					{
						return 0;
					}
					else if(charr=='y')
					{
						counts++;
							break;

						break;
						}
			}
						if(amount[2]<=0)
						{
							cout<<"                                      !ALL OUT OF STOCK!\n\n\n\n\n";
							sleeper();
							break;
						}



			case 'g':	if(amount[3]!=0)
					{
						if(counts==0||n<=40){
				 	cout<<"Enter Money :";
					cin>>n;
				}
				system("cls");
					cout<<"HOW MANY DO YOU WANT :";
					cin>>temp;


							if(temp<=amount[3]&&n>=40*temp){
						amount[3]=amount[3]-temp;
						bill=40*temp;
						n=n-bill;
					}
					else if(temp>amount[3]||n<40*temp){
						cout<<"\n\n\n\n\n                                !!!SORRY NOT ENOUGH MONEY!!!" ;
						sleeper();
						counts++;
						break;
					}
						cout<<"                                           !!ENJOY YOUR DRINK!!\n\n";
						cout<<"                                               ___________ \n";
						cout<<"                                              <           >\n";
						cout<<"                                              <           >\n";
						cout<<"                                              <  GRAPE    >\n";
						cout<<"                                              <     SODA  >\n";
						cout<<"                                              <           >\n";
						cout<<"                                               *********** \n\n\n";
						cout<<"Your change :"<<n<<endl<<endl<<endl<<endl<<endl;

					sleeper();

					cout<<"to quit enter q or to buy more enter y:\n";
					cin>>charr;
					if(charr=='q')
					{
						return 0;
					}
					else if(charr=='y')
					{
						counts++;
						break;

					}
			}
						if(amount[3]<=0)
						{
							cout<<"                                      !ALL OUT OF STOCK!\n\n\n\n\n";
                             sleeper();
							break;
					    }

			case 's':	if(amount[4]!=0)
					{
						if(counts==0||n<=40){
				 	cout<<"Enter Money :";
					cin>>n;
				}
				system("cls");
					cout<<"HOW MANY DO YOU WANT :";
					cin>>temp;


							if(temp<=amount[4]&&n>=40*temp){
						amount[4]=amount[4]-temp;
						bill=40*temp;
						n=n-bill;
					}
					else if(temp>amount[4]||n<40*temp){
						cout<<"\n\n\n\n\n                                   !!!SORRY NOT ENOUGH MONEY!!!" ;
						sleeper();
						counts++;
						break;
					}
						cout<<"                                             !!ENJOY YOUR DRINK!!\n\n\n";
						cout<<"                                                   *********\n";
						cout<<"                                                   ~~~~~~~~~\n";
						cout<<"                                                  {         }\n";
						cout<<"                                                  {  CREAM  }\n";
						cout<<"                                                  |    SODA |\n";
						cout<<"                                                  {         }\n";
						cout<<"                                                  [_________]\n\n\n";
						cout<<"Your change :"<<n<<endl<<endl<<endl<<endl<<endl;

						sleeper();

					cout<<"to quit enter q or to buy more enter y:\n";
					cin>>charr;
					if(charr=='q')
					{
						return 0;
					}
					else if(charr=='y')
					{
						counts++;

						break;
					 }
		}
						if(amount[4]<=0)
						{
							cout<<"                                           !ALL OUT OF STOCK!\n\n\n\n\n";
							sleeper();
							break;
						}


		case 'q':{
			cont=false;
			break;
             		}
             	}
}
}
else
{
		cout<<"\n\n\n\n           Please follow the instructions.";
	sleeper();
	system("CLS");
}
}
while(cont);

}


