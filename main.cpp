#include <iostream>
#include<string>
#include<vector>
#include<math.h>
#include<array>
#include<algorithm>
using namespace std;
//Exercie 1
/*void saisir(double *d,char *c){
    cout<<"donner une distance"<<endl;
    cin>>*d;
    cout<<"donner une unite"<<endl;
    cin>>*c;
}
double convertir(double distance,char unite){
    if(unite=='K'||unite=='M')
        return distance*0.621;

    else
        return distance*1.60934;

}
int main(){
    double d;
    char u;
    saisir(&d,&u);
    cout<<"donner une distance est son unite"<<endl;
    cout<<convertir(d,u)<<endl;
    return 0;
}*/
//Exercice 2
/*int main(){
    int x,i,mini;
    mini=0;
    for(i=0;i<10;i++){
        cout<<"donner un entier";
        cin>>x;
        if(x<mini)
            mini=x;
    }

    cout<<"le plus petit nombre est:"<<mini;
    return 0;
}*/
//Exercice 3
/*int main(){
    string mots;
    int n,i,longueur;
    cout<<"donner le nombre de mots"<<endl;
    cin>>n;

    vector<string>t(n);
    cout<<"donner le mot 1"<<endl;
    cin>>t[0];
    longueur=(t[0].length());
    mots=t[0];
    for (i=1;i<n;i++){
        cout<<"donner le mot"<<i+1<<endl;
        cin>>t[i];
        if(t[i].length()<longueur){
            longueur=t[i].length();
            mots=t[i];
        }
    }
    cout<<"La plus petit mot est: "<<mots<<endl;
    return 0;
}*/
//Exercice 4
/*double distance(double xa,double ya,double xb, double yb){
    double d;
    d=sqrt(pow(abs(xa-xb),2)+pow(abs(ya-yb),2));
    return d;
}
int main(){
    double xa,ya,xb,yb,dis;
    cout<<"donner e cordoone de deux points"<<endl;
    cin>>xa>>ya>>xb>>yb;
    dis=(distance(xa,ya,xb,yb));
    cout<<dis<<endl;
    return 0;
}*/
//Exercice 5
/*double function(double x,bool ok){
    double c;
    if(ok==true)
        c=sqrt((x-1)*(2-x));
    else
        return -1;
}
int main(){
    double x,f;
    bool ok;
    cout<<"donner un entier"<<endl;
    cin>>x;
    if(x>1 && x<2)
        ok=true;
    else
        ok=false;

    f=function(x,ok);
    cout<<f<<endl;
    return 0;
}*/
//Exercice 6
/*int swapp(int a,int b){
    int c;
    c=0;
    c=a;
    a=b;
    b=c;
    return a,b;
}
int main(){
    int a,b;
    cout<<"donner deux entiers"<<endl;
    cin>>a,b;
    a,b=swapp(a,b);
    cout<<"les deux entiers apres le swap sont "<<a<<" "<<b<<endl;
    return 0;
}*/
//Exercice 7
/*int factoriel(int n){
    if(n<0)
        return -1;

    int fact=1;
    for (int i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
}
int main(){
    int N;
    cout<<"Entrez un nombre entier pour calculer son factoriel: ";
    cin>>N;
    int resultat=factoriel(N);
    if (resultat == -1)
        cout<<"Le factoriel d'un nombre négatif n'existe pas."<<endl;
    else
        cout << "Le factoriel de "<<N<<" est: "<<resultat<<endl;
    return 0;
}*/
int main(){
array<string,5> tab{"abc","def","ghi","jkl","mno"};
sort(tab.begin(),tab.end());
for(string i:tab)
    cout<<i<<" ";
return 0;
}


