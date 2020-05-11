#include <stdio.h>
#include "thread_107.h"

void sellTickets(int agentId, int numTicketsToSell) {
    while (numTicketsToSell > 0) {
        numTicketsToSell--;
        printf("Agent %d sell one ticket.\n", agentId);
    }
}

int main() {
    int numTickets = 150;
    int numAgents = 10;
    for (int i = 0; i < numAgents; i++) {
        sellTickets(i, numTickets / numAgents);
    }
    ListAllThreads();

}
