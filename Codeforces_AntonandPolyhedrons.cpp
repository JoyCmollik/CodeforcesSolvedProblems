
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbr;
    cin >> nmbr;

    int totFaces = 0;

    while(nmbr--) {
        string polyhedron;
        cin >> polyhedron;

        if(polyhedron == "Tetrahedron") {
            totFaces += 4;
        }
        else if(polyhedron == "Cube") {
            totFaces += 6;
        }
        else if(polyhedron == "Octahedron") {
            totFaces += 8;
        }
        else if(polyhedron == "Dodecahedron") {
            totFaces += 12;
        }
        else if(polyhedron == "Icosahedron") {
            totFaces += 20;
        }
    }

    cout << totFaces << endl;











    return 0;
}
