
#include <bits/stdc++.h>

using namespace std;

typedef struct {
    long long stOfDrag, bonOfHero;
} drag;

bool cmp(drag cA, drag cB) {
    return cA.stOfDrag < cB.stOfDrag;
}

int main() {
    long long sOfhero, nOfdrag;
    cin >> sOfhero >> nOfdrag;

    vector < drag > listOfdrag;

    for(long long i = 0; i < nOfdrag; i++) {
        drag sinDrag;
        cin >> sinDrag.stOfDrag >> sinDrag.bonOfHero;

        listOfdrag.push_back(sinDrag);
    }

    sort(listOfdrag.begin(), listOfdrag.end(), cmp);

    for(long long i = 0; i < listOfdrag.size(); i++) {

            if(listOfdrag[i].stOfDrag < sOfhero) {
                    sOfhero += listOfdrag[i].bonOfHero;
            }
            else {
                    sOfhero = 0;
                    break;
            }

        }

    if(sOfhero > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }














    return 0;
}
