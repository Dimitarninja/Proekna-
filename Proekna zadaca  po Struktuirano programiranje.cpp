#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;


string  encode(string s,int k){
 
    // smenetiot string na kraj
    string newS;
 
    // za sekoj karakter
    for(int i=0; i<s.length(); ++i)
    {
        // ASCII value
        int val = int(s[i]);
 
        // za duplikatite
        int dup = k;
   
       // zgolemi go sekoj karakter za k
        newS += char(val + k);
 
        k = dup;
    }
 
    // pecati go noviot string
   // cout<<newS;
    return newS;
}


string  decode(string s,int k){
 
    // smenetiot string na kraj
    string newS;
 
    // za sekoj karakter
    for(int i=0; i<s.length(); ++i)
    {
        // ASCII value
        int val = int(s[i]);
 
        // za duplikatite
        int dup = k;
        newS += char(val - k);
 
        k = dup;
    }
 
    // pecati go noviot string
   // cout<<newS;
    return newS;
}

int maxCifra(int broj)
{
	 int  r, largest = 0;

    while (broj > 0) {
        r = broj % 10;
        if (largest < r) {
            largest = r;
        }
        broj = broj / 10;
    }
    cout << "Najgolema cifra vo brojot e: " << largest<<endl;;
    return largest;
}
 
 
int main(){
    string str;
   
    int k, broj,opcija;
    cout<<"Vnesi petcifren pozitiven broj"<<endl;
    cin>>broj;
    
    if(!(broj > 9999 && broj <= 99999))
    {
    	cout<<"Brojot mora da bide 5 cifren"<<endl;
    	return 0;
	}
    
    k = maxCifra(broj);
    
    cout<<"Vnesi string"<<endl;
    cin>>str;
    
    if(str.length()>500)
    {
    	cout<<"Strngot mora da bide so dolzina pomala od 500 karakteri"<<endl;
    	return 0;
	}
    
    
    cout<<"Programata go ima slednoto meni: Vnesi 1 za kodiranje ili 2 za dekodiranje na string"<<endl;
    cin>>opcija;
    if(opcija==1){
    	cout<<"Enkodiraniot string e:  "<<encode(str, k)<<endl;
	}
	if(opcija==2){
		cout<<"Dekodiraniot string e:  "<<decode(str, k)<<endl;
	}
    
    return 0;
}
 