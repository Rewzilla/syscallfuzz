
uint32_t syscalls_0[] = {
	0,		// sys_restart_syscall
};
int syscalls_0_len = 1;

uint32_t syscalls_1[] = {
	20,		// sys_getpid
	24,		// sys_getuid16
	29,		// sys_pause
	36,		// sys_sync
	47,		// sys_getgid16
	49,		// sys_geteuid16
	50,		// sys_getegid16
	64,		// sys_getppid
	65,		// sys_getpgrp
	66,		// sys_setsid
	68,		// sys_sgetmask
	111,	// sys_vhangup
	153,	// sys_munlockall
	158,	// sys_sched_yield
	199,	// sys_getuid
	200,	// sys_getgid
	201,	// sys_geteuid
	202,	// sys_getegid
	224,	// sys_gettid
	291,	// sys_inotify_init
};
int syscalls_1_len = 41;

uint32_t syscalls_2[] = {
//	1,		// sys_exit
//	2,		// sys_fork
	6,		// sys_close
	10,		// sys_unlink
	12,		// sys_chdir
	13,		// sys_time
	22,		// sys_oldumount
	23,		// sys_setuid16
	25,		// sys_stime
	27,		// sys_alarm
	34,		// sys_nice
	40,		// sys_rmdir
	41,		// sys_dup
	42,		// sys_pipe
	43,		// sys_times
	45,		// sys_brk
	46,		// sys_setgid16
	51,		// sys_acct
	59,		// sys_olduname
	60,		// sys_umask
	61,		// sys_chroot
	69,		// sys_ssetmask
	73,		// sys_sigpending
	82,		// sys_old_select
	86,		// sys_uselib
	90,		// sys_old_mmap
	109,	// sys_uname
	115,	// sys_swapoff
	116,	// sys_sysinfo
	117,	// sys_ipc
	118,	// sys_fsync
	119,	// sys_sigreturn
	122,	// sys_newuname
	124,	// sys_adjtimex
	132,	// sys_getpgid
	133,	// sys_fchdir
	136,	// sys_personality
	138,	// sys_setfsuid16
	139,	// sys_setfsgid16
	147,	// sys_getsid
	148,	// sys_fdatasync
	149,	// sys_sysctl
	152,	// sys_mlockall
	157,	// sys_sched_getscheduler
	159,	// sys_sched_get_priority_max
	160,	// sys_sched_get_priority_min
	173,	// sys_rt_sigreturn
//	190,	// sys_vfork
	192,	// sys_mmap_pgoff
	213,	// sys_setuid
	214,	// sys_setgid
	215,	// sys_setfsuid
	216,	// sys_setfsgid
	240,	// sys_futex
	243,	// sys_set_thread_area
	244,	// sys_get_thread_area
	246,	// sys_io_destroy
//	252,	// sys_exit_group
	254,	// sys_epoll_create
	258,	// sys_set_tid_address
	262,	// sys_timer_getoverrun
	263,	// sys_timer_delete
	274,	// sys_mbind
	278,	// sys_mq_unlink
	308,	// sys_pselect6
	310,	// sys_unshare
	313,	// sys_splice
	317,	// sys_move_pages
//	319,	// sys_epoll_pwait
	323,	// sys_eventfd
	329,	// sys_epoll_create1
	332,	// sys_inotify_init1
};
int syscalls_2_len = 67;

uint32_t syscalls_3[] = {
	8,		// sys_creat
	9,		// sys_link
	15,		// sys_chmod
	18,		// sys_stat
	28,		// sys_fstat
	30,		// sys_utime
	33,		// sys_access
//	37,		// sys_kill
	38,		// sys_rename
	39,		// sys_mkdir
	48,		// sys_signal
	52,		// sys_umount
	57,		// sys_setpgid
	62,		// sys_ustat
	63,		// sys_dup2
	70,		// sys_setreuid16
	71,		// sys_setregid16
	74,		// sys_sethostname
	75,		// sys_setrlimit
	76,		// sys_old_getrlimit
	77,		// sys_getrusage
	78,		// sys_gettimeofday
	79,		// sys_settimeofday
	80,		// sys_getgroups16
	81,		// sys_setgroups16
	83,		// sys_symlink
	84,		// sys_lstat
	87,		// sys_swapon
	91,		// sys_munmap
	92,		// sys_truncate
	93,		// sys_ftruncate
	94,		// sys_fchmod
	96,		// sys_getpriority
	99,		// sys_statfs
	100,	// sys_fstatfs
	102,	// sys_socketcall
	105,	// sys_getitimer
	106,	// sys_newstat
	107,	// sys_newlstat
	108,	// sys_newfstat
	110,	// sys_iopl
	113,	// sys_vm86old
	121,	// sys_setdomainname
	129,	// sys_delete_module
	134,	// sys_bdflush
	143,	// sys_flock
	150,	// sys_mlock
	151,	// sys_munlock
	154,	// sys_sched_setparam
	155,	// sys_sched_getparam
	161,	// sys_sched_rr_get_interval
//	162,	// sys_nanosleep
	176,	// sys_rt_sigpending
//	179,	// sys_rt_sigsuspend
	183,	// sys_getcwd
	184,	// sys_capget
	185,	// sys_capset
	191,	// sys_getrlimit
	193,	// sys_truncate64
	194,	// sys_ftruncate64
	195,	// sys_stat64
	196,	// sys_lstat64
	197,	// sys_fstat64
	203,	// sys_setreuid
	204,	// sys_setregid
	205,	// sys_getgroups
	206,	// sys_setgroups
	217,	// sys_pivot_root
	235,	// sys_removexattr
	236,	// sys_lremovexattr
	237,	// sys_fremovexattr
//	238,	// sys_tkill
	245,	// sys_io_setup
	261,	// sys_timer_gettime
	264,	// sys_clock_settime
	265,	// sys_clock_gettime
	266,	// sys_clock_getres
	271,	// sys_utimes
	281,	// sys_mq_notify
	290,	// sys_ioprio_get
	293,	// sys_inotify_rm_watch
	311,	// sys_set_robust_list
	322,	// sys_timerfd_create
	326,	// sys_timerfd_gettime
	328,	// sys_eventfd2
	331,	// sys_pipe2
};
int syscalls_3_len = 82;

uint32_t syscalls_4[] = {
	3,		// sys_read
	4,		// sys_write
	5,		// sys_open
//	7,		// sys_waitpid
	14,		// sys_mknod
	16,		// sys_lchown16
	19,		// sys_lseek
	54,		// sys_ioctl
	55,		// sys_fcntl
	67,		// sys_sigaction
//	72,		// sys_sigsuspend
	85,		// sys_readlink
	89,		// sys_old_readdir
	95,		// sys_fchown16
	97,		// sys_setpriority
	101,	// sys_ioperm
	103,	// sys_syslog
	104,	// sys_setitimer
	123,	// sys_modify_ldt
	125,	// sys_mprotect
	126,	// sys_sigprocmask
	128,	// sys_init_module
	135,	// sys_sysfs
	141,	// sys_getdents
	144,	// sys_msync
	145,	// sys_readv
	146,	// sys_writev
	156,	// sys_sched_setscheduler
	164,	// sys_setresuid16
	165,	// sys_getresuid16
	166,	// sys_vm86
	168,	// sys_poll
	169,	// sys_nfsservctl
	170,	// sys_setresgid16
	171,	// sys_getresgid16
	178,	// sys_rt_sigqueueinfo
	182,	// sys_chown16
	186,	// sys_sigaltstack
	198,	// sys_lchown
	207,	// sys_fchown
	208,	// sys_setresuid
	209,	// sys_getresuid
	210,	// sys_setresgid
	211,	// sys_getresgid
	212,	// sys_chown
	218,	// sys_mincore
	219,	// sys_madvise
	220,	// sys_getdents64
	221,	// sys_fcntl64
	225,	// sys_readahead
	232,	// sys_listxattr
	233,	// sys_llistxattr
	234,	// sys_flistxattr
	241,	// sys_sched_setaffinity
	242,	// sys_sched_getaffinity
	248,	// sys_io_submit
	249,	// sys_io_cancel
	253,	// sys_lookup_dcookie
	259,	// sys_timer_create
	268,	// sys_statfs64
	269,	// sys_fstatfs64
	270,	// sys_tgkill
	276,	// sys_set_mempolicy
	282,	// sys_mq_getsetattr
	289,	// sys_ioprio_set
	292,	// sys_inotify_add_watch
	296,	// sys_mkdirat
	299,	// sys_futimesat
	301,	// sys_unlinkat
	304,	// sys_symlinkat
	306,	// sys_fchmodat
	307,	// sys_faccessat
	312,	// sys_get_robust_list
	318,	// sys_getcpu
	321,	// sys_signalfd
	330,	// sys_dup3
};
int syscalls_4_len = 74;

uint32_t syscalls_5[] = {
//	11,		// sys_execve
	21,		// sys_mount
	26,		// sys_ptrace
//	88,		// sys_reboot
//	114,	// sys_wait4
//	120,	// sys_clone
	131,	// sys_quotactl
	140,	// sys_llseek
	142,	// sys_select
	163,	// sys_mremap
	172,	// sys_prctl
	174,	// sys_rt_sigaction
	175,	// sys_rt_sigprocmask
//	177,	// sys_rt_sigtimedwait
	180,	// sys_pread64
	181,	// sys_pwrite64
	187,	// sys_sendfile
	226,	// sys_setxattr
	227,	// sys_lsetxattr
	228,	// sys_fsetxattr
	229,	// sys_getxattr
	230,	// sys_lgetxattr
	231,	// sys_fgetxattr
	239,	// sys_sendfile64
	247,	// sys_io_getevents
	250,	// sys_fadvise64
	255,	// sys_epoll_ctl
//	256,	// sys_epoll_wait
	257,	// sys_remap_file_pages
	260,	// sys_timer_settime
//	267,	// sys_clock_nanosleep
	272,	// sys_fadvise64_64
	275,	// sys_get_mempolicy
	277,	// sys_mq_open
	279,	// sys_mq_timedsend
	280,	// sys_mq_timedreceive
	283,	// sys_kexec_load
//	284,	// sys_waitid
	286,	// sys_add_key
	287,	// sys_request_key
	288,	// sys_keyctl
	294,	// sys_migrate_pages
	295,	// sys_openat
	297,	// sys_mknodat
	298,	// sys_fchownat
	300,	// sys_fstatat64
	302,	// sys_renameat
	303,	// sys_linkat
	305,	// sys_readlinkat
	309,	// sys_ppoll
	314,	// sys_sync_file_range
	315,	// sys_tee
	316,	// sys_vmsplice
	320,	// sys_utimensat
	324,	// sys_fallocate
	325,	// sys_timerfd_settime
	327,	// sys_signalfd4
	333,	// sys_preadv
	334,	// sys_pwritev
	335,	// sys_rt_tgsigqueueinfo
	336,	// sys_perf_event_open
	337,	// sys_recvmmsg
};
int syscalls_5_len = 54;
