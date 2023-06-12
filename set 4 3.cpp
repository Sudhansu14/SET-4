#include<iostream>
#include<string.h>

using namespace std;

class Hotal
{
    public:
	int id;
	char name[100];	
	char type[100];  
	int staff__size;
	int room__size;
	int establish_year;
	char address[100]; 
	char rating_type[100]; 
	char website[100];
	

		void setData(int id,char name[],char type[],int staff__size,int room__size,int establish_year,char address[], char rating_type[], char website[])
		{
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff__size;
			this->room__size;
			this->establish_year;
			strcpy(this->address,address);
			this->rating_type,rating_type;
			strcpy(this->website,website);
		}

        void getData()
        {
        	cout<<"id="<<id<<endl
		    <<"name="<<name<<endl
		    <<"type="<<type<<endl
		    <<"staff_size="<<staff_size<<endl
		    <<"room_size="<<room_size<<endl
		    <<"establish_year="<<establish_year<<endl
		    <<"address="<<address<<endl
		    <<"rating_typr="<<rating_typr<<endl
		    <<"website="<<website<<endl;
		}


};
int main()
{
	Hotal h1;
	
	h1.setData(105,"taj hotal","veg",500,1500,1902,"mumbai","5 star";"www.taj hotal.com");
	
	h1.getData();
	return 0;
	
}

