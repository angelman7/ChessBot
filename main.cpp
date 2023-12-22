#include <iostream>
#include <string>

using namespace std;

int main(){
    bool is_white;
    cout << "Play with white? (Yes: 1, No: 0) "; cin >> is_white;

    string opponent_move, bot_move;

    if (!is_white) cin >> opponent_move;

    while (bot_move.back() != '#') {
        cout << bot_move << '\n';

        cin >> opponent_move;
    }

    return 0;
}