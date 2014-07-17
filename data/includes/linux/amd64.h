#define MAP_32BIT 0x40
#define INADDR_ANY 0
#define INADDR_BROADCAST 0xffffffff
#define INADDR_NONE 0xffffffff
#define INADDR_LOOPBACK 0x7f000001
#define EPERM 1
#define ENOENT 2
#define ESRCH 3
#define EINTR 4
#define EIO 5
#define ENXIO 6
#define E2BIG 7
#define ENOEXEC 8
#define EBADF 9
#define ECHILD 10
#define EAGAIN 11
#define ENOMEM 12
#define EACCES 13
#define EFAULT 14
#define ENOTBLK 15
#define EBUSY 16
#define EEXIST 17
#define EXDEV 18
#define ENODEV 19
#define ENOTDIR 20
#define EISDIR 21
#define EINVAL 22
#define ENFILE 23
#define EMFILE 24
#define ENOTTY 25
#define ETXTBSY 26
#define EFBIG 27
#define ENOSPC 28
#define ESPIPE 29
#define EROFS 30
#define EMLINK 31
#define EPIPE 32
#define EDOM 33
#define ERANGE 34
#define EDEADLK 35
#define ENAMETOOLONG 36
#define ENOLCK 37
#define ENOSYS 38
#define ENOTEMPTY 39
#define ELOOP 40
#define EWOULDBLOCK 11
#define ENOMSG 42
#define EIDRM 43
#define ECHRNG 44
#define EL2NSYNC 45
#define EL3HLT 46
#define EL3RST 47
#define ELNRNG 48
#define EUNATCH 49
#define ENOCSI 50
#define EL2HLT 51
#define EBADE 52
#define EBADR 53
#define EXFULL 54
#define ENOANO 55
#define EBADRQC 56
#define EBADSLT 57
#define EDEADLOCK 35
#define EBFONT 59
#define ENOSTR 60
#define ENODATA 61
#define ETIME 62
#define ENOSR 63
#define ENONET 64
#define ENOPKG 65
#define EREMOTE 66
#define ENOLINK 67
#define EADV 68
#define ESRMNT 69
#define ECOMM 70
#define EPROTO 71
#define EMULTIHOP 72
#define EDOTDOT 73
#define EBADMSG 74
#define EOVERFLOW 75
#define ENOTUNIQ 76
#define EBADFD 77
#define EREMCHG 78
#define ELIBACC 79
#define ELIBBAD 80
#define ELIBSCN 81
#define ELIBMAX 82
#define ELIBEXEC 83
#define EILSEQ 84
#define ERESTART 85
#define ESTRPIPE 86
#define EUSERS 87
#define ENOTSOCK 88
#define EDESTADDRREQ 89
#define EMSGSIZE 90
#define EPROTOTYPE 91
#define ENOPROTOOPT 92
#define EPROTONOSUPPORT 93
#define ESOCKTNOSUPPORT 94
#define EOPNOTSUPP 95
#define ENOTSUP 95
#define EPFNOSUPPORT 96
#define EAFNOSUPPORT 97
#define EADDRINUSE 98
#define EADDRNOTAVAIL 99
#define ENETDOWN 100
#define ENETUNREACH 101
#define ENETRESET 102
#define ECONNABORTED 103
#define ECONNRESET 104
#define ENOBUFS 105
#define EISCONN 106
#define ENOTCONN 107
#define ESHUTDOWN 108
#define ETOOMANYREFS 109
#define ETIMEDOUT 110
#define ECONNREFUSED 111
#define EHOSTDOWN 112
#define EHOSTUNREACH 113
#define EALREADY 114
#define EINPROGRESS 115
#define ESTALE 116
#define EUCLEAN 117
#define ENOTNAM 118
#define ENAVAIL 119
#define EISNAM 120
#define EREMOTEIO 121
#define EDQUOT 122
#define ENOMEDIUM 123
#define EMEDIUMTYPE 124
#define ECANCELED 125
#define ENOKEY 126
#define EKEYEXPIRED 127
#define EKEYREVOKED 128
#define EKEYREJECTED 129
#define __SYS_NERR ((129) + 1)
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321
#define __BYTE_ORDER 1234
#define __FLOAT_WORD_ORDER 1234
#define LITTLE_ENDIAN 1234
#define BIG_ENDIAN 4321
#define BYTE_ORDER 1234
#define __WORDSIZE 64
#define __WORDSIZE_COMPAT32 1
#define __FSUID_H 1
#define NSIG 32
#define _NSIG 64
#define SIGHUP 1
#define SIGINT 2
#define SIGQUIT 3
#define SIGILL 4
#define SIGTRAP 5
#define SIGABRT 6
#define SIGIOT 6
#define SIGFPE 8
#define SIGKILL 9
#define SIGSEGV 11
#define SIGPIPE 13
#define SIGALRM 14
#define SIGTERM 15
#define SIGUNUSED 31
#define SIGBUS 7
#define SIGUSR1 10
#define SIGUSR2 12
#define SIGSTKFLT 16
#define SIGCHLD 17
#define SIGCONT 18
#define SIGSTOP 19
#define SIGTSTP 20
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGURG 23
#define SIGXCPU 24
#define SIGXFSZ 25
#define SIGVTALRM 26
#define SIGPROF 27
#define SIGWINCH 28
#define SIGIO 29
#define SIGPWR 30
#define SIGSYS 31
#define SIGCLD 17
#define SIGPOLL 29
#define SIGLOST 30
#define SIGRTMIN 32
#define SIGRTMAX (64-1)
#define SA_NOCLDSTOP 0x00000001
#define SA_NOCLDWAIT 0x00000002
#define SA_SIGINFO 0x00000004
#define SA_RESTORER 0x04000000
#define SA_ONSTACK 0x08000000
#define SA_RESTART 0x10000000
#define SA_INTERRUPT 0x20000000
#define SA_NODEFER 0x40000000
#define SA_RESETHAND 0x80000000
#define SA_NOMASK 0x40000000
#define SA_ONESHOT 0x80000000
#define SS_ONSTACK 1
#define SS_DISABLE 2
#define MINSIGSTKSZ 2048
#define SIGSTKSZ 8192
#define SIG_BLOCK 0
#define SIG_UNBLOCK 1
#define SIG_SETMASK 2
#define SI_MAX_SIZE 128
#define SIGEV_SIGNAL 0
#define SIGEV_NONE 1
#define SIGEV_THREAD 2
#define SIGEV_THREAD_ID 4
#define SIGEV_MAX_SIZE 64
#define _SYS_TIME_H 1
#define ITIMER_REAL 0
#define ITIMER_VIRTUAL 1
#define ITIMER_PROF 2
#define FD_SETSIZE 1024
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define _CS_PATH 1
#define _SC_CLK_TCK 1
#define _SC_ARG_MAX 2
#define _SC_NGROUPS_MAX 3
#define _SC_OPEN_MAX 4
#define _SC_PAGESIZE 5
#define _SC_NPROCESSORS_ONLN 6
#define _SC_NPROCESSORS_CONF 6
#define _SC_PHYS_PAGES 7
#define _PC_PATH_MAX 1
#define _PC_VDISABLE 2
#define L_cuserid 17
#define _POSIX_VERSION 199506
#define F_ULOCK 0
#define F_LOCK 1
#define F_TLOCK 2
#define F_TEST 3
#define S_IFMT 00170000
#define S_IFSOCK 0140000
#define S_IFLNK 0120000
#define S_IFREG 0100000
#define S_IFBLK 0060000
#define S_IFDIR 0040000
#define S_IFCHR 0020000
#define S_IFIFO 0010000
#define S_ISUID 0004000
#define S_ISGID 0002000
#define S_ISVTX 0001000
#define S_IRWXU 00700
#define S_IRUSR 00400
#define S_IWUSR 00200
#define S_IXUSR 00100
#define S_IRWXG 00070
#define S_IRGRP 00040
#define S_IWGRP 00020
#define S_IXGRP 00010
#define S_IRWXO 00007
#define S_IROTH 00004
#define S_IWOTH 00002
#define S_IXOTH 00001
#define S_IREAD 00400
#define S_IWRITE 00200
#define S_IEXEC 00100
#define F_LINUX_SPECIFIC_BASE 1024
#define O_ACCMODE 0003
#define O_RDONLY 00
#define O_WRONLY 01
#define O_RDWR 02
#define O_CREAT 0100
#define O_EXCL 0200
#define O_NOCTTY 0400
#define O_TRUNC 01000
#define O_APPEND 02000
#define O_NONBLOCK 04000
#define O_NDELAY 04000
#define O_SYNC 010000
#define FASYNC 020000
#define O_DIRECT 040000
#define O_LARGEFILE 0100000
#define O_DIRECTORY 0200000
#define O_NOFOLLOW 0400000
#define O_NOATIME 01000000
#define F_DUPFD 0
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
#define F_GETLK 5
#define F_SETLK 6
#define F_SETLKW 7
#define F_SETOWN 8
#define F_GETOWN 9
#define F_SETSIG 10
#define F_GETSIG 11
#define F_GETLK64 12
#define F_SETLK64 13
#define F_SETLKW64 14
#define FD_CLOEXEC 1
#define F_RDLCK 0
#define F_WRLCK 1
#define F_UNLCK 2
#define F_EXLCK 4
#define F_SHLCK 8
#define F_INPROGRESS 16
#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_NB 4
#define LOCK_UN 8
#define LOCK_MAND 32
#define LOCK_READ 64
#define LOCK_WRITE 128
#define LOCK_RW 192
#define O_ASYNC 020000
#define MREMAP_MAYMOVE 1
#define MREMAP_FIXED 2
#define PROT_READ 0x1
#define PROT_WRITE 0x2
#define PROT_EXEC 0x4
#define PROT_NONE 0x0
#define MAP_SHARED 0x01
#define MAP_PRIVATE 0x02
#define MAP_FIXED 0x10
#define MAP_ANONYMOUS 0x20
#define MAP_GROWSDOWN 0x0100
#define MAP_DENYWRITE 0x0800
#define MAP_EXECUTABLE 0x1000
#define MAP_LOCKED 0x2000
#define MAP_NORESERVE 0x4000
#define MAP_POPULATE 0x8000
#define MS_ASYNC 1
#define MS_INVALIDATE 2
#define MS_SYNC 4
#define MCL_CURRENT 1
#define MCL_FUTURE 2
#define MADV_NORMAL 0x0
#define MADV_RANDOM 0x1
#define MADV_SEQUENTIAL 0x2
#define MADV_WILLNEED 0x3
#define MADV_DONTNEED 0x4
#define MAP_ANON 0x20
#define MAP_FILE 0
#define SOL_SOCKET 1
#define SO_DEBUG 1
#define SO_REUSEADDR 2
#define SO_TYPE 3
#define SO_ERROR 4
#define SO_DONTROUTE 5
#define SO_BROADCAST 6
#define SO_SNDBUF 7
#define SO_RCVBUF 8
#define SO_KEEPALIVE 9
#define SO_OOBINLINE 10
#define SO_NO_CHECK 11
#define SO_PRIORITY 12
#define SO_LINGER 13
#define SO_BSDCOMPAT 14
#define SO_PASSCRED 16
#define SO_PEERCRED 17
#define SO_RCVLOWAT 18
#define SO_SNDLOWAT 19
#define SO_RCVTIMEO 20
#define SO_SNDTIMEO 21
#define SO_ACCEPTCONN 30
#define SO_SNDBUFFORCE 32
#define SO_RCVBUFFORCE 33
#define SO_SECURITY_AUTHENTICATION 22
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define SO_BINDTODEVICE 25
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27
#define SO_PEERNAME 28
#define SO_TIMESTAMP 29
#define SCM_TIMESTAMP 29
#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_RAW 3
#define SOCK_RDM 4
#define SOCK_SEQPACKET 5
#define SOCK_PACKET 10
#define UIO_FASTIOV 8
#define UIO_MAXIOV 1024
#define SCM_RIGHTS 0x01
#define SCM_CREDENTIALS 0x02
#define SCM_CONNECT 0x03
#define AF_UNSPEC 0
#define AF_UNIX 1
#define AF_LOCAL 1
#define AF_INET 2
#define AF_AX25 3
#define AF_IPX 4
#define AF_APPLETALK 5
#define AF_NETROM 6
#define AF_BRIDGE 7
#define AF_ATMPVC 8
#define AF_X25 9
#define AF_INET6 10
#define AF_ROSE 11
#define AF_DECnet 12
#define AF_NETBEUI 13
#define AF_SECURITY 14
#define AF_KEY 15
#define AF_NETLINK 16
#define AF_ROUTE 16
#define AF_PACKET 17
#define AF_ASH 18
#define AF_ECONET 19
#define AF_ATMSVC 20
#define AF_SNA 22
#define AF_IRDA 23
#define AF_PPPOX 24
#define AF_WANPIPE 25
#define AF_MAX 32
#define PF_UNSPEC 0
#define PF_UNIX 1
#define PF_LOCAL 1
#define PF_INET 2
#define PF_AX25 3
#define PF_IPX 4
#define PF_APPLETALK 5
#define PF_NETROM 6
#define PF_BRIDGE 7
#define PF_ATMPVC 8
#define PF_X25 9
#define PF_INET6 10
#define PF_ROSE 11
#define PF_DECnet 12
#define PF_NETBEUI 13
#define PF_SECURITY 14
#define PF_KEY 15
#define PF_NETLINK 16
#define PF_ROUTE 16
#define PF_PACKET 17
#define PF_ASH 18
#define PF_ECONET 19
#define PF_ATMSVC 20
#define PF_SNA 22
#define PF_IRDA 23
#define PF_PPPOX 24
#define PF_WANPIPE 25
#define PF_MAX 32
#define SOMAXCONN 128
#define MSG_OOB 1
#define MSG_PEEK 2
#define MSG_DONTROUTE 4
#define MSG_TRYHARD 4
#define MSG_CTRUNC 8
#define MSG_PROBE 0x10
#define MSG_TRUNC 0x20
#define MSG_DONTWAIT 0x40
#define MSG_EOR 0x80
#define MSG_WAITALL 0x100
#define MSG_FIN 0x200
#define MSG_EOF 0x200
#define MSG_SYN 0x400
#define MSG_CONFIRM 0x800
#define MSG_RST 0x1000
#define MSG_ERRQUEUE 0x2000
#define MSG_NOSIGNAL 0x4000
#define MSG_MORE 0x8000
#define SOL_IP 0
#define SOL_TCP 6
#define SOL_UDP 17
#define SOL_IPV6 41
#define SOL_ICMPV6 58
#define SOL_RAW 255
#define SOL_IPX 256
#define SOL_AX25 257
#define SOL_ATALK 258
#define SOL_NETROM 259
#define SOL_ROSE 260
#define SOL_DECNET 261
#define SOL_X25 262
#define SOL_PACKET 263
#define SOL_ATM 264
#define SOL_AAL 265
#define SOL_IRDA 266
#define IPX_TYPE 1
#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2
#define NI_NOFQDN 1
#define NI_NUMERICHOST 2
#define NI_NAMEREQD 4
#define NI_NUMERICSERV 8
#define NI_DGRAM 16
#define EAI_FAMILY -1
#define EAI_SOCKTYPE -2
#define EAI_BADFLAGS -3
#define EAI_NONAME -4
#define EAI_SERVICE -5
#define EAI_ADDRFAMILY -6
#define EAI_NODATA -7
#define EAI_MEMORY -8
#define EAI_FAIL -9
#define EAI_AGAIN -10
#define EAI_SYSTEM -11
#define AI_NUMERICHOST 1
#define AI_CANONNAME 2
#define AI_PASSIVE 4
#define SIOCADDRT 0x890B
#define SIOCDELRT 0x890C
#define SIOCRTMSG 0x890D
#define SIOCGIFNAME 0x8910
#define SIOCSIFLINK 0x8911
#define SIOCGIFCONF 0x8912
#define SIOCGIFFLAGS 0x8913
#define SIOCSIFFLAGS 0x8914
#define SIOCGIFADDR 0x8915
#define SIOCSIFADDR 0x8916
#define SIOCGIFDSTADDR 0x8917
#define SIOCSIFDSTADDR 0x8918
#define SIOCGIFBRDADDR 0x8919
#define SIOCSIFBRDADDR 0x891a
#define SIOCGIFNETMASK 0x891b
#define SIOCSIFNETMASK 0x891c
#define SIOCGIFMETRIC 0x891d
#define SIOCSIFMETRIC 0x891e
#define SIOCGIFMEM 0x891f
#define SIOCSIFMEM 0x8920
#define SIOCGIFMTU 0x8921
#define SIOCSIFMTU 0x8922
#define SIOCSIFNAME 0x8923
#define SIOCSIFHWADDR 0x8924
#define SIOCGIFENCAP 0x8925
#define SIOCSIFENCAP 0x8926
#define SIOCGIFHWADDR 0x8927
#define SIOCGIFSLAVE 0x8929
#define SIOCSIFSLAVE 0x8930
#define SIOCADDMULTI 0x8931
#define SIOCDELMULTI 0x8932
#define SIOCGIFINDEX 0x8933
#define SIOGIFINDEX 0x8933
#define SIOCSIFPFLAGS 0x8934
#define SIOCGIFPFLAGS 0x8935
#define SIOCDIFADDR 0x8936
#define SIOCSIFHWBROADCAST 0x8937
#define SIOCGIFCOUNT 0x8938
#define SIOCGIFBR 0x8940
#define SIOCSIFBR 0x8941
#define SIOCGIFTXQLEN 0x8942
#define SIOCSIFTXQLEN 0x8943
#define SIOCGIFDIVERT 0x8944
#define SIOCSIFDIVERT 0x8945
#define SIOCETHTOOL 0x8946
#define SIOCDARP 0x8953
#define SIOCGARP 0x8954
#define SIOCSARP 0x8955
#define SIOCDRARP 0x8960
#define SIOCGRARP 0x8961
#define SIOCSRARP 0x8962
#define SIOCGIFMAP 0x8970
#define SIOCSIFMAP 0x8971
#define SIOCADDDLCI 0x8980
#define SIOCDELDLCI 0x8981
#define SIOCDEVPRIVATE 0x89F0
#define PTRACE_TRACEME 0
#define PTRACE_PEEKTEXT 1
#define PTRACE_PEEKDATA 2
#define PTRACE_PEEKUSR 3
#define PTRACE_PEEKUSER 3
#define PTRACE_POKETEXT 4
#define PTRACE_POKEDATA 5
#define PTRACE_POKEUSR 6
#define PTRACE_POKEUSER 6
#define PTRACE_CONT 7
#define PTRACE_KILL 8
#define PTRACE_SINGLESTEP 9
#define PTRACE_ATTACH 0x10
#define PTRACE_DETACH 0x11
#define PTRACE_SYSCALL 24
#define PTRACE_GETEVENTMSG 0x4201
#define PTRACE_GETSIGINFO 0x4202
#define PTRACE_SETSIGINFO 0x4203
#define PTRACE_O_TRACESYSGOOD 0x00000001
#define PTRACE_O_TRACEFORK 0x00000002
#define PTRACE_O_TRACEVFORK 0x00000004
#define PTRACE_O_TRACECLONE 0x00000008
#define PTRACE_O_TRACEEXEC 0x00000010
#define PTRACE_O_TRACEVFORKDONE 0x00000020
#define PTRACE_O_TRACEEXIT 0x00000040
#define PTRACE_O_MASK 0x0000007f
#define PTRACE_EVENT_FORK 1
#define PTRACE_EVENT_VFORK 2
#define PTRACE_EVENT_CLONE 3
#define PTRACE_EVENT_EXEC 4
#define PTRACE_EVENT_VFORK_DONE 5
#define PTRACE_EVENT_EXIT 6
#define PT_TRACE_ME 0
#define PT_READ_I 1
#define PT_READ_D 2
#define PT_READ_U 3
#define PT_WRITE_I 4
#define PT_WRITE_D 5
#define PT_WRITE_U 6
#define PT_CONTINUE 7
#define PT_KILL 8
#define PT_STEP 9
#define PT_ATTACH 0x10
#define PT_DETACH 0x11
#define __NR_read 0
#define __NR_write 1
#define __NR_open 2
#define __NR_close 3
#define __NR_stat 4
#define __NR_fstat 5
#define __NR_lstat 6
#define __NR_poll 7
#define __NR_lseek 8
#define __NR_mmap 9
#define __NR_mprotect 10
#define __NR_munmap 11
#define __NR_brk 12
#define __NR_rt_sigaction 13
#define __NR_rt_sigprocmask 14
#define __NR_rt_sigreturn 15
#define __NR_ioctl 16
#define __NR_pread 17
#define __NR_pwrite 18
#define __NR_readv 19
#define __NR_writev 20
#define __NR_access 21
#define __NR_pipe 22
#define __NR_select 23
#define __NR_sched_yield 24
#define __NR_mremap 25
#define __NR_msync 26
#define __NR_mincore 27
#define __NR_madvise 28
#define __NR_shmget 29
#define __NR_shmat 30
#define __NR_shmctl 31
#define __NR_dup 32
#define __NR_dup2 33
#define __NR_pause 34
#define __NR_nanosleep 35
#define __NR_getitimer 36
#define __NR_alarm 37
#define __NR_setitimer 38
#define __NR_getpid 39
#define __NR_sendfile 40
#define __NR_socket 41
#define __NR_connect 42
#define __NR_accept 43
#define __NR_sendto 44
#define __NR_recvfrom 45
#define __NR_sendmsg 46
#define __NR_recvmsg 47
#define __NR_shutdown 48
#define __NR_bind 49
#define __NR_listen 50
#define __NR_getsockname 51
#define __NR_getpeername 52
#define __NR_socketpair 53
#define __NR_setsockopt 54
#define __NR_getsockopt 55
#define __NR_clone 56
#define __NR_fork 57
#define __NR_vfork 58
#define __NR_execve 59
#define __NR_exit 60
#define __NR_wait4 61
#define __NR_kill 62
#define __NR_uname 63
#define __NR_semget 64
#define __NR_semop 65
#define __NR_semctl 66
#define __NR_shmdt 67
#define __NR_msgget 68
#define __NR_msgsnd 69
#define __NR_msgrcv 70
#define __NR_msgctl 71
#define __NR_fcntl 72
#define __NR_flock 73
#define __NR_fsync 74
#define __NR_fdatasync 75
#define __NR_truncate 76
#define __NR_ftruncate 77
#define __NR_getdents 78
#define __NR_getcwd 79
#define __NR_chdir 80
#define __NR_fchdir 81
#define __NR_rename 82
#define __NR_mkdir 83
#define __NR_rmdir 84
#define __NR_creat 85
#define __NR_link 86
#define __NR_unlink 87
#define __NR_symlink 88
#define __NR_readlink 89
#define __NR_chmod 90
#define __NR_fchmod 91
#define __NR_chown 92
#define __NR_fchown 93
#define __NR_lchown 94
#define __NR_umask 95
#define __NR_gettimeofday 96
#define __NR_getrlimit 97
#define __NR_getrusage 98
#define __NR_sysinfo 99
#define __NR_times 100
#define __NR_ptrace 101
#define __NR_getuid 102
#define __NR_syslog 103
#define __NR_getgid 104
#define __NR_setuid 105
#define __NR_setgid 106
#define __NR_geteuid 107
#define __NR_getegid 108
#define __NR_setpgid 109
#define __NR_getppid 110
#define __NR_getpgrp 111
#define __NR_setsid 112
#define __NR_setreuid 113
#define __NR_setregid 114
#define __NR_getgroups 115
#define __NR_setgroups 116
#define __NR_setresuid 117
#define __NR_getresuid 118
#define __NR_setresgid 119
#define __NR_getresgid 120
#define __NR_getpgid 121
#define __NR_setfsuid 122
#define __NR_setfsgid 123
#define __NR_getsid 124
#define __NR_capget 125
#define __NR_capset 126
#define __NR_rt_sigpending 127
#define __NR_rt_sigtimedwait 128
#define __NR_rt_sigqueueinfo 129
#define __NR_rt_sigsuspend 130
#define __NR_sigaltstack 131
#define __NR_utime 132
#define __NR_mknod 133
#define __NR_uselib 134
#define __NR_personality 135
#define __NR_ustat 136
#define __NR_statfs 137
#define __NR_fstatfs 138
#define __NR_sysfs 139
#define __NR_getpriority 140
#define __NR_setpriority 141
#define __NR_sched_setparam 142
#define __NR_sched_getparam 143
#define __NR_sched_setscheduler 144
#define __NR_sched_getscheduler 145
#define __NR_sched_get_priority_max 146
#define __NR_sched_get_priority_min 147
#define __NR_sched_rr_get_interval 148
#define __NR_mlock 149
#define __NR_munlock 150
#define __NR_mlockall 151
#define __NR_munlockall 152
#define __NR_vhangup 153
#define __NR_modify_ldt 154
#define __NR_pivot_root 155
#define __NR__sysctl 156
#define __NR_prctl 157
#define __NR_arch_prctl 158
#define __NR_adjtimex 159
#define __NR_setrlimit 160
#define __NR_chroot 161
#define __NR_sync 162
#define __NR_acct 163
#define __NR_settimeofday 164
#define __NR_mount 165
#define __NR_umount2 166
#define __NR_swapon 167
#define __NR_swapoff 168
#define __NR_reboot 169
#define __NR_sethostname 170
#define __NR_setdomainname 171
#define __NR_iopl 172
#define __NR_ioperm 173
#define __NR_create_module 174
#define __NR_init_module 175
#define __NR_delete_module 176
#define __NR_get_kernel_syms 177
#define __NR_query_module 178
#define __NR_quotactl 179
#define __NR_nfsservctl 180
#define __NR_getpmsg 181
#define __NR_putpmsg 182
#define __NR_afs_syscall 183
#define __NR_tuxcall 184
#define __NR_security 185
#define __NR_gettid 186
#define __NR_readahead 187
#define __NR_setxattr 188
#define __NR_lsetxattr 189
#define __NR_fsetxattr 190
#define __NR_getxattr 191
#define __NR_lgetxattr 192
#define __NR_fgetxattr 193
#define __NR_listxattr 194
#define __NR_llistxattr 195
#define __NR_flistxattr 196
#define __NR_removexattr 197
#define __NR_lremovexattr 198
#define __NR_fremovexattr 199
#define __NR_tkill 200
#define __NR_time 201
#define __NR_futex 202
#define __NR_sched_setaffinity 203
#define __NR_sched_getaffinity 204
#define __NR_set_thread_area 205
#define __NR_io_setup 206
#define __NR_io_destroy 207
#define __NR_io_getevents 208
#define __NR_io_submit 209
#define __NR_io_cancel 210
#define __NR_get_thread_area 211
#define __NR_lookup_dcookie 212
#define __NR_epoll_create 213
#define __NR_epoll_ctl_old 214
#define __NR_epoll_wait_old 215
#define __NR_remap_file_pages 216
#define __NR_getdents64 217
#define __NR_set_tid_address 218
#define __NR_restart_syscall 219
#define __NR_semtimedop 220
#define __NR_fadvise64 221
#define __NR_timer_create 222
#define __NR_timer_settime 223
#define __NR_timer_gettime 224
#define __NR_timer_getoverrun 225
#define __NR_timer_delete 226
#define __NR_clock_settime 227
#define __NR_clock_gettime 228
#define __NR_clock_getres 229
#define __NR_clock_nanosleep 230
#define __NR_exit_group 231
#define __NR_epoll_wait 232
#define __NR_epoll_ctl 233
#define __NR_tgkill 234
#define __NR_utimes 235
#define __NR_vserver 236
#define __NR_vserver 236
#define __NR_mbind 237
#define __NR_set_mempolicy 238
#define __NR_get_mempolicy 239
#define __NR_mq_open 240
#define __NR_mq_unlink 241
#define __NR_mq_timedsend 242
#define __NR_mq_timedreceive 243
#define __NR_mq_notify 244
#define __NR_mq_getsetattr 245
#define __NR_kexec_load 246
#define __NR_waitid 247
#define __NR_add_key 248
#define __NR_request_key 249
#define __NR_keyctl 250
#define __NR_ioprio_set 251
#define __NR_ioprio_get 252
#define __NR_inotify_init 253
#define __NR_inotify_add_watch 254
#define __NR_inotify_rm_watch 255
#define __NR_migrate_pages 256
#define __NR_openat 257
#define __NR_mkdirat 258
#define __NR_mknodat 259
#define __NR_fchownat 260
#define __NR_futimesat 261
#define __NR_newfstatat 262
#define __NR_unlinkat 263
#define __NR_renameat 264
#define __NR_linkat 265
#define __NR_symlinkat 266
#define __NR_readlinkat 267
#define __NR_fchmodat 268
#define __NR_faccessat 269
#define __NR_pselect6 270
#define __NR_ppoll 271
#define __NR_unshare 272
#define __NR_set_robust_list 273
#define __NR_get_robust_list 274
#define __NR_splice 275
#define __NR_tee 276
#define __NR_sync_file_range 277
#define __NR_vmsplice 278
#define __NR_move_pages 279
#define __NR_utimensat 280
#define __NR_epoll_pwait 281
#define __NR_signalfd 282
#define __NR_timerfd 283
#define __NR_eventfd 284
#define __NR_fallocate 285
#define __NR_timerfd_settime 286
#define __NR_timerfd_gettime 287
#define __NR_accept4 288
#define __NR_signalfd4 289
#define __NR_eventfd2 290
#define __NR_epoll_create1 291
#define __NR_dup3 292
#define __NR_pipe2 293
#define __NR_inotify_init1 294
#define __NR_preadv 295
#define __NR_pwritev 296
#define __NR_rt_tgsigqueueinfo 297
#define __NR_perf_event_open 298
#define __NR_recvmmsg 299
#define __NR_fanotify_init 300
#define __NR_fanotify_mark 301
#define __NR_prlimit64 302
#define SYS32_restart_syscall 0
#define SYS32_exit 1
#define SYS32_fork 2
#define SYS32_read 3
#define SYS32_write 4
#define SYS32_open 5
#define SYS32_close 6
#define SYS32_waitpid 7
#define SYS32_creat 8
#define SYS32_link 9
#define SYS32_unlink 10
#define SYS32_execve 11
#define SYS32_chdir 12
#define SYS32_time 13
#define SYS32_mknod 14
#define SYS32_chmod 15
#define SYS32_lchown 16
#define SYS32_break 17
#define SYS32_oldstat 18
#define SYS32_lseek 19
#define SYS32_getpid 20
#define SYS32_mount 21
#define SYS32_umount 22
#define SYS32_setuid 23
#define SYS32_getuid 24
#define SYS32_stime 25
#define SYS32_ptrace 26
#define SYS32_alarm 27
#define SYS32_oldfstat 28
#define SYS32_pause 29
#define SYS32_utime 30
#define SYS32_stty 31
#define SYS32_gtty 32
#define SYS32_access 33
#define SYS32_nice 34
#define SYS32_ftime 35
#define SYS32_sync 36
#define SYS32_kill 37
#define SYS32_rename 38
#define SYS32_mkdir 39
#define SYS32_rmdir 40
#define SYS32_dup 41
#define SYS32_pipe 42
#define SYS32_times 43
#define SYS32_prof 44
#define SYS32_brk 45
#define SYS32_setgid 46
#define SYS32_getgid 47
#define SYS32_signal 48
#define SYS32_geteuid 49
#define SYS32_getegid 50
#define SYS32_acct 51
#define SYS32_umount2 52
#define SYS32_lock 53
#define SYS32_ioctl 54
#define SYS32_fcntl 55
#define SYS32_mpx 56
#define SYS32_setpgid 57
#define SYS32_ulimit 58
#define SYS32_oldolduname 59
#define SYS32_umask 60
#define SYS32_chroot 61
#define SYS32_ustat 62
#define SYS32_dup2 63
#define SYS32_getppid 64
#define SYS32_getpgrp 65
#define SYS32_setsid 66
#define SYS32_sigaction 67
#define SYS32_sgetmask 68
#define SYS32_ssetmask 69
#define SYS32_setreuid 70
#define SYS32_setregid 71
#define SYS32_sigsuspend 72
#define SYS32_sigpending 73
#define SYS32_sethostname 74
#define SYS32_setrlimit 75
#define SYS32_getrlimit 76
#define SYS32_getrusage 77
#define SYS32_gettimeofday 78
#define SYS32_settimeofday 79
#define SYS32_getgroups 80
#define SYS32_setgroups 81
#define SYS32_select 82
#define SYS32_symlink 83
#define SYS32_oldlstat 84
#define SYS32_readlink 85
#define SYS32_uselib 86
#define SYS32_swapon 87
#define SYS32_reboot 88
#define SYS32_readdir 89
#define SYS32_mmap 90
#define SYS32_munmap 91
#define SYS32_truncate 92
#define SYS32_ftruncate 93
#define SYS32_fchmod 94
#define SYS32_fchown 95
#define SYS32_getpriority 96
#define SYS32_setpriority 97
#define SYS32_profil 98
#define SYS32_statfs 99
#define SYS32_fstatfs 100
#define SYS32_ioperm 101
#define SYS32_socketcall 102
#define SYS32_syslog 103
#define SYS32_setitimer 104
#define SYS32_getitimer 105
#define SYS32_stat 106
#define SYS32_lstat 107
#define SYS32_fstat 108
#define SYS32_olduname 109
#define SYS32_iopl 110
#define SYS32_vhangup 111
#define SYS32_idle 112
#define SYS32_vm86old 113
#define SYS32_wait4 114
#define SYS32_swapoff 115
#define SYS32_sysinfo 116
#define SYS32_ipc 117
#define SYS32_fsync 118
#define SYS32_sigreturn 119
#define SYS32_clone 120
#define SYS32_setdomainname 121
#define SYS32_uname 122
#define SYS32_modify_ldt 123
#define SYS32_adjtimex 124
#define SYS32_mprotect 125
#define SYS32_sigprocmask 126
#define SYS32_create_module 127
#define SYS32_init_module 128
#define SYS32_delete_module 129
#define SYS32_get_kernel_syms 130
#define SYS32_quotactl 131
#define SYS32_getpgid 132
#define SYS32_fchdir 133
#define SYS32_bdflush 134
#define SYS32_sysfs 135
#define SYS32_personality 136
#define SYS32_afs_syscall 137
#define SYS32_setfsuid 138
#define SYS32_setfsgid 139
#define SYS32__llseek 140
#define SYS32_getdents 141
#define SYS32__newselect 142
#define SYS32_flock 143
#define SYS32_msync 144
#define SYS32_readv 145
#define SYS32_writev 146
#define SYS32_getsid 147
#define SYS32_fdatasync 148
#define SYS32__sysctl 149
#define SYS32_mlock 150
#define SYS32_munlock 151
#define SYS32_mlockall 152
#define SYS32_munlockall 153
#define SYS32_sched_setparam 154
#define SYS32_sched_getparam 155
#define SYS32_sched_setscheduler 156
#define SYS32_sched_getscheduler 157
#define SYS32_sched_yield 158
#define SYS32_sched_get_priority_max 159
#define SYS32_sched_get_priority_min 160
#define SYS32_sched_rr_get_interval 161
#define SYS32_nanosleep 162
#define SYS32_mremap 163
#define SYS32_setresuid 164
#define SYS32_getresuid 165
#define SYS32_vm86 166
#define SYS32_query_module 167
#define SYS32_poll 168
#define SYS32_nfsservctl 169
#define SYS32_setresgid 170
#define SYS32_getresgid 171
#define SYS32_prctl 172
#define SYS32_rt_sigreturn 173
#define SYS32_rt_sigaction 174
#define SYS32_rt_sigprocmask 175
#define SYS32_rt_sigpending 176
#define SYS32_rt_sigtimedwait 177
#define SYS32_rt_sigqueueinfo 178
#define SYS32_rt_sigsuspend 179
#define SYS32_pread64 180
#define SYS32_pwrite64 181
#define SYS32_chown 182
#define SYS32_getcwd 183
#define SYS32_capget 184
#define SYS32_capset 185
#define SYS32_sigaltstack 186
#define SYS32_sendfile 187
#define SYS32_getpmsg 188
#define SYS32_putpmsg 189
#define SYS32_vfork 190
#define SYS32_ugetrlimit 191
#define SYS32_mmap2 192
#define SYS32_truncate64 193
#define SYS32_ftruncate64 194
#define SYS32_stat64 195
#define SYS32_lstat64 196
#define SYS32_fstat64 197
#define SYS32_lchown32 198
#define SYS32_getuid32 199
#define SYS32_getgid32 200
#define SYS32_geteuid32 201
#define SYS32_getegid32 202
#define SYS32_setreuid32 203
#define SYS32_setregid32 204
#define SYS32_getgroups32 205
#define SYS32_setgroups32 206
#define SYS32_fchown32 207
#define SYS32_setresuid32 208
#define SYS32_getresuid32 209
#define SYS32_setresgid32 210
#define SYS32_getresgid32 211
#define SYS32_chown32 212
#define SYS32_setuid32 213
#define SYS32_setgid32 214
#define SYS32_setfsuid32 215
#define SYS32_setfsgid32 216
#define SYS32_pivot_root 217
#define SYS32_mincore 218
#define SYS32_madvise 219
#define SYS32_madvise1 219
#define SYS32_getdents64 220
#define SYS32_fcntl64 221
#define SYS32_gettid 224
#define SYS32_readahead 225
#define SYS32_setxattr 226
#define SYS32_lsetxattr 227
#define SYS32_fsetxattr 228
#define SYS32_getxattr 229
#define SYS32_lgetxattr 230
#define SYS32_fgetxattr 231
#define SYS32_listxattr 232
#define SYS32_llistxattr 233
#define SYS32_flistxattr 234
#define SYS32_removexattr 235
#define SYS32_lremovexattr 236
#define SYS32_fremovexattr 237
#define SYS32_tkill 238
#define SYS32_sendfile64 239
#define SYS32_futex 240
#define SYS32_sched_setaffinity 241
#define SYS32_sched_getaffinity 242
#define SYS32_set_thread_area 243
#define SYS32_get_thread_area 244
#define SYS32_io_setup 245
#define SYS32_io_destroy 246
#define SYS32_io_getevents 247
#define SYS32_io_submit 248
#define SYS32_io_cancel 249
#define SYS32_fadvise64 250
#define SYS32_exit_group 252
#define SYS32_lookup_dcookie 253
#define SYS32_epoll_create 254
#define SYS32_epoll_ctl 255
#define SYS32_epoll_wait 256
#define SYS32_remap_file_pages 257
#define SYS32_set_tid_address 258
#define SYS32_timer_create 259
#define SYS32_timer_settime (222+1)
#define SYS32_timer_gettime (222+2)
#define SYS32_timer_getoverrun (222+3)
#define SYS32_timer_delete (222+4)
#define SYS32_clock_settime (222+5)
#define SYS32_clock_gettime (222+6)
#define SYS32_clock_getres (222+7)
#define SYS32_clock_nanosleep (222+8)
#define SYS32_statfs64 268
#define SYS32_fstatfs64 269
#define SYS32_tgkill 270
#define SYS32_utimes 271
#define SYS32_fadvise64_64 272
#define SYS32_vserver 273
#define SYS32_mbind 274
#define SYS32_get_mempolicy 275
#define SYS32_set_mempolicy 276
#define SYS32_mq_open 277
#define SYS32_mq_unlink (240+1)
#define SYS32_mq_timedsend (240+2)
#define SYS32_mq_timedreceive (240+3)
#define SYS32_mq_notify (240+4)
#define SYS32_mq_getsetattr (240+5)
#define SYS32_kexec_load 283
#define SYS32_waitid 284
#define SYS32_add_key 286
#define SYS32_request_key 287
#define SYS32_keyctl 288
#define SYS32_ioprio_set 289
#define SYS32_ioprio_get 290
#define SYS32_inotify_init 291
#define SYS32_inotify_add_watch 292
#define SYS32_inotify_rm_watch 293
#define SYS32_migrate_pages 294
#define SYS32_openat 295
#define SYS32_mkdirat 296
#define SYS32_mknodat 297
#define SYS32_fchownat 298
#define SYS32_futimesat 299
#define SYS32_fstatat64 300
#define SYS32_unlinkat 301
#define SYS32_renameat 302
#define SYS32_linkat 303
#define SYS32_symlinkat 304
#define SYS32_readlinkat 305
#define SYS32_fchmodat 306
#define SYS32_faccessat 307
#define SYS32_pselect6 308
#define SYS32_ppoll 309
#define SYS32_unshare 310
#define SYS32_set_robust_list 311
#define SYS32_get_robust_list 312
#define SYS32_splice 313
#define SYS32_sync_file_range 314
#define SYS32_tee 315
#define SYS32_vmsplice 316
#define SYS32_move_pages 317
#define SYS32_getcpu 318
#define SYS32_epoll_pwait 319
#define SYS32_utimensat 320
#define SYS32_signalfd 321
#define SYS32_timerfd_create 322
#define SYS32_eventfd 323
#define SYS32_fallocate 324
#define SYS32_timerfd_settime 325
#define SYS32_timerfd_gettime 326
#define SYS32_signalfd4 327
#define SYS32_eventfd2 328
#define SYS32_epoll_create1 329
#define SYS32_dup3 330
#define SYS32_pipe2 331
#define SYS32_inotify_init1 332
#define SYS32_preadv 333
#define SYS32_pwritev 334
#define SYS32_rt_tgsigqueueinfo 335
#define SYS32_perf_event_open 336
#define SYS32_recvmmsg 337
#define SYS32_fanotify_init 338
#define SYS32_fanotify_mark 339
#define SYS32_prlimit64 340
#define SYS32_name_to_handle_at 341
#define SYS32_open_by_handle_at 342
#define SYS32_clock_adjtime 343
#define SYS32_syncfs 344
#define SYS32_sendmmsg 345
#define SYS32_setns 346
#define SYS32_process_vm_readv 347
#define SYS32_process_vm_writev 348
