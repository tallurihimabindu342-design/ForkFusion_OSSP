# Week 4-1 Practical – File System System Calls

## Objective

To demonstrate commonly used file-system system calls in C.

## System Calls Demonstrated

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

## Compile

```bash
clang week41.c -o week41
```

## Execute

```bash
./week41
```

## Result

The program successfully created, accessed, modified, synchronized, and deleted `sample.txt` using the required file-system system calls.

The file permissions were changed from `644` to `600`, and the file was finally truncated and deleted using `truncate()` and `unlink()`.

## Output

![Program Output](Output-2.png)

## Files

```text
4-1/
├── README.md
├── Output.png
├── Output-2.png
├── week41
└── week41.c
```

## Conclusion

The practical successfully demonstrated file handling, file-descriptor duplication, file information retrieval, permission management, file truncation, and file deletion using Linux system calls.
