#include<iomanip>
#include<iostream>
#include<cstdlib>
#include <map>
#include <string.h>

using namespace std;

int main(){
	map<char,double>music;
	map<char,double>::iterator it;
	string nots;
	int max,i,j;
	double cont=0;

	music.insert(pair<char,double>('W',1));
 	music.insert(pair<char,double>('H',0.5));
	music.insert(pair<char,double>('Q',0.25));
	music.insert(pair<char,double>('E',0.125));
	music.insert(pair<char,double>('S',0.0625));
	music.insert(pair<char,double>('T',0.03125));
	music.insert(pair<char,double>('X',0.015625));

	do{
		cin>>nots;
		max=0;
		if(nots[0]!='*'){
			for(i=1;i<nots.length();i++){
				if(nots[i]!='/'){
					it=music.find(nots[i]);
					cont+=it->second;
					}
				else if(nots[i]=='/'){
					if(cont==1){
						max++;
					}
						cont=0;
				}
			}
			cout<<max<<endl;
		}
	}while(nots!="*");


	system("pause");
	return 0;
}
