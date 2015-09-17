/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:01
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    int i, l;
    bool t;
    while (getline(stream, line)) {
        t = true;
        l = line.size();
        for (i = 0; i < l; i++) {
            if('/' < line[i] && line[i] < ':') {
                t = false;
                cout << line[i];
            }
            if('`' < line[i] && line[i] < 'k') {
                t = false;
                printf("%c", line[i]-49);
            }
        }
        if (t) cout << "NONE";
        cout << '\n';
    }
    return 0;
}