#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    // Initialize MPI
    MPI_Init(&argc, &argv);

    // Get the rank of the current process
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Get the total number of processes
    int size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Print a "Hello, World!" message with rank and total number of processes
    printf("Hello from process %d of %d\n", rank, size);

    // Finalize MPI
    MPI_Finalize();

    return 0;
}
