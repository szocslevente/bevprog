#include "std_lib_facilities.h"
int main()
{
	double szam;
	double sum=0;
	vector<double> vektor;
	string egyseg;
	cout<<"Admissible formats are: cm, in, ft, m.\n";
	cout<<"Examples: '11m', '86in', '61ft', '2cm'.\n";

while(egyseg!="|")
	{
		cout<<"To exit type in '|'.To continue press any letter.\n";
		cin>>egyseg;
			if (egyseg=="|")
				break;
		cout<<"Please give a number.\n";
		cin>>szam;	
		cout<<"Plese give a unit (cm,m,ft,in).\n";
		cin>>egyseg;
		while (egyseg!="cm" && egyseg!="m" && egyseg!="ft" && egyseg!="in" && egyseg!="|")
			{
				cout<<"Illegal format. Please write admissible (m,cm,ft,in) formats.\n";
				cin>>egyseg;
			}
			 if (egyseg=="m")
		{
			szam=szam;
		}
		else
			if (egyseg=="cm")
		{
				szam=szam/100;
		}
		else
			if (egyseg=="ft")
		{
				szam=szam*0.254;
		}
		else
			if (egyseg=="in")
		{
				szam=szam*0.3048;
		}
		vektor.push_back(szam);
		sum+=szam;
		
}
double min=0;
for (int i=1;i<vektor.size();i++)
	{
		if(vektor[i]<vektor[min])
			{
				min=i;
			}
	}

double max=0;
for (int i=1;i<vektor.size();i++)
	{
		if(vektor[i]>vektor[max])
			{
				max=i;
			}
	}

sort(vektor);
cout << "Sorted values: \n";

for (int i=0; i<vektor.size(); i++){
	cout<<vektor[i]<<"m, \n";
	}
cout<<"Sum of the value is: "<<sum<<" m\n";
cout<<"The largest value is: "<<vektor[max]<<" m\n";
cout<<"The smallest value is:"<<vektor[min]<<" m\n";
cout<<"You gave "<<vektor.size()<<" numbers.\n";
return 0;
}
