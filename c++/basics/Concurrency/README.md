# Thread

Threads are in one for the following states:

    - New
    - Runnable
    - Blocked
    - Terminate

std::thread::joinable()

---

# Mutex

---
## std::mutex

 - When a thread tries to lock the mutex, if the mutex is not available it enters into waiting state.

---

## std::recursive_mutex
 
 - If a thread try to lock the same mutex twice, behavior is undefined and may create a Deadlock.

Q: Why does locking the same mutex twice can create a deadlock?

A: If a thread which owns a mutex, tries to lock it, it enters into waiting state. As the thread is blocked in the waiting state, it can not unlock the mutex. Deadlock! 

 - [std::recursive_mutex](https://en.cppreference.com/w/cpp/thread/recursive_mutex) allow you to lock same mutex multiple times. They are needed to protect the critical section of the code in a recursive functions.

---

## std::shared_mutex

 - number of readers > number of writers

---

## Locks 

 - [unique_lock](http://www.cplusplus.com/reference/mutex/unique_lock/)
    Used with conditional variable

 - [lock_guard](http://www.cplusplus.com/reference/mutex/lock_guard/)
 - [scoped_lock](https://en.cppreference.com/w/cpp/thread/scoped_lock)

It guarantees the mutex object is properly unlocked in case an exception is thrown.

---

## std::mutex::lock
    void lock();

```
if (mutex is available)
    Then lock it so no one else can enter critical section
else 
    All other calling threads enters a waiting state and can not do anything until mutex is available
```

## std::mutex::try_lock
    bool try_lock();

In the standard method, when you call lock() and if the mutex is not available then thread enters waiting state and it can not do ant other things until mutex is available.

[std::mutext::try_lock()](https://en.cppreference.com/w/cpp/thread/mutex/try_lock) is non blocking version of the lock().

```
if (mutex is available)
    Then lock it and return TRUE
else 
    return FALSE.
    All other calling threads continue doing other things and do not enter the waiting state.
```

---

Useful functions:

[std::this_thread::sleep_for](https://en.cppreference.com/w/cpp/thread/sleep_for)