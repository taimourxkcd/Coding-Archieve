#include<iostream>
using namespace std;
 
// Function to find the waiting time for all
// processes
void findWaitingTime(int processes[], int n,
                          int bt[], int wt[])
{
    // waiting time for first process is 0
    wt[0] = 0;
 
    // calculating waiting time
    for (int  i = 1; i < n ; i++ )
        wt[i] =  bt[i-1] + wt[i-1] ;
}
 
// Function to calculate turn around time
void findTurnAroundTime( int processes[], int n,
                  int bt[], int wt[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int  i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}
 
//Function to calculate average time
void findavgTime( int processes[], int n, int bt[])
{
    int total_wt = 0, total_tat = 0;
    int* wt = new int[n];
    int* tat = new int[n];

    //Function to find waiting time of all processes
    findWaitingTime(processes, n, bt, wt);
 
    //Function to find turn around time for all processes
    findTurnAroundTime(processes, n, bt, wt, tat);
 
    //Display processes along with all details
    cout << "Processes  "<< " Burst time  "
         << " Waiting time  " << " Turn around time\n";
 
    // Calculate total waiting time and total turn
    // around time
    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << processes[i] << "\t\t" << bt[i] <<"\t    "
            << wt[i] <<"\t\t  " << tat[i] <<endl;
    }
 
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
 
// Driver code
int main()
{
    int n;
    int  *processes,*burst_time;
    cout<<"Enter The number of process: ";
    cin>>n;
    processes= new int[n];
    burst_time= new int[n];

    for(int i=0;i<n;i++)
	{
	 cout<<"\nEnter the id of Process-"<<(i+1)<<" : ";
	 cin>>processes[i];
	 cout<<"Enter the burst time of Process-"<<(i+1)<<" : ";
         cin>>burst_time[i];
	}
	cout<<endl;
    findavgTime(processes, n,  burst_time);
	cout<<endl<<endl;
    return 0;
}

