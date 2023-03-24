#include <iostream>

using namespace std;

struct Hunter{
    bool numOfPrint = 0;
    string name;
};

int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int huntersNum;
    cin>>huntersNum;
    Hunter hunters[100][10];
    string name;
    short numOfCrabs;
    short numOfTraps;
    while (huntersNum>0) {
        cin>>name;
        cin>>numOfCrabs;
        cin>>numOfTraps;
        if (!hunters[numOfCrabs][numOfTraps].numOfPrint) {
            hunters[numOfCrabs][numOfTraps].name = name;
            hunters[numOfCrabs][numOfTraps].numOfPrint = 1;      
        }
        else{
            hunters[numOfCrabs][numOfTraps].name += (" " +name);
        }
        huntersNum--;
    }
    
    for (int i = 99; i>=0; i--) {
        for (int j = 0; j<10; j++) {
            if (hunters[i][j].numOfPrint) {
                cout<<hunters[i][j].name<<" ";
            }    
        }
    }
        
    return 0;
}