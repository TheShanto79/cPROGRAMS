#include <iostream>
using namespace std ;
int main() {
int N,dep1,dep2,dep3 ;
int DEP4,DEP5,DEP6 ;
cin >> N  ;cout<<endl;
cin >> dep1>>dep2>>dep3  ;cout<<endl;
cin >>DEP4>>DEP5>>DEP6;cout<<endl;
int eventA = dep1+dep2+dep3 ;
int eventB = DEP4+DEP5+DEP6 ;
if (eventA==eventB){
    cout<<"Both events have equal budget";
} else if (eventA>eventB){
cout << "Event A has more budget" ;}
else { cout << "Event B has more budget" ; }


}
