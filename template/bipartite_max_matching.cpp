const int M=2500,N=7500;
    int matchR[N];//whos assigned to job i
	 bool bpGraph[M][N];//M people , N jobs
 using ll = long long;
// A DFS based recursive function 
// that returns true if a matching
// for vertex u is possible
bool bpm(bool bpGraph[M][N], int u,bool seen[], int matchR[])
{
    // Try every job one by one
    for (int v = 0; v < N; v++)
    {
        // If applicant u is interested in 
        // job v and v is not visited
        if (bpGraph[u][v] && !seen[v])
        {
            // Mark v as visited
            seen[v] = true; 
 
            // If job 'v' is not assigned to an 
            // applicant OR previously assigned 
            // applicant for job v (which is matchR[v]) 
            // has an alternate job available. 
            // Since v is marked as visited in 
            // the above line, matchR[v] in the following 
            // recursive call will not get job 'v' again
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v],
                                     seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 
// Returns maximum number
// of matching from M to N
int maxBPM(bool bpGraph[M][N])
{
    // An array to keep track of the 
    // applicants assigned to jobs. 
    // The value of matchR[i] is the 
    // applicant number assigned to job i,
    // the value -1 indicates nobody is
    // assigned.

 
    // Initially all jobs are available
    memset(matchR, -1, sizeof(matchR));
 
    // Count of jobs assigned to applicants
    int result = 0; 
    for (int u = 0; u < M; u++)
    {
        // Mark all jobs as not seen 
        // for next applicant.
        bool seen[N];
        memset(seen, 0, sizeof(seen));
 
        // Find if the applicant 'u' can get a job
        if (bpm(bpGraph, u, seen, matchR))
            result++;
    }
    return result;
}
//call maxBPM(bpGraph),return maximun matching and matchR will contain the matching