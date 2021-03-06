#include "cluster_dynamics.h"

int main() {

	int grid_size;
	int threads;
	float feedback_strength;
	int updates_per_site;
	int number_of_census;
	int lag = 1;
	int collect_frames = 1;

	cout << "Threads to spawn: ";
    cin >> threads;

    float birth_probabilities[threads-1];

	cout << "Enter grid size: ";
    cin >> grid_size;

    cout << "Enter " << threads << " birth probabilities: ";

    for (int i =0; i < threads; i++){
    	cin >> birth_probabilities[i];
    }
    
    cout << "Enter feedback strength: ";
    cin >> feedback_strength;

    cout << "Enter updates per site: ";
    cin >> updates_per_site;

    cout << "Enter number of census: ";
    cin >> number_of_census;

    cout << "Enter lag in terms of frames: ";
    cin >> lag;

    cout << "Do you want to collect frames? Answer with 1 or 0: ";
    cin >> collect_frames;

	auto start = high_resolution_clock::now(); 

	parallelizer(threads,grid_size,birth_probabilities,feedback_strength, number_of_census, lag, updates_per_site, collect_frames);

	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<seconds>(stop - start); 

	cout << endl << "CPU time: " << duration.count() << " seconds" << endl; 
}
