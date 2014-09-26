/*
 * moral.calculator.cxx
 *
 * Copyright 2014 Johnnie Powell <inktitan@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <iostream>
#include <stdlib.h> //for exit(0)


using namespace std;
int main(int argc, char **argv)
{
	char a; int m, n=1;
	m=0;
	cout<<"This program is designed to help place the morality of an action";
	cout<<"\non a scale from -10 to +10. Negative being immoral possitive being moral.";
	cout<<"\nThese questions are asked as if you are performing the act.";
	cout<<"\nIt is not finished and is not recommened to be used over ";
	cout<<"your own natural inclinations."<<endl;
	cout<<"Please use y for yes answers and n for no answers."<<endl;
	cout<<"If the answer is unknown u."<<endl;
	cout<<"Remember to press enter after each entry."<<endl;
	cout<<"\nAre you the only one affected?";
	cin>>a;
	if(a=='y'){cout<<"\nMorailty is neutral.";exit(0);}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nIs it offensive to the majority of people you know or know of?";
	cin>>a;
	if(a=='y')cout<<"\nSo what?! :)\n";
	if(a=='n')cout<<"\nGood for you.\n";n++;
	if(a=='u')m=m+0;
	cout<<"\nCan it cause physical pain to another?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nWill it cause physical pain to another?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='u')m=m+0;
		if(a=='n')m=m+0;n++;

	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nWill it end or alleviate pain?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it be fearful to another?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nWill it cause fear to another?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='u')m=m+0;
		if(a=='n')m=m+0;n++;
	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nWill it end or alleviate fear?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it cause death to another?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nWill it cause death to another?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='n')m=m+0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it save a life?";
	cin>>a;
	if(a=='y')
	{
		m=m+1;
		cout<<"\nWill it save a life?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it save many lives?";
	cin>>a;
	if(a=='y')
	{
		m=m+1;
		cout<<"\nWill it save many lives?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it cause illness?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nWill it cause illness in another?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='n')m=m+0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nWill it prevent disease/illness?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nWill it cure disease/illness?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it cause a physical handicap to another human or animal?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nWill it cause a physical handicap to another human or animal?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='n')m=m+0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it cause emotional trauma to another?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes it make you feel guilty?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nIs it illegal?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nAre you legally obligated to perform this act?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nAre all parties involved able to give consent?";
	cin>>a;
	if(a=='y')
	{
		m=m+1;
		cout<<"\nDo all parties involved give consent?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-1;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m-1;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes the majority benefit?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-1;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes the majority suffer (pain, anxiety, fear, sorrow...)?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes the minority benefit but not the majority?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nWill the minority benefit and no others suffer?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
		cout<<"\nDoes the minority benefit while another or others suffer?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='n')m=m+0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes the minority suffer (pain, anxiety, fear, sorrow...)?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m+1;
	if(a=='u')m=m+0;n++;
	cout<<"\nWill it require you to suffer so that others will beneifit?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nDo you charge money for it?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m+0;
	if(a=='u')m=m+0;n++;
	cout<<"\nDo you accept trade for it?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')
	{
		cout<<"\nDo you give it away for free?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-1;
		if(a=='u')m=m+0;n++;
	}
	if(a=='u')m=m+0;n++;
	cout<<"\nWill you ask for prolonged servitude in exchange for your action?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m+1;
	if(a=='u')m=m+0;n++;
	cout<<"\nAre you compensating the recipient?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-1;
	if(a=='u')m=m+0;n++;
	cout<<"\nWill it aid you in survival?";
	cin>>a;
	if(a=='y')
	{
		m=m+1;
		cout<<"\nIs it necessary for survival?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m-1;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes it distract from progress?";
	cin>>a;
	if(a=='y')m=m-1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes it make you feel good?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nCan it make them 'happy'?";
	cin>>a;
	if(a=='y')
	{
		m=m+1;
		cout<<"\nWill it make them 'happy'?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;

	cout<<"\nWill it aid the healthy progression of the species?";
	cin>>a;
	if(a=='y')m=m+1;
	if(a=='n')
	{
		m=m-0;
		cout<<"\nWill it hinder the healthy progression of the species?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='u')m=m+0;n++;
	cout<<"\nDoes it alter the environment?";
	cin>>a;
	if(a=='y')
	{
		m=m-1;
		cout<<"\nDoes it add pollutants to the environment?";
		cin>>a;
		if(a=='y')m=m-1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
		cout<<"\nDoes it leave the planet in a better state than you found it?";
		cin>>a;
		if(a=='y')m=m+1;
		if(a=='n')m=m-0;
		if(a=='u')m=m+0;n++;
	}
	if(a=='n')m=m-0;
	if(a=='u')m=m+0;n++;
	cout<<"\nMoral grade: "<<m;
	cout<<"\nNumber of questions: "<<n<<endl;
	return 0;
}

