#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main()
{
	std::vector<int> myVec; // You can also write is as myVec(10): it means your vector is of size 10
	myVec.push_back(10);
	myVec.push_back(20);
	myVec.push_back(30);
	myVec.push_back(40);

	std::cout << "the size of the vector is " << myVec.size() << std::endl;

	for (int i = 0; i < myVec.size(); i++)
	{
		std::cout << "Vectoer " << i << " " << myVec.at(i) << std::endl; // OR myVec[i] same result
	}

	std::cout<<std::endl;

	std::cout << "Vector size is " << myVec.empty() << std::endl;

	myVec.erase(myVec.begin());
	myVec.erase(myVec.begin() + 2);
	myVec.erase(std::remove(myVec.begin(), myVec.end(), 30), myVec.end());
	
	
	myVec.clear();

	

	for (int i = 0; i < myVec.size(); i++)
	{
		std::cout << "Vectoer " << i << " " << myVec.at(i) << std::endl; // OR myVec[i] same result
	}

	
}

#include <stdio.h>

/* We'll be using MPI routines, definitions, etc. */
#include <mpi.h>

/* Calculate local integral  */
double Trap(double left_endpt, double right_endpt, int trap_count, 
   double base_len);    

/* Function we're integrating */
double f(double x); 

int main(void) {
   int my_rank, comm_sz, n = 1024, local_n;   
   double a = 0.0, b = 3.0, h, local_a, local_b;
   double local_int, total_int;
   int source; 

   /* Let the system do what it needs to start up MPI */
   MPI_Init(NULL, NULL);

   /* Get my process rank */
   MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

   /* Find out how many processes are being used */
   MPI_Comm_size(MPI_COMM_WORLD, &comm_sz);

   h = (b-a)/n;          /* h is the same for all processes */
   local_n = n/comm_sz;  /* So is the number of trapezoids  */

   /* Length of each process' interval of
    * integration = local_n*h.  So my interval
    * starts at: */
   local_a = a + my_rank*local_n*h;
   local_b = local_a + local_n*h;
   local_int = Trap(local_a, local_b, local_n, h);

   /* Add up the integrals calculated by each process */
   if (my_rank != 0) { 
      MPI_Send(&local_int, 1, MPI_DOUBLE, 0, 0, 
            MPI_COMM_WORLD); 
   } else {
      total_int = local_int;
      for (source = 1; source < comm_sz; source++) {
         MPI_Recv(&local_int, 1, MPI_DOUBLE, source, 0,
            MPI_COMM_WORLD, MPI_STATUS_IGNORE);
         total_int += local_int;
      }
   } 

   /* Print the result */
   if (my_rank == 0) {
      printf("With n = %d trapezoids, our estimate\n", n);
      printf("of the integral from %f to %f = %.15e\n",
          a, b, total_int);
   }

   /* Shut down MPI */
   MPI_Finalize();

   return 0;
} /*  main  */

