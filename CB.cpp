#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string move(string s){ //recursion humko ek character ko chhodke string ko ache se arrange kar dega
    if(s.length() == 0){ // agar hum last tak pauch gaye to khaali string return kara denge
        string b = "";
        return b;
    }

    string a = s.substr(0,1); // hum pehle element ko pakdenge aur dekhenge ki vo kya hai, agar x hai to jo bhi ans aayega recursion se uske last mein laga denge
    if(a == "x"){
        s = move(s.substr(1)) + a;        
    }
    else{
        s = a + move(s.substr(1)); //aur agar x nhi hai to pehle laga denge jo bhi ans aayega recursion se
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
