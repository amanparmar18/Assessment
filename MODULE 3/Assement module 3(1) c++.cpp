	#include<iostream>
	using namespace std;
	
	class order
	{
		private:
			string name;
		public:
			order(string n)
			{
				name = n;	
			}	
			void display()
			{
				cout<<"\nHello "<<name<<endl;
				cout<<"\nWhat would like to order?"<<endl;
				cout<<"\n        			---------Menu---------"<<endl;
				cout<<"\n1)Pizza\n2)Burger\n3)Sandwich\n4)Rolls\n5)Biryani "<<endl;
			}
			void variety(int choice)
			{
				int choice1,quantity;
				switch(choice)
				{
					case 1:
						cout<<"\n1) Margherita                Rs 180";
						cout<<"\n2) 7 cheesy                  Rs 280";
						cout<<"\n3) Garlic Bread              Rs 170"<<endl;
	                    up:
						cout<<"\nPlease enter which Pizza would you like to have(1-3): ";
						cin>>choice1;
	                    
				        cout<<"\nPlease enter quantity: ";
				        cin>>quantity;
	
	                    if(choice1==1)
	                    {   
	
	                        cout<<"\nYou have ordered "<<quantity<<" Margherita Pizza(s) for Rs "<<180*quantity<<endl;
	                    }
	                    else if(choice1==2)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" 7 cheesy Pizza(s) for Rs "<<280*quantity<<endl;
	                    }
	                    else if(choice1==3)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Garlic Bread(s) for Rs "<<170*quantity<<endl;
	                    }
	                    else
	                    {
	                        cout<<"\nInvalid choice! Please try again."<<endl;
	                        goto up;
	
	                    }
	
	        
	
					break;
					case 2:
						cout<<"\n1) Aloo Tikki               Rs 100";
						cout<<"\n2) Korean Spicy Burger      Rs 250";
						cout<<"\n3) McPuff              	    Rs 70"<<endl;
	                    up2:
						cout<<"\nPlease enter which Burger would you like to have(1-3): ";
						cin>>choice1;
	                    
				        cout<<"\nPlease enter quantity: ";
				        cin>>quantity;
	
	                    if(choice1==1)
	                    {   
	                        cout<<"\nYou have ordered "<<quantity<<" Aloo Tikki Burger(s) for Rs "<<100*quantity<<endl;
	                    }
	                    else if(choice1==2)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Korean Spicy Burger(s) for Rs "<<250*quantity<<endl;
	                    }
	                    else if(choice1==3)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" McPuff(s) for Rs "<<70*quantity<<endl;
	                    }
	                    else
	                    {
	                        cout<<"\nInvalid choice! Please try again."<<endl;
	                        goto up2;
	
	                    }
	
					break;	
					case 3:
						cout<<"\n1) Club Sandwich                Rs 180";
						cout<<"\n2) Aloo matar Sandwich          Rs 190";
						cout<<"\n3) Veg Sandwich              	Rs 170"<<endl;
	                    up3:
						cout<<"\nPlease enter which Sandwich would you like to have(1-3): ";
						cin>>choice1;
	                    
				        cout<<"\nPlease enter quantity: ";
				        cin>>quantity;
	
	                    if(choice1==1)
	                    {   
	                        cout<<"\nYou have ordered "<<quantity<<" Club Sandwich(es) for Rs "<<180*quantity<<endl;
	                    }
	                    else if(choice1==2)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Aloo matar Sandwich(es) for Rs "<<190*quantity<<endl;
	                    }
	                    else if(choice1==3)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Veg Sandwich(es) for Rs "<<170*quantity<<endl;
	                    }
	                    else
	                    {
	                        cout<<"\nInvalid choice! Please try again."<<endl;
	                        goto up3;
	
	                    }
	
					break;
					case 4:
						cout<<"\n1) Spring Roll               Rs 120";
						cout<<"\n2) Kathi Roll                Rs 159";
						cout<<"\n3) Frankie Roll              Rs 199"<<endl;
	                    up4:
						cout<<"\nPlease enter which Roll would you like to have(1-3): ";
						cin>>choice1;
	                    
				        cout<<"\nPlease enter quantity: ";
				        cin>>quantity;
	
	                    if(choice1==1)
	                    {   
	                        cout<<"\nYou have ordered "<<quantity<<" Spring Roll(s) for Rs "<<120*quantity<<endl;
	                    }
	                    else if(choice1==2)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Kathi Roll(s) for Rs "<<159*quantity<<endl;
	                    }
	                    else if(choice1==3)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Frankie Roll(s) for Rs "<<199*quantity<<endl;
	                    }
	                    else
	                    {
	                        cout<<"\nInvalid choice! Please try again."<<endl;
	                        goto up4;
	
	                    }
					
					break;
					case 5:
						
						cout<<"\n1) Veg Biryani                Rs 229";
						cout<<"\n2) Non-Veg Biryani            Rs 339";
						cout<<"\n3) Hyderabadi Biryani         Rs 299"<<endl;
	                    up5:
						cout<<"\nPlease enter which Biryani would you like to have(1-3): ";
						cin>>choice1;
	                    
				        cout<<"\nPlease enter quantity: ";
				        cin>>quantity;
	
	                    if(choice1==1)
	                    {   
	                        cout<<"\nYou have ordered "<<quantity<<" Veg Biryani(s) for Rs "<<229*quantity<<endl;
	                    }
	                    else if(choice1==2)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Non-Veg Biryani(s) for Rs "<<339*quantity<<endl;
	                    }
	                    else if(choice1==3)
	                    {
	                        cout<<"\nYou have ordered "<<quantity<<" Hyderabadi Biryani(s) for Rs "<<299*quantity<<endl;
	                    }
	                    else
	                    {
	                        cout<<"\nInvalid choice! Please try again."<<endl;
	                        goto up5;
	
	                    }
				
					break;
					default:
						cout<<"\nEnter Valid Number ";
					break;
				}
				
			}
			
			
			
			
	};
	
	int main()
	{
		string name;
		int choice;
		char a;
		cout<<"   			---------Tops Tech. Fast Food---------"<<endl;
		cout<<"\nEnter your name : ";
		getline(cin,name);
		order o1(name);
		do
		{
			o1.display();
			cout<<"\nEnter your choice(1-5): ";
			cin>>choice;
			o1.variety(choice);
			cout<<"Would you like to order again? (Y/N) ";	
			cin>>a;
		}while (a == 'y' || a == 'Y');
			
	}
