// C++ program for implementation of RR scheduling
#include<iostream>
using namespace std;

// Function to find the waiting time for all
// processes
void findWaitingTime(int processes[], int n,
	int bt[], int wt[], int quantum)
{
	int* rem_bt = new int[n];
	for (int i = 0; i < n; i++)
		rem_bt[i] = bt[i];

	int t = 0; // Current time


	while (1)
	{
		bool done = true;

		for (int i = 0; i < n; i++)
		{
			if (rem_bt[i] > 0)
			{
				done = false;

				if (rem_bt[i] > quantum)
				{
					t += quantum;
					rem_bt[i] -= quantum;
				}
				else
				{
					t = t + rem_bt[i];
					wt[i] = t - bt[i];
					rem_bt[i] = 0;
				}
			}
		}

		if (done == true)
			break;
	}
}

// Function to calculate turn around time
void findTurnAroundTime(int processes[], int n,
	int bt[], int wt[], int tat[])
{
	// calculating turnaround time by adding
	// bt[i] + wt[i]
	for (int i = 0; i < n; i++)
		tat[i] = bt[i] + wt[i];
}

// Function to calculate average time
void findavgTime(int processes[], int n, int bt[],
	int quantum)
{
	int total_wt = 0, total_tat = 0;
	int* wt = new int(n);
	int* tat = new int(n);

	findWaitingTime(processes, n, bt, wt, quantum);

	findTurnAroundTime(processes, n, bt, wt, tat);

	cout << "Processes " << " Burst time "
		<< " Waiting time " << " Turn around time\n";


	for (int i = 0; i < n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << i + 1 << "\t\t" << bt[i] << "\t "
			<< wt[i] << "\t\t " << tat[i] << endl;
	}

	cout << "Average waiting time = "
		<< (float)total_wt / (float)n;
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n;
}

// Driver code
int main()
{
	int n, quantum;
	int* processes, * burst_time;
	cout << "Enter The number of process: ";
	cin >> n;
	processes = new int[n];
	burst_time = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter the id of Process-" << (i + 1) << " : ";
		cin >> processes[i];
		cout << "Enter the burst time of Process-" << (i + 1) << " : ";
		cin >> burst_time[i];
	}
	cout << endl;
	cout << "Enter the Time Quantum: ";
	cin >> quantum;

	findavgTime(processes, n, burst_time, quantum);
	cout << endl << endl;
	return 0;
}








