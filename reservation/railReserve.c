#include <stdio.h>
#include <stdlib.h>

typedef struct Train
{
	int seats;
	int priceSeat;
	int trainNo;
} train;

train *createTrain(int tn, int prs, int seats)
{
	train *temp = (train *)malloc(sizeof(train));
	temp->trainNo = tn;
	temp->priceSeat = prs;
	temp->seats = seats;
	return temp;
}

void bookTickets(train *tra, int n)
{
	if (tra->seats < n)
	{
		printf("Not enough seats...\n");
		return;
	}
	(tra->seats) -= n;
	printf("Total fare = %d\n", n * tra->priceSeat);
	printf("Ticket BOOKED\n");
}

int main()
{

	return 0;
}
