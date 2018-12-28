#if defined(GO) && defined(GOM) && defined(GO2) && defined(DATA) && defined(END)

// _dl_allocate_tls
// _dl_allocate_tls_init
// _dl_argv //type B
// _dl_cache_libcmp
// _dl_deallocate_tls
// _dl_debug_state
// _dl_get_tls_static_info
// _dl_make_stack_executable
// _dl_mcount
// _dl_rtld_di_serinfo
// _dl_tls_setup
DATA(__libc_enable_secure, 4)
DATA(__libc_stack_end, 4)
DATA(__pointer_chk_guard, 4)
// _r_debug //type B
DATA(_rtld_global, 4)
DATA(_rtld_global_ro, 4)
DATA(__stack_chk_guard, 4)
// __tls_get_addr

END()

#else
#error Mmmm...
#endif