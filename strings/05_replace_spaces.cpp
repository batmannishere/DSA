#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	int old= str.size();
	int spacecount=0;
	for(int i=0;i<old;i++){
		if(str[i]==' '){
			spacecount++;
		}
	}
	int newsize = old + spacecount*2;
	str.resize(newsize);
	int x=old-1;
	int y=newsize-1;
	while(x>=0){
		if(str[x]==' '){
			str[y]= '0';
			str[y-1]= '4';
			str[y-2]= '@';
			x--;
			y=y-3;
		}
		else{
			str[y]=str[x];
			x--;
			y--;
		}
	}
	return str;

}