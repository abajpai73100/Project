#include<iostream>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
class KBC
{
	public:
	string questions[10]={"SSD stands for what?",
				"HTML is which of the following language?",
				"Dave Mustaine was former member of which metal band from which he was thrown out lately?",
				"Who among the following is the animal who is from ice age era?",
                "When did FLEA(bassist of RED HOT CHILI PEPPERS) released his first book ACID FOR THE CHILDREN?",
                "When is name of the new TOOL album they released in 2019?",
                "Which of the following snake is cannibal(animal who eats flesh of another animal of same species)",
                "Which of the following programming languaage uses interpreter to execute a program?",
				"Which of the following primate is carnivorous?",
				"Who among the following is BLUES guitarist?"};
    string right[10]={"SOLID STATE DRIVE","MARK UP LANGUAGE","METALLICA","MUSK OX","2019","FEAR INNOCULUM","KING COBRA","Python","TARSIER","BB KING"};
    string other1[10]={"SINGLE STATE DISK","PROGRAMMING LANGUAGE","EXODUS","MUSK OX","2018","LATARALUS","RAT SNAKE","Python","CHIMPANZEE","SLASH"};
    string other2[10]={"SOLID STANDARD DRIVE","MARK UP LANGUAGE","SLIPKNOT","ZORSE","2019","10000 DAYS","COTTON MOUTH","C","ORANGUTANS","BB KING"};
	string other3[10]={"SOLID STATE DRIVE","WEB DEVOPMENT LANGUAGE","METALLICA","GOAT","2010","FEAR INNOCULUM","BLACK MAMBA","Java","TARSIER","JIMMY PAGE"};
    string other4[10]={"STANDARD STATE DRIVE","QUERY LANGUAGE","JUDAS PRIEST","SNAKE","2000","UNDERTOW","KING COBRA","C++","HOWLER MONKEYS","GARY HOLT"};
    int prizeq[10]={10000,50000,100000,200000,400000,5000000,6000000,7000000,8500000,10000000};
    string li[3]={"fifty-fifty","flip the question","double dip"};
    char ch;
    int fiftycount=0,flipcount=0,doubledipcount=0,flag=0,lifecount=0;
    void askques()
    {
    	cout<<"				                                        ****************"<<endl;
    	cout<<"				                                        !!WELCOME TO KBC!!"<<endl;
    	cout<<"				                                        ****************"<<endl<<endl;
	    for(int i=0;i<10;i++)
	    {
	    	cout<<i+1<<".)"<<questions[i]<<endl;
	    	cout<<"a.) "<<other1[i]<<"\t\t"<<"b.) "<<other2[i]<<endl;
	    	cout<<"c.) "<<other3[i]<<"\t\t"<<"d.) "<<other4[i]<<endl<<endl;
	    	cout<<                                              "Enter 'l' To Use Lifeline"<<endl;
	    	cout<<                                              "Enter 'q' To Quit The Game"<<endl;
	    	if(i<3)
	    	{
			clock_t t;
			cout<<"         ------------------------------------------------------"<<endl;
	    	cout<<"         !!!NOTE:YOU HAVE 30 SECONDS TO ANSWER THIS QUESTION!!!"<<endl;
	    	cout<<"         -------------------------------------------------------"<<endl;
			cout<<"Enter Your Choice"<<endl;
	    	t=clock();
			cin>>ch;
	    	t=clock()-t;
	    	double time_taken=((double)(t)/CLOCKS_PER_SEC);
	    	if(time_taken>30)
	    	{
	    		cout<<"TIME TAKEN:"<<time_taken<<endl;
	    		cout<<"YOU EXCEEDED TIME LIMIT"<<cout;
	    		final(i);
	    	}
	    	}
	    	else
	    	if(i>2&&i<7)
	    	{
	    	clock_t t;
	    	cout<<"         -------------------------------------------------------"<<endl;
	    	cout<<"         !!!NOTE:YOU HAVE 60 SECONDS TO ANSWER THIS QUESTION!!!"<<endl;
			cout<<"         -------------------------------------------------------"<<endl;
			cout<<"Enter Your Choice"<<endl;
	    	t=clock();
			cin>>ch;
	    	t=clock()-t;
	    	double time_taken=((double)(t)/CLOCKS_PER_SEC);
	    	if(time_taken>60)
	    	{
	    		cout<<"TIME TAKEN:"<<time_taken<<endl;
	    		cout<<"YOU EXCEEDED TIME LIMIT"<<cout;
	    		final(i);
	    	}
	    	}
	    	else
	    	{
	    		cout<<"Enter Your Choice"<<endl;
	    		cin>>ch;
	    	}
	    	if(ch=='a')
	    	{
	    		if(other1[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(ch=='b')
	    	{
	    		if(other2[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(ch=='c')
	    	{
	    		if(other3[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(ch=='d')
	    	{
	    		if(other4[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(ch=='l')
	    	{
	    		lifeline(i);
	    	}
	    	else
	    	if(ch=='q')
	    	{
	    		quit(i);
	    	}
	    	else
            {
                cout<<"#########################################INVALID CHOICE#########################################"<<endl;
                exit(0);
            }
	    	system("pause");
	    	system("cls");
	    }
	}
	void quit(int n)
	{
		cout<<"                                                   !!!!YOU QUIT THE GAME!!!!                                "<<endl;
		if(n>=2)
		{
			cout<<"you won "<<prizeq[n-1]<<endl;
			exit(0);
		}
		else
		cout<<"you didn't won any amount"<<endl;
		exit(0);
	}
	void prize(int n)
	{
		if(n>=3)
		{
		cout<<"___________________________________"<<endl;
		cout<<"*****CONGRATULATIONS!! YOU WON***** "<<prizeq[n]<<endl;
		cout<<"___________________________________"<<endl<<endl;
		}
		else
		{
			cout<<endl<<"!!!!!CORRECT ANSWER!!!!!"<<endl;
		}
		if(prizeq[n]==10000000)
		{
			cout<<"YOU ARE THE WINNER"<<endl;
			exit(0);
		}
	}
	void final(int n)
	{
		if(n>3)
		{
			cout<<"                                     !!!!SORRY YOU ANSWER IS INCORRECT!!!!                                      "<<endl;
			cout<<"you won "<<prizeq[3]<<endl;
			exit(0);
		}
		else
		{
			cout<<"                                     !!!!YOU DIDN'T WON ANY AMOUNT!!!!                                            "<<endl;
			exit(0);
		}
	}
	void lifeline(int n)
	{
		if(lifecount<3)
		{
			while(1)
			{
				cout<<"YOUR LIFELINES ARE AS FOLLOWS"<<endl;
				int k=1,chli;
				for(int i=0;i<3;i++)
				{
					cout<<k++<<".) "<<li[i]<<endl;
				}
				cout<<"Enter Your Choice For Lifeline"<<endl;
				cin>>chli;
				if(chli==1)
				{
					if(fiftycount==0)
					{
						fifty(n);
						fiftycount++;
						lifecount++;
						break;
					}
					else
					{
						cout<<"SORRY YOU ALREADY USED THIS LIFELINE ";
						continue;
					}
				}
				else
				if(chli==2)
				{
					if(flipcount==0)
					{
						flip(n);
						flipcount++;
						lifecount++;
						break;
					}
					else
					{
					cout<<"SORRY YOU ALREADY USED THIS LIFELINE ";
					continue;
					}
				}
				else
				if(chli==3)
				{
					if(doubledipcount==0)
					{
						doubledip(n);
						doubledipcount++;
						lifecount++;
						break;
					}
					else
					{
						cout<<"SORRY YOU ALREADY USED THIS LIFELINE ";
						continue;
					}
				}
			}
		}
		else
		{
			cout<<"YOU HAVE USED ALL YOUR LIFELINE PRIVILEGES"<<endl;
			askquesrep(n);
		}
	}
	void askquesrep(int i)
	{
			cout<<questions[i]<<endl;
	    	cout<<"a.) "<<other1[i]<<endl;
	    	cout<<"b.) "<<other2[i]<<endl;
	    	cout<<"c.) "<<other3[i]<<endl;
	    	cout<<"d.) "<<other4[i]<<endl;
	    	char choose;
	    	cout<<"enter your choice"<<endl;
	    	cin>>choose;
	    	if(choose=='a')
	    	{
	    		if(other1[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(choose=='b')
	    	{
	    		if(other2[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(choose=='c')
	    	{
	    		if(other3[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	    	else
	    	if(choose=='d')
	    	{
	    		if(other4[i].compare(right[i])==0)
	    		{
	    			prize(i);
	    		}
	    		else
	    		{
	    			final(i);
	    		}
	    	}
	}
	void fifty(int n)
	{
		cout<<"your new options are follows:"<<endl;
		cout<<"a.) "<<right[n]<<endl;
		if(right[n].compare(other3[n])==0)
		cout<<"b.) "<<other1[n]<<endl;
		else
		cout<<"b.) "<<other3[n]<<endl;
		char choice;
		cout<<"enter you choice"<<endl;
		cin>>choice;
		if(choice=='a')
		{
			prize(n);
		}
		else
		{
			final(n);
		}
	}
	void flip(int n)
	{
		cout<<"YOUR NEW QUESTION IS :"<<endl;
		cout<<"In Intel core series the core i5 and i7 both have how many cores in processors"<<endl;
		cout<<"a.) "<<2<<endl;
		cout<<"b.) "<<4<<endl;
		cout<<"c.) "<<8<<endl;
		cout<<"d.) "<<12<<endl;
		char chli;
		cout<<"enter your choice"<<endl;
		cin>>chli;
		if(chli=='b')
		{
			prize(n);
		}
		else
		{
			final(n);
		}
	}
	void doubledip(int n)
	{
		cout<<"CHOOSE ANY TWO OPTIONS"<<endl;
		char cha,chb;
		cin>>cha>>chb;
		if(cha=='a'||chb=='a')
		{
			if(other1[n].compare(right[n])==0)
			{
				prize(n);
				flag++;
			}
		}
		else
		if(cha=='b'||chb=='b')
		{
			if(other2[n].compare(right[n])==0)
			{
				prize(n);
				flag++;
			}
		}
		else
		if(cha=='c'||chb=='c')
		{
			if(other3[n].compare(right[n])==0)
			{
				prize(n);
				flag++;
			}
		}
		else
		if(cha=='d'||chb=='d')
		{
			if(other4[n].compare(right[n])==0)
			{
				prize(n);
				flag++;
			}
		}
		if(flag==0)
		{
			final(n);
		}
	}
};
int main()
{
KBC x;
x.askques();
return 0;
}
