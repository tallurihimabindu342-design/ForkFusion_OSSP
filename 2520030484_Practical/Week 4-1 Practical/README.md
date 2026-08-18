# Week 4-1 Practical – File System System Calls

## Aim

To demonstrate commonly used file-system system calls in C.

## System Calls Used

- `open()`
- `write()`
- `lseek()`
- `read()`
- `dup()`
- `dup2()`
- `fsync()`
- `close()`
- `stat()`
- `chmod()`
- `access()`
- `truncate()`
- `unlink()`

## Program

The program creates and opens `sample.txt`, writes and reads data, changes the file offset, duplicates file descriptors, synchronizes data, checks file information and permissions, truncates the file, and finally deletes it.

## Compile

```bash
clang week41.c -o week41
