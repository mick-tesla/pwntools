MAP_32BIT = 0x40
INADDR_ANY = 0
INADDR_BROADCAST = 0xffffffff
INADDR_NONE = 0xffffffff
INADDR_LOOPBACK = 0x7f000001
EPERM = 1
ENOENT = 2
ESRCH = 3
EINTR = 4
EIO = 5
ENXIO = 6
E2BIG = 7
ENOEXEC = 8
EBADF = 9
ECHILD = 10
EAGAIN = 11
ENOMEM = 12
EACCES = 13
EFAULT = 14
ENOTBLK = 15
EBUSY = 16
EEXIST = 17
EXDEV = 18
ENODEV = 19
ENOTDIR = 20
EISDIR = 21
EINVAL = 22
ENFILE = 23
EMFILE = 24
ENOTTY = 25
ETXTBSY = 26
EFBIG = 27
ENOSPC = 28
ESPIPE = 29
EROFS = 30
EMLINK = 31
EPIPE = 32
EDOM = 33
ERANGE = 34
EDEADLK = 35
ENAMETOOLONG = 36
ENOLCK = 37
ENOSYS = 38
ENOTEMPTY = 39
ELOOP = 40
EWOULDBLOCK = 11
ENOMSG = 42
EIDRM = 43
ECHRNG = 44
EL2NSYNC = 45
EL3HLT = 46
EL3RST = 47
ELNRNG = 48
EUNATCH = 49
ENOCSI = 50
EL2HLT = 51
EBADE = 52
EBADR = 53
EXFULL = 54
ENOANO = 55
EBADRQC = 56
EBADSLT = 57
EDEADLOCK = 35
EBFONT = 59
ENOSTR = 60
ENODATA = 61
ETIME = 62
ENOSR = 63
ENONET = 64
ENOPKG = 65
EREMOTE = 66
ENOLINK = 67
EADV = 68
ESRMNT = 69
ECOMM = 70
EPROTO = 71
EMULTIHOP = 72
EDOTDOT = 73
EBADMSG = 74
EOVERFLOW = 75
ENOTUNIQ = 76
EBADFD = 77
EREMCHG = 78
ELIBACC = 79
ELIBBAD = 80
ELIBSCN = 81
ELIBMAX = 82
ELIBEXEC = 83
EILSEQ = 84
ERESTART = 85
ESTRPIPE = 86
EUSERS = 87
ENOTSOCK = 88
EDESTADDRREQ = 89
EMSGSIZE = 90
EPROTOTYPE = 91
ENOPROTOOPT = 92
EPROTONOSUPPORT = 93
ESOCKTNOSUPPORT = 94
EOPNOTSUPP = 95
ENOTSUP = 95
EPFNOSUPPORT = 96
EAFNOSUPPORT = 97
EADDRINUSE = 98
EADDRNOTAVAIL = 99
ENETDOWN = 100
ENETUNREACH = 101
ENETRESET = 102
ECONNABORTED = 103
ECONNRESET = 104
ENOBUFS = 105
EISCONN = 106
ENOTCONN = 107
ESHUTDOWN = 108
ETOOMANYREFS = 109
ETIMEDOUT = 110
ECONNREFUSED = 111
EHOSTDOWN = 112
EHOSTUNREACH = 113
EALREADY = 114
EINPROGRESS = 115
ESTALE = 116
EUCLEAN = 117
ENOTNAM = 118
ENAVAIL = 119
EISNAM = 120
EREMOTEIO = 121
EDQUOT = 122
ENOMEDIUM = 123
EMEDIUMTYPE = 124
ECANCELED = 125
ENOKEY = 126
EKEYEXPIRED = 127
EKEYREVOKED = 128
EKEYREJECTED = 129
__SYS_NERR = ((129) + 1)
__LITTLE_ENDIAN = 1234
__BIG_ENDIAN = 4321
__BYTE_ORDER = 1234
__FLOAT_WORD_ORDER = 1234
LITTLE_ENDIAN = 1234
BIG_ENDIAN = 4321
BYTE_ORDER = 1234
__WORDSIZE = 64
__WORDSIZE_COMPAT32 = 1
__FSUID_H = 1
NSIG = 32
_NSIG = 64
SIGHUP = 1
SIGINT = 2
SIGQUIT = 3
SIGILL = 4
SIGTRAP = 5
SIGABRT = 6
SIGIOT = 6
SIGFPE = 8
SIGKILL = 9
SIGSEGV = 11
SIGPIPE = 13
SIGALRM = 14
SIGTERM = 15
SIGUNUSED = 31
SIGBUS = 7
SIGUSR1 = 10
SIGUSR2 = 12
SIGSTKFLT = 16
SIGCHLD = 17
SIGCONT = 18
SIGSTOP = 19
SIGTSTP = 20
SIGTTIN = 21
SIGTTOU = 22
SIGURG = 23
SIGXCPU = 24
SIGXFSZ = 25
SIGVTALRM = 26
SIGPROF = 27
SIGWINCH = 28
SIGIO = 29
SIGPWR = 30
SIGSYS = 31
SIGCLD = 17
SIGPOLL = 29
SIGLOST = 30
SIGRTMIN = 32
SIGRTMAX = (64-1)
SA_NOCLDSTOP = 0x00000001
SA_NOCLDWAIT = 0x00000002
SA_SIGINFO = 0x00000004
SA_RESTORER = 0x04000000
SA_ONSTACK = 0x08000000
SA_RESTART = 0x10000000
SA_INTERRUPT = 0x20000000
SA_NODEFER = 0x40000000
SA_RESETHAND = 0x80000000
SA_NOMASK = 0x40000000
SA_ONESHOT = 0x80000000
SS_ONSTACK = 1
SS_DISABLE = 2
MINSIGSTKSZ = 2048
SIGSTKSZ = 8192
SIG_BLOCK = 0
SIG_UNBLOCK = 1
SIG_SETMASK = 2
SI_MAX_SIZE = 128
SIGEV_SIGNAL = 0
SIGEV_NONE = 1
SIGEV_THREAD = 2
SIGEV_THREAD_ID = 4
SIGEV_MAX_SIZE = 64
_SYS_TIME_H = 1
ITIMER_REAL = 0
ITIMER_VIRTUAL = 1
ITIMER_PROF = 2
FD_SETSIZE = 1024
R_OK = 4
W_OK = 2
X_OK = 1
F_OK = 0
SEEK_SET = 0
SEEK_CUR = 1
SEEK_END = 2
STDIN_FILENO = 0
STDOUT_FILENO = 1
STDERR_FILENO = 2
_CS_PATH = 1
_SC_CLK_TCK = 1
_SC_ARG_MAX = 2
_SC_NGROUPS_MAX = 3
_SC_OPEN_MAX = 4
_SC_PAGESIZE = 5
_SC_NPROCESSORS_ONLN = 6
_SC_NPROCESSORS_CONF = 6
_SC_PHYS_PAGES = 7
_PC_PATH_MAX = 1
_PC_VDISABLE = 2
L_cuserid = 17
_POSIX_VERSION = 199506
F_ULOCK = 0
F_LOCK = 1
F_TLOCK = 2
F_TEST = 3
S_IFMT = 00170000
S_IFSOCK = 0140000
S_IFLNK = 0120000
S_IFREG = 0100000
S_IFBLK = 0060000
S_IFDIR = 0040000
S_IFCHR = 0020000
S_IFIFO = 0010000
S_ISUID = 0004000
S_ISGID = 0002000
S_ISVTX = 0001000
S_IRWXU = 00700
S_IRUSR = 00400
S_IWUSR = 00200
S_IXUSR = 00100
S_IRWXG = 00070
S_IRGRP = 00040
S_IWGRP = 00020
S_IXGRP = 00010
S_IRWXO = 00007
S_IROTH = 00004
S_IWOTH = 00002
S_IXOTH = 00001
S_IREAD = 00400
S_IWRITE = 00200
S_IEXEC = 00100
F_LINUX_SPECIFIC_BASE = 1024
O_ACCMODE = 0003
O_RDONLY = 00
O_WRONLY = 01
O_RDWR = 02
O_CREAT = 0100
O_EXCL = 0200
O_NOCTTY = 0400
O_TRUNC = 01000
O_APPEND = 02000
O_NONBLOCK = 04000
O_NDELAY = 04000
O_SYNC = 010000
FASYNC = 020000
O_DIRECT = 040000
O_LARGEFILE = 0100000
O_DIRECTORY = 0200000
O_NOFOLLOW = 0400000
O_NOATIME = 01000000
F_DUPFD = 0
F_GETFD = 1
F_SETFD = 2
F_GETFL = 3
F_SETFL = 4
F_GETLK = 5
F_SETLK = 6
F_SETLKW = 7
F_SETOWN = 8
F_GETOWN = 9
F_SETSIG = 10
F_GETSIG = 11
F_GETLK64 = 12
F_SETLK64 = 13
F_SETLKW64 = 14
FD_CLOEXEC = 1
F_RDLCK = 0
F_WRLCK = 1
F_UNLCK = 2
F_EXLCK = 4
F_SHLCK = 8
F_INPROGRESS = 16
LOCK_SH = 1
LOCK_EX = 2
LOCK_NB = 4
LOCK_UN = 8
LOCK_MAND = 32
LOCK_READ = 64
LOCK_WRITE = 128
LOCK_RW = 192
O_ASYNC = 020000
MREMAP_MAYMOVE = 1
MREMAP_FIXED = 2
PROT_READ = 0x1
PROT_WRITE = 0x2
PROT_EXEC = 0x4
PROT_NONE = 0x0
MAP_SHARED = 0x01
MAP_PRIVATE = 0x02
MAP_FIXED = 0x10
MAP_ANONYMOUS = 0x20
MAP_GROWSDOWN = 0x0100
MAP_DENYWRITE = 0x0800
MAP_EXECUTABLE = 0x1000
MAP_LOCKED = 0x2000
MAP_NORESERVE = 0x4000
MAP_POPULATE = 0x8000
MS_ASYNC = 1
MS_INVALIDATE = 2
MS_SYNC = 4
MCL_CURRENT = 1
MCL_FUTURE = 2
MADV_NORMAL = 0x0
MADV_RANDOM = 0x1
MADV_SEQUENTIAL = 0x2
MADV_WILLNEED = 0x3
MADV_DONTNEED = 0x4
MAP_ANON = 0x20
MAP_FILE = 0
SOL_SOCKET = 1
SO_DEBUG = 1
SO_REUSEADDR = 2
SO_TYPE = 3
SO_ERROR = 4
SO_DONTROUTE = 5
SO_BROADCAST = 6
SO_SNDBUF = 7
SO_RCVBUF = 8
SO_KEEPALIVE = 9
SO_OOBINLINE = 10
SO_NO_CHECK = 11
SO_PRIORITY = 12
SO_LINGER = 13
SO_BSDCOMPAT = 14
SO_PASSCRED = 16
SO_PEERCRED = 17
SO_RCVLOWAT = 18
SO_SNDLOWAT = 19
SO_RCVTIMEO = 20
SO_SNDTIMEO = 21
SO_ACCEPTCONN = 30
SO_SNDBUFFORCE = 32
SO_RCVBUFFORCE = 33
SO_SECURITY_AUTHENTICATION = 22
SO_SECURITY_ENCRYPTION_TRANSPORT = 23
SO_SECURITY_ENCRYPTION_NETWORK = 24
SO_BINDTODEVICE = 25
SO_ATTACH_FILTER = 26
SO_DETACH_FILTER = 27
SO_PEERNAME = 28
SO_TIMESTAMP = 29
SCM_TIMESTAMP = 29
SOCK_STREAM = 1
SOCK_DGRAM = 2
SOCK_RAW = 3
SOCK_RDM = 4
SOCK_SEQPACKET = 5
SOCK_PACKET = 10
UIO_FASTIOV = 8
UIO_MAXIOV = 1024
SCM_RIGHTS = 0x01
SCM_CREDENTIALS = 0x02
SCM_CONNECT = 0x03
AF_UNSPEC = 0
AF_UNIX = 1
AF_LOCAL = 1
AF_INET = 2
AF_AX25 = 3
AF_IPX = 4
AF_APPLETALK = 5
AF_NETROM = 6
AF_BRIDGE = 7
AF_ATMPVC = 8
AF_X25 = 9
AF_INET6 = 10
AF_ROSE = 11
AF_DECnet = 12
AF_NETBEUI = 13
AF_SECURITY = 14
AF_KEY = 15
AF_NETLINK = 16
AF_ROUTE = 16
AF_PACKET = 17
AF_ASH = 18
AF_ECONET = 19
AF_ATMSVC = 20
AF_SNA = 22
AF_IRDA = 23
AF_PPPOX = 24
AF_WANPIPE = 25
AF_MAX = 32
PF_UNSPEC = 0
PF_UNIX = 1
PF_LOCAL = 1
PF_INET = 2
PF_AX25 = 3
PF_IPX = 4
PF_APPLETALK = 5
PF_NETROM = 6
PF_BRIDGE = 7
PF_ATMPVC = 8
PF_X25 = 9
PF_INET6 = 10
PF_ROSE = 11
PF_DECnet = 12
PF_NETBEUI = 13
PF_SECURITY = 14
PF_KEY = 15
PF_NETLINK = 16
PF_ROUTE = 16
PF_PACKET = 17
PF_ASH = 18
PF_ECONET = 19
PF_ATMSVC = 20
PF_SNA = 22
PF_IRDA = 23
PF_PPPOX = 24
PF_WANPIPE = 25
PF_MAX = 32
SOMAXCONN = 128
MSG_OOB = 1
MSG_PEEK = 2
MSG_DONTROUTE = 4
MSG_TRYHARD = 4
MSG_CTRUNC = 8
MSG_PROBE = 0x10
MSG_TRUNC = 0x20
MSG_DONTWAIT = 0x40
MSG_EOR = 0x80
MSG_WAITALL = 0x100
MSG_FIN = 0x200
MSG_EOF = 0x200
MSG_SYN = 0x400
MSG_CONFIRM = 0x800
MSG_RST = 0x1000
MSG_ERRQUEUE = 0x2000
MSG_NOSIGNAL = 0x4000
MSG_MORE = 0x8000
SOL_IP = 0
SOL_TCP = 6
SOL_UDP = 17
SOL_IPV6 = 41
SOL_ICMPV6 = 58
SOL_RAW = 255
SOL_IPX = 256
SOL_AX25 = 257
SOL_ATALK = 258
SOL_NETROM = 259
SOL_ROSE = 260
SOL_DECNET = 261
SOL_X25 = 262
SOL_PACKET = 263
SOL_ATM = 264
SOL_AAL = 265
SOL_IRDA = 266
IPX_TYPE = 1
SHUT_RD = 0
SHUT_WR = 1
SHUT_RDWR = 2
NI_NOFQDN = 1
NI_NUMERICHOST = 2
NI_NAMEREQD = 4
NI_NUMERICSERV = 8
NI_DGRAM = 16
EAI_FAMILY = -1
EAI_SOCKTYPE = -2
EAI_BADFLAGS = -3
EAI_NONAME = -4
EAI_SERVICE = -5
EAI_ADDRFAMILY = -6
EAI_NODATA = -7
EAI_MEMORY = -8
EAI_FAIL = -9
EAI_AGAIN = -10
EAI_SYSTEM = -11
AI_NUMERICHOST = 1
AI_CANONNAME = 2
AI_PASSIVE = 4
SIOCADDRT = 0x890B
SIOCDELRT = 0x890C
SIOCRTMSG = 0x890D
SIOCGIFNAME = 0x8910
SIOCSIFLINK = 0x8911
SIOCGIFCONF = 0x8912
SIOCGIFFLAGS = 0x8913
SIOCSIFFLAGS = 0x8914
SIOCGIFADDR = 0x8915
SIOCSIFADDR = 0x8916
SIOCGIFDSTADDR = 0x8917
SIOCSIFDSTADDR = 0x8918
SIOCGIFBRDADDR = 0x8919
SIOCSIFBRDADDR = 0x891a
SIOCGIFNETMASK = 0x891b
SIOCSIFNETMASK = 0x891c
SIOCGIFMETRIC = 0x891d
SIOCSIFMETRIC = 0x891e
SIOCGIFMEM = 0x891f
SIOCSIFMEM = 0x8920
SIOCGIFMTU = 0x8921
SIOCSIFMTU = 0x8922
SIOCSIFNAME = 0x8923
SIOCSIFHWADDR = 0x8924
SIOCGIFENCAP = 0x8925
SIOCSIFENCAP = 0x8926
SIOCGIFHWADDR = 0x8927
SIOCGIFSLAVE = 0x8929
SIOCSIFSLAVE = 0x8930
SIOCADDMULTI = 0x8931
SIOCDELMULTI = 0x8932
SIOCGIFINDEX = 0x8933
SIOGIFINDEX = 0x8933
SIOCSIFPFLAGS = 0x8934
SIOCGIFPFLAGS = 0x8935
SIOCDIFADDR = 0x8936
SIOCSIFHWBROADCAST = 0x8937
SIOCGIFCOUNT = 0x8938
SIOCGIFBR = 0x8940
SIOCSIFBR = 0x8941
SIOCGIFTXQLEN = 0x8942
SIOCSIFTXQLEN = 0x8943
SIOCGIFDIVERT = 0x8944
SIOCSIFDIVERT = 0x8945
SIOCETHTOOL = 0x8946
SIOCDARP = 0x8953
SIOCGARP = 0x8954
SIOCSARP = 0x8955
SIOCDRARP = 0x8960
SIOCGRARP = 0x8961
SIOCSRARP = 0x8962
SIOCGIFMAP = 0x8970
SIOCSIFMAP = 0x8971
SIOCADDDLCI = 0x8980
SIOCDELDLCI = 0x8981
SIOCDEVPRIVATE = 0x89F0
PTRACE_TRACEME = 0
PTRACE_PEEKTEXT = 1
PTRACE_PEEKDATA = 2
PTRACE_PEEKUSR = 3
PTRACE_PEEKUSER = 3
PTRACE_POKETEXT = 4
PTRACE_POKEDATA = 5
PTRACE_POKEUSR = 6
PTRACE_POKEUSER = 6
PTRACE_CONT = 7
PTRACE_KILL = 8
PTRACE_SINGLESTEP = 9
PTRACE_ATTACH = 0x10
PTRACE_DETACH = 0x11
PTRACE_SYSCALL = 24
PTRACE_GETEVENTMSG = 0x4201
PTRACE_GETSIGINFO = 0x4202
PTRACE_SETSIGINFO = 0x4203
PTRACE_O_TRACESYSGOOD = 0x00000001
PTRACE_O_TRACEFORK = 0x00000002
PTRACE_O_TRACEVFORK = 0x00000004
PTRACE_O_TRACECLONE = 0x00000008
PTRACE_O_TRACEEXEC = 0x00000010
PTRACE_O_TRACEVFORKDONE = 0x00000020
PTRACE_O_TRACEEXIT = 0x00000040
PTRACE_O_MASK = 0x0000007f
PTRACE_EVENT_FORK = 1
PTRACE_EVENT_VFORK = 2
PTRACE_EVENT_CLONE = 3
PTRACE_EVENT_EXEC = 4
PTRACE_EVENT_VFORK_DONE = 5
PTRACE_EVENT_EXIT = 6
PT_TRACE_ME = 0
PT_READ_I = 1
PT_READ_D = 2
PT_READ_U = 3
PT_WRITE_I = 4
PT_WRITE_D = 5
PT_WRITE_U = 6
PT_CONTINUE = 7
PT_KILL = 8
PT_STEP = 9
PT_ATTACH = 0x10
PT_DETACH = 0x11
__NR_read = 0
__NR_write = 1
__NR_open = 2
__NR_close = 3
__NR_stat = 4
__NR_fstat = 5
__NR_lstat = 6
__NR_poll = 7
__NR_lseek = 8
__NR_mmap = 9
__NR_mprotect = 10
__NR_munmap = 11
__NR_brk = 12
__NR_rt_sigaction = 13
__NR_rt_sigprocmask = 14
__NR_rt_sigreturn = 15
__NR_ioctl = 16
__NR_pread = 17
__NR_pwrite = 18
__NR_readv = 19
__NR_writev = 20
__NR_access = 21
__NR_pipe = 22
__NR_select = 23
__NR_sched_yield = 24
__NR_mremap = 25
__NR_msync = 26
__NR_mincore = 27
__NR_madvise = 28
__NR_shmget = 29
__NR_shmat = 30
__NR_shmctl = 31
__NR_dup = 32
__NR_dup2 = 33
__NR_pause = 34
__NR_nanosleep = 35
__NR_getitimer = 36
__NR_alarm = 37
__NR_setitimer = 38
__NR_getpid = 39
__NR_sendfile = 40
__NR_socket = 41
__NR_connect = 42
__NR_accept = 43
__NR_sendto = 44
__NR_recvfrom = 45
__NR_sendmsg = 46
__NR_recvmsg = 47
__NR_shutdown = 48
__NR_bind = 49
__NR_listen = 50
__NR_getsockname = 51
__NR_getpeername = 52
__NR_socketpair = 53
__NR_setsockopt = 54
__NR_getsockopt = 55
__NR_clone = 56
__NR_fork = 57
__NR_vfork = 58
__NR_execve = 59
__NR_exit = 60
__NR_wait4 = 61
__NR_kill = 62
__NR_uname = 63
__NR_semget = 64
__NR_semop = 65
__NR_semctl = 66
__NR_shmdt = 67
__NR_msgget = 68
__NR_msgsnd = 69
__NR_msgrcv = 70
__NR_msgctl = 71
__NR_fcntl = 72
__NR_flock = 73
__NR_fsync = 74
__NR_fdatasync = 75
__NR_truncate = 76
__NR_ftruncate = 77
__NR_getdents = 78
__NR_getcwd = 79
__NR_chdir = 80
__NR_fchdir = 81
__NR_rename = 82
__NR_mkdir = 83
__NR_rmdir = 84
__NR_creat = 85
__NR_link = 86
__NR_unlink = 87
__NR_symlink = 88
__NR_readlink = 89
__NR_chmod = 90
__NR_fchmod = 91
__NR_chown = 92
__NR_fchown = 93
__NR_lchown = 94
__NR_umask = 95
__NR_gettimeofday = 96
__NR_getrlimit = 97
__NR_getrusage = 98
__NR_sysinfo = 99
__NR_times = 100
__NR_ptrace = 101
__NR_getuid = 102
__NR_syslog = 103
__NR_getgid = 104
__NR_setuid = 105
__NR_setgid = 106
__NR_geteuid = 107
__NR_getegid = 108
__NR_setpgid = 109
__NR_getppid = 110
__NR_getpgrp = 111
__NR_setsid = 112
__NR_setreuid = 113
__NR_setregid = 114
__NR_getgroups = 115
__NR_setgroups = 116
__NR_setresuid = 117
__NR_getresuid = 118
__NR_setresgid = 119
__NR_getresgid = 120
__NR_getpgid = 121
__NR_setfsuid = 122
__NR_setfsgid = 123
__NR_getsid = 124
__NR_capget = 125
__NR_capset = 126
__NR_rt_sigpending = 127
__NR_rt_sigtimedwait = 128
__NR_rt_sigqueueinfo = 129
__NR_rt_sigsuspend = 130
__NR_sigaltstack = 131
__NR_utime = 132
__NR_mknod = 133
__NR_uselib = 134
__NR_personality = 135
__NR_ustat = 136
__NR_statfs = 137
__NR_fstatfs = 138
__NR_sysfs = 139
__NR_getpriority = 140
__NR_setpriority = 141
__NR_sched_setparam = 142
__NR_sched_getparam = 143
__NR_sched_setscheduler = 144
__NR_sched_getscheduler = 145
__NR_sched_get_priority_max = 146
__NR_sched_get_priority_min = 147
__NR_sched_rr_get_interval = 148
__NR_mlock = 149
__NR_munlock = 150
__NR_mlockall = 151
__NR_munlockall = 152
__NR_vhangup = 153
__NR_modify_ldt = 154
__NR_pivot_root = 155
__NR__sysctl = 156
__NR_prctl = 157
__NR_arch_prctl = 158
__NR_adjtimex = 159
__NR_setrlimit = 160
__NR_chroot = 161
__NR_sync = 162
__NR_acct = 163
__NR_settimeofday = 164
__NR_mount = 165
__NR_umount2 = 166
__NR_swapon = 167
__NR_swapoff = 168
__NR_reboot = 169
__NR_sethostname = 170
__NR_setdomainname = 171
__NR_iopl = 172
__NR_ioperm = 173
__NR_create_module = 174
__NR_init_module = 175
__NR_delete_module = 176
__NR_get_kernel_syms = 177
__NR_query_module = 178
__NR_quotactl = 179
__NR_nfsservctl = 180
__NR_getpmsg = 181
__NR_putpmsg = 182
__NR_afs_syscall = 183
__NR_tuxcall = 184
__NR_security = 185
__NR_gettid = 186
__NR_readahead = 187
__NR_setxattr = 188
__NR_lsetxattr = 189
__NR_fsetxattr = 190
__NR_getxattr = 191
__NR_lgetxattr = 192
__NR_fgetxattr = 193
__NR_listxattr = 194
__NR_llistxattr = 195
__NR_flistxattr = 196
__NR_removexattr = 197
__NR_lremovexattr = 198
__NR_fremovexattr = 199
__NR_tkill = 200
__NR_time = 201
__NR_futex = 202
__NR_sched_setaffinity = 203
__NR_sched_getaffinity = 204
__NR_set_thread_area = 205
__NR_io_setup = 206
__NR_io_destroy = 207
__NR_io_getevents = 208
__NR_io_submit = 209
__NR_io_cancel = 210
__NR_get_thread_area = 211
__NR_lookup_dcookie = 212
__NR_epoll_create = 213
__NR_epoll_ctl_old = 214
__NR_epoll_wait_old = 215
__NR_remap_file_pages = 216
__NR_getdents64 = 217
__NR_set_tid_address = 218
__NR_restart_syscall = 219
__NR_semtimedop = 220
__NR_fadvise64 = 221
__NR_timer_create = 222
__NR_timer_settime = 223
__NR_timer_gettime = 224
__NR_timer_getoverrun = 225
__NR_timer_delete = 226
__NR_clock_settime = 227
__NR_clock_gettime = 228
__NR_clock_getres = 229
__NR_clock_nanosleep = 230
__NR_exit_group = 231
__NR_epoll_wait = 232
__NR_epoll_ctl = 233
__NR_tgkill = 234
__NR_utimes = 235
__NR_vserver = 236
__NR_vserver = 236
__NR_mbind = 237
__NR_set_mempolicy = 238
__NR_get_mempolicy = 239
__NR_mq_open = 240
__NR_mq_unlink = 241
__NR_mq_timedsend = 242
__NR_mq_timedreceive = 243
__NR_mq_notify = 244
__NR_mq_getsetattr = 245
__NR_kexec_load = 246
__NR_waitid = 247
__NR_add_key = 248
__NR_request_key = 249
__NR_keyctl = 250
__NR_ioprio_set = 251
__NR_ioprio_get = 252
__NR_inotify_init = 253
__NR_inotify_add_watch = 254
__NR_inotify_rm_watch = 255
__NR_migrate_pages = 256
__NR_openat = 257
__NR_mkdirat = 258
__NR_mknodat = 259
__NR_fchownat = 260
__NR_futimesat = 261
__NR_newfstatat = 262
__NR_unlinkat = 263
__NR_renameat = 264
__NR_linkat = 265
__NR_symlinkat = 266
__NR_readlinkat = 267
__NR_fchmodat = 268
__NR_faccessat = 269
__NR_pselect6 = 270
__NR_ppoll = 271
__NR_unshare = 272
__NR_set_robust_list = 273
__NR_get_robust_list = 274
__NR_splice = 275
__NR_tee = 276
__NR_sync_file_range = 277
__NR_vmsplice = 278
__NR_move_pages = 279
__NR_utimensat = 280
__NR_epoll_pwait = 281
__NR_signalfd = 282
__NR_timerfd = 283
__NR_eventfd = 284
__NR_fallocate = 285
__NR_timerfd_settime = 286
__NR_timerfd_gettime = 287
__NR_accept4 = 288
__NR_signalfd4 = 289
__NR_eventfd2 = 290
__NR_epoll_create1 = 291
__NR_dup3 = 292
__NR_pipe2 = 293
__NR_inotify_init1 = 294
__NR_preadv = 295
__NR_pwritev = 296
__NR_rt_tgsigqueueinfo = 297
__NR_perf_event_open = 298
__NR_recvmmsg = 299
__NR_fanotify_init = 300
__NR_fanotify_mark = 301
__NR_prlimit64 = 302
SYS32_restart_syscall = 0
SYS32_exit = 1
SYS32_fork = 2
SYS32_read = 3
SYS32_write = 4
SYS32_open = 5
SYS32_close = 6
SYS32_waitpid = 7
SYS32_creat = 8
SYS32_link = 9
SYS32_unlink = 10
SYS32_execve = 11
SYS32_chdir = 12
SYS32_time = 13
SYS32_mknod = 14
SYS32_chmod = 15
SYS32_lchown = 16
SYS32_break = 17
SYS32_oldstat = 18
SYS32_lseek = 19
SYS32_getpid = 20
SYS32_mount = 21
SYS32_umount = 22
SYS32_setuid = 23
SYS32_getuid = 24
SYS32_stime = 25
SYS32_ptrace = 26
SYS32_alarm = 27
SYS32_oldfstat = 28
SYS32_pause = 29
SYS32_utime = 30
SYS32_stty = 31
SYS32_gtty = 32
SYS32_access = 33
SYS32_nice = 34
SYS32_ftime = 35
SYS32_sync = 36
SYS32_kill = 37
SYS32_rename = 38
SYS32_mkdir = 39
SYS32_rmdir = 40
SYS32_dup = 41
SYS32_pipe = 42
SYS32_times = 43
SYS32_prof = 44
SYS32_brk = 45
SYS32_setgid = 46
SYS32_getgid = 47
SYS32_signal = 48
SYS32_geteuid = 49
SYS32_getegid = 50
SYS32_acct = 51
SYS32_umount2 = 52
SYS32_lock = 53
SYS32_ioctl = 54
SYS32_fcntl = 55
SYS32_mpx = 56
SYS32_setpgid = 57
SYS32_ulimit = 58
SYS32_oldolduname = 59
SYS32_umask = 60
SYS32_chroot = 61
SYS32_ustat = 62
SYS32_dup2 = 63
SYS32_getppid = 64
SYS32_getpgrp = 65
SYS32_setsid = 66
SYS32_sigaction = 67
SYS32_sgetmask = 68
SYS32_ssetmask = 69
SYS32_setreuid = 70
SYS32_setregid = 71
SYS32_sigsuspend = 72
SYS32_sigpending = 73
SYS32_sethostname = 74
SYS32_setrlimit = 75
SYS32_getrlimit = 76
SYS32_getrusage = 77
SYS32_gettimeofday = 78
SYS32_settimeofday = 79
SYS32_getgroups = 80
SYS32_setgroups = 81
SYS32_select = 82
SYS32_symlink = 83
SYS32_oldlstat = 84
SYS32_readlink = 85
SYS32_uselib = 86
SYS32_swapon = 87
SYS32_reboot = 88
SYS32_readdir = 89
SYS32_mmap = 90
SYS32_munmap = 91
SYS32_truncate = 92
SYS32_ftruncate = 93
SYS32_fchmod = 94
SYS32_fchown = 95
SYS32_getpriority = 96
SYS32_setpriority = 97
SYS32_profil = 98
SYS32_statfs = 99
SYS32_fstatfs = 100
SYS32_ioperm = 101
SYS32_socketcall = 102
SYS32_syslog = 103
SYS32_setitimer = 104
SYS32_getitimer = 105
SYS32_stat = 106
SYS32_lstat = 107
SYS32_fstat = 108
SYS32_olduname = 109
SYS32_iopl = 110
SYS32_vhangup = 111
SYS32_idle = 112
SYS32_vm86old = 113
SYS32_wait4 = 114
SYS32_swapoff = 115
SYS32_sysinfo = 116
SYS32_ipc = 117
SYS32_fsync = 118
SYS32_sigreturn = 119
SYS32_clone = 120
SYS32_setdomainname = 121
SYS32_uname = 122
SYS32_modify_ldt = 123
SYS32_adjtimex = 124
SYS32_mprotect = 125
SYS32_sigprocmask = 126
SYS32_create_module = 127
SYS32_init_module = 128
SYS32_delete_module = 129
SYS32_get_kernel_syms = 130
SYS32_quotactl = 131
SYS32_getpgid = 132
SYS32_fchdir = 133
SYS32_bdflush = 134
SYS32_sysfs = 135
SYS32_personality = 136
SYS32_afs_syscall = 137
SYS32_setfsuid = 138
SYS32_setfsgid = 139
SYS32__llseek = 140
SYS32_getdents = 141
SYS32__newselect = 142
SYS32_flock = 143
SYS32_msync = 144
SYS32_readv = 145
SYS32_writev = 146
SYS32_getsid = 147
SYS32_fdatasync = 148
SYS32__sysctl = 149
SYS32_mlock = 150
SYS32_munlock = 151
SYS32_mlockall = 152
SYS32_munlockall = 153
SYS32_sched_setparam = 154
SYS32_sched_getparam = 155
SYS32_sched_setscheduler = 156
SYS32_sched_getscheduler = 157
SYS32_sched_yield = 158
SYS32_sched_get_priority_max = 159
SYS32_sched_get_priority_min = 160
SYS32_sched_rr_get_interval = 161
SYS32_nanosleep = 162
SYS32_mremap = 163
SYS32_setresuid = 164
SYS32_getresuid = 165
SYS32_vm86 = 166
SYS32_query_module = 167
SYS32_poll = 168
SYS32_nfsservctl = 169
SYS32_setresgid = 170
SYS32_getresgid = 171
SYS32_prctl = 172
SYS32_rt_sigreturn = 173
SYS32_rt_sigaction = 174
SYS32_rt_sigprocmask = 175
SYS32_rt_sigpending = 176
SYS32_rt_sigtimedwait = 177
SYS32_rt_sigqueueinfo = 178
SYS32_rt_sigsuspend = 179
SYS32_pread64 = 180
SYS32_pwrite64 = 181
SYS32_chown = 182
SYS32_getcwd = 183
SYS32_capget = 184
SYS32_capset = 185
SYS32_sigaltstack = 186
SYS32_sendfile = 187
SYS32_getpmsg = 188
SYS32_putpmsg = 189
SYS32_vfork = 190
SYS32_ugetrlimit = 191
SYS32_mmap2 = 192
SYS32_truncate64 = 193
SYS32_ftruncate64 = 194
SYS32_stat64 = 195
SYS32_lstat64 = 196
SYS32_fstat64 = 197
SYS32_lchown32 = 198
SYS32_getuid32 = 199
SYS32_getgid32 = 200
SYS32_geteuid32 = 201
SYS32_getegid32 = 202
SYS32_setreuid32 = 203
SYS32_setregid32 = 204
SYS32_getgroups32 = 205
SYS32_setgroups32 = 206
SYS32_fchown32 = 207
SYS32_setresuid32 = 208
SYS32_getresuid32 = 209
SYS32_setresgid32 = 210
SYS32_getresgid32 = 211
SYS32_chown32 = 212
SYS32_setuid32 = 213
SYS32_setgid32 = 214
SYS32_setfsuid32 = 215
SYS32_setfsgid32 = 216
SYS32_pivot_root = 217
SYS32_mincore = 218
SYS32_madvise = 219
SYS32_madvise1 = 219
SYS32_getdents64 = 220
SYS32_fcntl64 = 221
SYS32_gettid = 224
SYS32_readahead = 225
SYS32_setxattr = 226
SYS32_lsetxattr = 227
SYS32_fsetxattr = 228
SYS32_getxattr = 229
SYS32_lgetxattr = 230
SYS32_fgetxattr = 231
SYS32_listxattr = 232
SYS32_llistxattr = 233
SYS32_flistxattr = 234
SYS32_removexattr = 235
SYS32_lremovexattr = 236
SYS32_fremovexattr = 237
SYS32_tkill = 238
SYS32_sendfile64 = 239
SYS32_futex = 240
SYS32_sched_setaffinity = 241
SYS32_sched_getaffinity = 242
SYS32_set_thread_area = 243
SYS32_get_thread_area = 244
SYS32_io_setup = 245
SYS32_io_destroy = 246
SYS32_io_getevents = 247
SYS32_io_submit = 248
SYS32_io_cancel = 249
SYS32_fadvise64 = 250
SYS32_exit_group = 252
SYS32_lookup_dcookie = 253
SYS32_epoll_create = 254
SYS32_epoll_ctl = 255
SYS32_epoll_wait = 256
SYS32_remap_file_pages = 257
SYS32_set_tid_address = 258
SYS32_timer_create = 259
SYS32_timer_settime = (222+1)
SYS32_timer_gettime = (222+2)
SYS32_timer_getoverrun = (222+3)
SYS32_timer_delete = (222+4)
SYS32_clock_settime = (222+5)
SYS32_clock_gettime = (222+6)
SYS32_clock_getres = (222+7)
SYS32_clock_nanosleep = (222+8)
SYS32_statfs64 = 268
SYS32_fstatfs64 = 269
SYS32_tgkill = 270
SYS32_utimes = 271
SYS32_fadvise64_64 = 272
SYS32_vserver = 273
SYS32_mbind = 274
SYS32_get_mempolicy = 275
SYS32_set_mempolicy = 276
SYS32_mq_open = 277
SYS32_mq_unlink = (240+1)
SYS32_mq_timedsend = (240+2)
SYS32_mq_timedreceive = (240+3)
SYS32_mq_notify = (240+4)
SYS32_mq_getsetattr = (240+5)
SYS32_kexec_load = 283
SYS32_waitid = 284
SYS32_add_key = 286
SYS32_request_key = 287
SYS32_keyctl = 288
SYS32_ioprio_set = 289
SYS32_ioprio_get = 290
SYS32_inotify_init = 291
SYS32_inotify_add_watch = 292
SYS32_inotify_rm_watch = 293
SYS32_migrate_pages = 294
SYS32_openat = 295
SYS32_mkdirat = 296
SYS32_mknodat = 297
SYS32_fchownat = 298
SYS32_futimesat = 299
SYS32_fstatat64 = 300
SYS32_unlinkat = 301
SYS32_renameat = 302
SYS32_linkat = 303
SYS32_symlinkat = 304
SYS32_readlinkat = 305
SYS32_fchmodat = 306
SYS32_faccessat = 307
SYS32_pselect6 = 308
SYS32_ppoll = 309
SYS32_unshare = 310
SYS32_set_robust_list = 311
SYS32_get_robust_list = 312
SYS32_splice = 313
SYS32_sync_file_range = 314
SYS32_tee = 315
SYS32_vmsplice = 316
SYS32_move_pages = 317
SYS32_getcpu = 318
SYS32_epoll_pwait = 319
SYS32_utimensat = 320
SYS32_signalfd = 321
SYS32_timerfd_create = 322
SYS32_eventfd = 323
SYS32_fallocate = 324
SYS32_timerfd_settime = 325
SYS32_timerfd_gettime = 326
SYS32_signalfd4 = 327
SYS32_eventfd2 = 328
SYS32_epoll_create1 = 329
SYS32_dup3 = 330
SYS32_pipe2 = 331
SYS32_inotify_init1 = 332
SYS32_preadv = 333
SYS32_pwritev = 334
SYS32_rt_tgsigqueueinfo = 335
SYS32_perf_event_open = 336
SYS32_recvmmsg = 337
SYS32_fanotify_init = 338
SYS32_fanotify_mark = 339
SYS32_prlimit64 = 340
SYS32_name_to_handle_at = 341
SYS32_open_by_handle_at = 342
SYS32_clock_adjtime = 343
SYS32_syncfs = 344
SYS32_sendmmsg = 345
SYS32_setns = 346
SYS32_process_vm_readv = 347
SYS32_process_vm_writev = 348
