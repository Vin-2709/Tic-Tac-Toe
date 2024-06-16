 #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job {
  int id;
  int burstTime;
  bool operator<(const Job& other) const {
    return burstTime < other.burstTime;
  }
};

vector<int> scheduleSJF(const vector<Job>& jobs) {
  int n = jobs.size();
  vector<Job> sortedJobs(jobs);
  sort(sortedJobs.begin(), sortedJobs.end());

  vector<int> completionTime(n);
  int currentTime = 0;
  for (int i = 0; i < n; ++i) {
    completionTime[i] = currentTime + sortedJobs[i].burstTime;
    currentTime = completionTime[i];
  }

  vector<int> scheduleOrder(n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (sortedJobs[i].id == jobs[j].id) {
        scheduleOrder[i] = j;
        break;
      }
    }
  }

  return scheduleOrder;
}

int main() {
  vector<Job> jobs = {
      {1, 3}, {2, 5}, {3, 4}
  };

  vector<int> scheduleOrder = scheduleSJF(jobs);
  cout << "Job Scheduling Order (SJF): ";
  for (int jobId : scheduleOrder) {
    cout << jobId + 1 << " ";  // Assuming job IDs start from 1
  }
  cout << endl;

  return 0;
}
