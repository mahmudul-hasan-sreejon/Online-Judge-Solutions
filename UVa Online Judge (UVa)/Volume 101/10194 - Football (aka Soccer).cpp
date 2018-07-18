#include <bits/stdc++.h>

using namespace std;

const int MAXN = 30;

struct team {
    char name[MAXN+5];
    int point, match_played, win, lose, draw, goal_scored, goal_conceded, goal_difference;

    team() {
        point = match_played = win = lose = draw = goal_scored = goal_conceded = goal_difference = 0;
    }
    void update(int a, int b) {
        ++match_played;
        if(a > b) {
            ++win;
            point += 3;
        }
        else if(a < b) ++lose;
        else {
            ++draw;
            ++point;
        }
        goal_scored += a;
        goal_conceded += b;
        goal_difference = goal_scored - goal_conceded;
    }
};

bool cmp(team a, team b) {
    if(a.point != b.point) return (a.point > b.point);
    else if(a.win != b.win) return (a.win > b.win);
    else if(a.goal_difference != b.goal_difference) return (a.goal_difference > b.goal_difference);
    else if(a.goal_scored != b.goal_scored) return (a.goal_scored > b.goal_scored);
    else if(a.match_played != b.match_played) return (a.match_played < b.match_played);
    else {
        for(int i = 0; ; ++i) {
            char n1 = a.name[i];
            char n2 = b.name[i];
            if(n1 >= 'A' && n1 <= 'Z') n1 += 32;
            if(n2 >= 'A' && n2 <= 'Z') n2 += 32;

            if(n1 == NULL) return true;
            if(n2 == NULL) return false;
            if(n1 != n2) return (n1 < n2);
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in3.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int N;
    cin >> N >> ws;
    while(N--) {
        string tournament_name;
        getline(cin, tournament_name);
        int T;
        cin >> T >> ws;

        team data[MAXN+5];
        unordered_map< string, int > m;
        for(int i = 0; i < T; ++i) {
            gets(data[i].name);
            m[data[i].name] = i;
        }

        int G;
        cin >> G >> ws;
        for(int i = 0; i < G; ++i) {
            char input[(MAXN*2)+10];
            gets(input);

            char team_name_1[MAXN+5], team_name_2[MAXN+5];
            int goals_1, goals_2;
            sscanf(input, "%[^#]#%d@%d#%[^\n]", team_name_1, &goals_1, &goals_2, team_name_2);
            data[m[team_name_1]].update(goals_1, goals_2);
            data[m[team_name_2]].update(goals_2, goals_1);
        }

        sort(data, data + T, cmp);

        cout << tournament_name << "\n";
        for(int i = 0; i < T; ++i) {
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n", (i + 1), data[i].name, data[i].point, data[i].match_played, data[i].win, data[i].draw, data[i].lose, data[i].goal_difference, data[i].goal_scored, data[i].goal_conceded);
        }
        if(N) cout << "\n";
    }
    return 0;
}
