#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string move(string s){
    if(s.length() == 0){ // agar hum last tak pauch gaye to khaali string return kara denge
        string b = "";
        return b;
    }

    // hum pehle element ko pakdenge aur dekhenge ki vo kya hai, agar x hai to jo bhi ans aayega recursion se uske last mein laga denge
    if(s.substr(0,1) == "x"){
        s = move(s.substr(1)) + s.substr(0,1);        
    }
    else{
        s = s.substr(0,1) + move(s.substr(1)); //aur agar x nhi hai to pehle laga denge jo bhi ans aayega recursion se
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    string a;
    a = move(s);
    cout<<"After moving all x to right:"<<endl;
    cout<<a;
    return 0;
}
