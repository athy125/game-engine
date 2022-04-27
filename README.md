Multi-threaded Job System:
--------------------------
- Provides multiple job queues, each with multiple workers
- Each worker contains an std::thread and waits for jobs to be posted in the corresponding queue
- Any kind and amount of jobs can be added to the job system, as long as a given job implements InterfaceJob.

Timer and Time-based Events:
----------------------------
- An updater that manages broadcasting the tick to all entities that need it
- The updater also maintains a list of timer events and broadcasts them
- A timer event contains a function object. It invokes this function object after a specified duration either once, multiple times or till it is destroyed

2D Collision System:
--------------------
- Provides 2D collision detection using a swept separating axis collision test
- Provides classification of physics objects using enum types and collision filtering using bit masks
- Provides default collision response using reflection
- Provides callbacks on collision detection

Miscellaneous:
--------------
- A logging and asserting utility
- A pooled and hashed strings utility
- A primer for a game object with corresponding geometry & *very* simple physics
- A set of optimized geometry classes using Intel SSE instructions
- A lua-parser for data driven development
- A thread-safe file caching utility
