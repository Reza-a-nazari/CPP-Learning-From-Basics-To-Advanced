#include <iostream>
#include <iomanip>
#include <vector>
using namespace std ;

int main()
{
        vector<string> names = {
        "John","William","James","Charles","George","Frank","Joseph","Thomas","Henry","Robert",
        "Edward","Harry","Walter","Arthur","Fred","Albert","Samuel","David","Louis","Joe",
        "Charlie","Clarence","Richard","Andrew","Daniel","Ernest","Will","Jesse","Oscar","Lewis",
        "Peter","Benjamin","Frederick","Willie","Alfred","Sam","Roy","Herbert","Jacob","Tom",
        "Elmer","Carl","Lee","Howard","Martin","Michael","Bert","Herman","Jim","Francis",
        "Harold","Earl","Eugene","Ralph","Ed","Claude","Edwin","Ben","Charley","Paul",
        "Raymond","Howard","Leroy","Rufus","Edgar","Ben","Norman","Allen","Leonard","Erik",
        "Melvin","Philip","Arnold","Harry","Victor","Vincent","Douglas","Clifford","Glen","Gordon",
        "Marvin","Warren","Dale","Leon","Alvin","Bernard","Roland","Dean","Francisco","Luis",
        "Melina","Ash","Billie","Alice","Robert","Olivia","Megan","Samantha","Rachel","Jessica"
    };
    cout<< setw(10) << left << "Name"<<setfill('.')
        <<setw(5)   <<right <<"Age"<<endl;

    for(int i=0 ; i<100 ; i++)
    {
        cout<<setfill(' ')<<setw(10) << left << names[i] 
            <<setw(5)<<right << i <<endl ;
    }
}