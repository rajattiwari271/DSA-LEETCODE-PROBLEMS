#include <iostream>
#include <string>
using namespace std;



int main (){
    string str = "RAJAT Tiwari ";
 int n = str.size();

 for (int i = n-1;i>=0; i --){
    if(str[i] == ' '){
       int j = i +1;
        string sub2 = str.substr(j, n-1);
             cout << "Substring 2: " << sub2 << endl;

        break;
    }
 }
return 0;

}

