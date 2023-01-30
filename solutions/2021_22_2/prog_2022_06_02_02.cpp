#include <iostream>
#include <fstream>

using namespace std;

bool perimeters(string fname){
    fstream src;
    src.open (fname, ios_base::in);
    if(!src){
        return false;
    }
    else {
        int i = 0, temp = 0, ker = 0;
        int table[3];

        while(src >> temp){
            table[i] = temp;
            if(((i+1)%3) == 0){
                for(int i = 0; i < 3; i++){
                    ker += table[i];
                }
                cout << ker << endl;
                ker = 0;
                i = 0;
            } else i++;
        }
    }
    src.close();
    return true;
}


int main() {
    
    string fname = "haromszogek.txt";
    perimeters(fname);

    return 0;
}

