#include <stdio.h>

struct SoccerTeam {
    char name[50];
    long int revenueThisYear;
    long int revenueOverall;
};

struct SoccerTeam arsenalFC = {.name = "Arsenal", .revenueOverall = 12300000, .revenueThisYear = 2300000};
struct SoccerTeam barcelonaFC = {.name = "Barcelona", .revenueOverall = 1220000, .revenueThisYear = 9900000};
struct SoccerTeam parisSG = {.name = "Paris St", .revenueOverall = 1220000, .revenueThisYear = 55200000};

long int calculateSoccerRevenue(long int revenueTillDate, long int revenueThisYear) {
    return revenueTillDate + revenueThisYear;
}

int main() {

    struct SoccerTeam teams[] = {arsenalFC, barcelonaFC, parisSG};
    long int maxRevenue = 0;
    char *maxRevenueTeam = NULL;
    for (int i = 0; i < 3; i++) {
        long int totalRevenue = calculateSoccerRevenue(teams[i].revenueOverall, teams[i].revenueThisYear);
        if (totalRevenue > maxRevenue) {
            maxRevenue = totalRevenue;
            maxRevenueTeam = teams[i].name;
        }
        printf("%s: %ld\n", teams[i].name, totalRevenue);
    }
    printf("Team with max revenue (%ld) is: %s\n", maxRevenue, maxRevenueTeam);
    return (0);
}
