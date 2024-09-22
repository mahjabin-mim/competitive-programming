/**
 *    author:  Mahjabin7
 *    created: 05.10.2024 
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

void main_() 
{    
    optimized
    int t;
    cin>>t;
    while(t--){
      
    }
 
}

// increasing stack size
void* start_thread(void* arg) {
  void (*func)(void) = (void (*)(void))arg;
  func();
  return nullptr;
}

static void run_with_stack_size(void (*func)(void), size_t stsize) {
  pthread_attr_t attr;
  pthread_t thread;
  
  // Initialize thread attributes
  pthread_attr_init(&attr);

  // Set the stack size for the new thread
  pthread_attr_setstacksize(&attr, stsize);

  // Create a new thread with the specified stack size and run the function
  pthread_create(&thread, &attr, start_thread, (void*)func);

  // Wait for the thread to finish execution
  pthread_join(thread, nullptr);

  // Destroy thread attributes
  pthread_attr_destroy(&attr);
}

int main() {
  run_with_stack_size(main_, 1024 * 1024 * 1024); // run with a 1 GiB stack
  return 0;
}

