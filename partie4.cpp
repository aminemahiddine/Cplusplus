//ce travaille a etait realiser par mahiddine mohamed amine
//contact  aminemahiddine.code@gmail.com

#include<iostream>
#include<string>
#include<vector>
using namespace std;



class personne{protected:
    string nom,prof;
    public:
 void print(){
    cout<<nom<<" ,je suis "<<prof<<endl;
}

};



class peintre:public personne{

public:
peintre(string nom){
    this->nom=nom;this->prof = "peintre";
    }
   
peintre(){nom = "nom";prof="peintre";}
};


class macon:public personne{

public:
macon(string nom){
    this->nom=nom;this->prof = "macon";
    }
macon(){nom = "nom";prof="macon";}
};


class plombier:public personne{

public:
plombier(string nom){
    this->nom=nom;this->prof = "plombier";
    }
plombier(){nom = "nom";prof="plombier";}
};


class minuisier:public personne{

public:
minuisier(string nom){
    this->nom=nom;this->prof = "minuisier";
    }
minuisier(){nom = "nom";prof="minuisier";}
};




main(){
int n=5;
personne **tab = new personne*[n];
tab[0]=new peintre("amine");
tab[1]=new plombier("jamel");
tab[2]=new minuisier("kamel");
tab[3]=new macon("brahim");
tab[4]=new peintre("9adour");

for(int i = 0; i < n; i++)
{
    tab[i]->print();
}
 delete[] tab;


// on utilisant la biblioteque stl 
vector<personne*>tab;
tab.push_back(new peintre("mohamed"));
tab.push_back(new plombier("rachid"));
tab.push_back(new minuisier("hafid"));
tab.push_back(new macon("said"));
tab.push_back(new peintre("karim"));
for(int i=0;i<n;i++){
    tab[i]->print();
}


for(int i=0;i<n;i++){
    delete tab[i];
    tab[i]=0;
}


}
