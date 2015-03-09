#include "LCFS.h"
#include <vector>

using namespace std;

LCFSScheduler::LCFSScheduler() {}
LCFSScheduler::LCFSScheduler(int t) {
    type = t;
}

Process LCFSScheduler::get_next_process() {
    Process p;
    if (!readyQueue.empty()) {
        p = readyQueue.back();
        readyQueue.pop_back();
    }
    return p;
}

void LCFSScheduler::add_process(Process p) {
    readyQueue.push_back(p);
}

