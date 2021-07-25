## Equillibrium density

```shell
g++ densities_tp.cpp cluster_dynamics.cpp -fopenmp 
```
Table below is for q=0.

| Cover | p     | Cover | p     | Cover | p     | Cover | p     | Cover | p     | Cover | p     |
|:-----:|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
| 0.20  | 0.638 | 0.30  | 0.656 | 0.40  | 0.678 | 0.50  | 0.707 | 0.60  | 0.743 | 0.70  | 0.788 |
| 0.21  | 0.640 | 0.31  | 0.658 | 0.41  | 0.681 | 0.51  | 0.710 | 0.61  | 0.747 | 0.71  | 0.793 |
| 0.22  | 0.642 | 0.32  | 0.660 | 0.42  | 0.684 | 0.52  | 0.714 | 0.62  | 0.751 | 0.72  | 0.798 |
| 0.23  | 0.643 | 0.33  | 0.662 | 0.43  | 0.686 | 0.53  | 0.717 | 0.63  | 0.755 | 0.73  | 0.803 |
| 0.24  | 0.645 | 0.34  | 0.664 | 0.44  | 0.689 | 0.54  | 0.721 | 0.64  | 0.760 | 0.74  | 0.808 |
| 0.25  | 0.647 | 0.35  | 0.666 | 0.45  | 0.692 | 0.55  | 0.724 | 0.65  | 0.764 | 0.75  | 0.814 |
| 0.26  | 0.648 | 0.36  | 0.668 | 0.46  | 0.695 | 0.56  | 0.728 | 0.66  | 0.769 | 0.76  | 0.820 |
| 0.27  | 0.650 | 0.37  | 0.671 | 0.47  | 0.698 | 0.57  | 0.731 | 0.67  | 0.773 | 0.77  | 0.825 |
| 0.28  | 0.652 | 0.38  | 0.673 | 0.48  | 0.701 | 0.58  | 0.735 | 0.68  | 0.778 | 0.78  | 0.831 |
| 0.29  | 0.654 | 0.39  | 0.676 | 0.49  | 0.704 | 0.59  | 0.739 | 0.69  | 0.783 | 0.79  | 0.837 |

## Probability of Percolation 

```
g++ percolation_probabilities_dp.cpp cluster_dynamics.cpp -fopenmp 
```

```
Enter grid size: 32
Enter starting p: 0.717
Enter ending p: 0.727
Enter divisions: 11
Enter number of census: 10000
Enter lag in terms of frames: 10 
```

```
p: 0.717 P: 0.144
p: 0.718 P: 0.149
p: 0.719 P: 0.176
p: 0.720 P: 0.187
p: 0.721 P: 0.21
p: 0.722 P: 0.228
p: 0.723 P: 0.239
p: 0.724 P: 0.264
p: 0.725 P: 0.275
p: 0.726 P: 0.296
p: 0.727 P: 0.309

CPU Time: 216 seconds 
```

## Cluster Size Distribution 

A group of vegetated sites that share nearest neighbours form a cluster. Uses DFS for UF. May experience segmentation faults for large grids (>512).

```
g++ cluster_sizes_dp.cpp cluster_dynamics.cpp 
./a.out 
```

```
Enter grid size: 512
Enter birth probability: 0.724
What is the corresponding density? 0.55
Enter updates per site: 25000
Enter number of census: 1000
Enter lag between frames: 10
Which replicate is this?: 1
Do you want to collect frames? Answer with 1 or 0: 0 
```

## Average Cluster Size 

```
g++ average_cluster_size_np.cpp cluster_dynamics.cpp -fopenmp
./a.out 
```

```
Enter grid size: 64
Enter starting p: 0.55
Enter ending p: 0.65
Enter divisions: 11
Enter number of census: 100
Enter lag in terms of frames: 10 
```

```
p: 0.55 S: 11.2
p: 0.56 S: 12.3
p: 0.57 S: 14
p: 0.58 S: 14.2
p: 0.59 S: 14.1
p: 0.6 S: 12.2
p: 0.61 S: 10.8
p: 0.62 S: 9.12 
p: 0.63 S: 6.85 
p: 0.64 S: 4.95
p: 0.65 S: 3.69 

CPU Time: 74 seconds 
```

## Cluster Dynamics 

Calculates size change after a single update. Uses DFS for UF. May experience segmentation faults for large grids (>512).

```
g++ transformations_dp.cpp cluster_dynamics.cpp 
./a.out 
```

```
Enter grid size: 512
Enter birth probability: 0.724
What is the corresponding density? : 0.55
Enter updates per site: 25000
How many transformations do you want? Enter a number: 2000000
Which replicate is this? : 1
```
