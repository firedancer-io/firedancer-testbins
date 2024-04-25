#include "../../fd_tests.h"
int test_881(fd_executor_test_suite_t *suite) {
  fd_executor_test_t test;
  fd_memset( &test, 0, FD_EXECUTOR_TEST_FOOTPRINT );
  test.disable_cnt = 2;
  test.bt = "   2: solana_stake_program::stake_instruction::tests::test_stake_initialize             at ./src/stake_instruction.rs:1583:9   3: solana_stake_program::stake_instruction::tests::test_stake_initialize::old_warmup_cooldown_no_min_delegation             at ./src/stake_instruction.rs:1526:5   4: solana_stake_program::stake_instruction::tests::test_stake_initialize::old_warmup_cooldown_no_min_delegation::{{closure}}             at ./src/stake_instruction.rs:1526:5   5: core::ops::function::FnOnce::call_once             at /rustc/cc66ad468955717ab92600c770da8c1601a4ff33/library/core/src/ops/function.rs:250:5";
  test.test_name = "stake_instruction::tests::test_stake_initialize::old_warmup_cooldown_no_min_delegation";
  test.test_number = 881;
  test.sysvar_cache.clock = "";
  test.sysvar_cache.epoch_schedule = "";
  test.sysvar_cache.epoch_rewards = "";
  test.sysvar_cache.fees = "";
  test.sysvar_cache.rent = "mA0AAAAAAAAAAAAAAAAAQDI=";
  test.sysvar_cache.slot_hashes = "";
  test.sysvar_cache.stake_history = "";
  test.sysvar_cache.slot_history = "";
  if (fd_executor_test_suite_check_filter(suite, &test)) return -9999;
  ulong test_accs_len = 3;
  fd_executor_test_acc_t* test_accs = fd_alloca( 1UL, FD_EXECUTOR_TEST_ACC_FOOTPRINT * test_accs_len );
  fd_memset( test_accs, 0, FD_EXECUTOR_TEST_ACC_FOOTPRINT * test_accs_len );


  uchar disabled_features[] = { 160,90 };
  test.disable_feature = disabled_features;
            
 // {'clock': '', 'epoch_schedule': '', 'epoch_rewards': '', 'fees': '', 'rent': 'mA0AAAAAAAAAAAAAAAAAQDI=', 'slot_hashes': '', 'recent_blockhashes': '', 'stake_history': '', 'last_restart_slot': ''}
  fd_executor_test_acc_t* test_acc = test_accs;
  fd_base58_decode_32( "4UXGL3xRgxqJYrDM8sbjiaiwGW5qwi5BiSFsZvM318vV",  (uchar *) &test_acc->pubkey);
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (uchar *) &test_acc->owner);
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (uchar *) &test_acc->result_owner);
  test_acc->lamports        = 2282880UL;
  test_acc->result_lamports = 2282880UL;
  test_acc->executable      = 0;
  test_acc->result_executable= 0;
  test_acc->rent_epoch      = 0;
  test_acc->result_rent_epoch      = 0;
  static uchar const fd_flamenco_native_prog_test_881_acc_0_data[] = { 0x01,0x00,0x00,0x00,0x80,0xd5,0x22,0x00,0x00,0x00,0x00,0x00,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0xa8,0xb4,0x15,0x35,0x1c,0x11,0x5e,0xfe,0xdd,0x55,0xb5,0xc1,0x9a,0x19,0x17,0x45,0x8e,0xcf,0xa5,0x5b,0xe0,0x58,0x3f,0xbd,0x60,0xcd,0x63,0xed,0x7c,0x15,0x93,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };
  test_acc->data            = fd_flamenco_native_prog_test_881_acc_0_data;
  test_acc->data_len        = 200UL;
  static uchar const fd_flamenco_native_prog_test_881_acc_0_post_data[] = { 0x01,0x00,0x00,0x00,0x80,0xd5,0x22,0x00,0x00,0x00,0x00,0x00,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0xa8,0xb4,0x15,0x35,0x1c,0x11,0x5e,0xfe,0xdd,0x55,0xb5,0xc1,0x9a,0x19,0x17,0x45,0x8e,0xcf,0xa5,0x5b,0xe0,0x58,0x3f,0xbd,0x60,0xcd,0x63,0xed,0x7c,0x15,0x93,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };
  test_acc->result_data     = fd_flamenco_native_prog_test_881_acc_0_post_data;
  test_acc->result_data_len = 200UL;
  test_acc++;
  fd_base58_decode_32( "SysvarRent111111111111111111111111111111111",  (uchar *) &test_acc->pubkey);
  fd_base58_decode_32( "Sysvar1111111111111111111111111111111111111",  (uchar *) &test_acc->owner);
  fd_base58_decode_32( "Sysvar1111111111111111111111111111111111111",  (uchar *) &test_acc->result_owner);
  test_acc->lamports        = 1UL;
  test_acc->result_lamports = 1UL;
  test_acc->executable      = 0;
  test_acc->result_executable= 0;
  test_acc->rent_epoch      = 0;
  test_acc->result_rent_epoch      = 0;
  static uchar const fd_flamenco_native_prog_test_881_acc_1_data[] = { 0x98,0x0d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x32 };
  test_acc->data            = fd_flamenco_native_prog_test_881_acc_1_data;
  test_acc->data_len        = 17UL;
  static uchar const fd_flamenco_native_prog_test_881_acc_1_post_data[] = { 0x98,0x0d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x32 };
  test_acc->result_data     = fd_flamenco_native_prog_test_881_acc_1_post_data;
  test_acc->result_data_len = 17UL;
  test_acc++;
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (uchar *) &test_acc->pubkey);
  fd_base58_decode_32( "NativeLoader1111111111111111111111111111111",  (uchar *) &test_acc->owner);
  fd_base58_decode_32( "NativeLoader1111111111111111111111111111111",  (uchar *) &test_acc->result_owner);
  test_acc->lamports        = 0UL;
  test_acc->result_lamports = 0UL;
  test_acc->executable      = 0;
  test_acc->result_executable= 0;
  test_acc->rent_epoch      = 0;
  test_acc->result_rent_epoch      = 0;
  test_acc++;
  fd_base58_decode_32( "Stake11111111111111111111111111111111111111",  (unsigned char *) &test.program_id);
  static uchar const fd_flamenco_native_prog_test_881_raw[] = { 0x00,0x00,0x00,0x02,0x03,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x06,0xa1,0xd8,0x17,0x91,0x37,0x54,0x2a,0x98,0x34,0x37,0xbd,0xfe,0x2a,0x7a,0xb2,0x55,0x7f,0x53,0x5c,0x8a,0x78,0x72,0x2b,0x68,0xa4,0x9d,0xc0,0x00,0x00,0x00,0x00,0x06,0xa7,0xd5,0x17,0x19,0x2c,0x5c,0x51,0x21,0x8c,0xc9,0x4c,0x3d,0x4a,0xf1,0x7f,0x58,0xda,0xee,0x08,0x9b,0xa1,0xfd,0x44,0xe3,0xdb,0xd9,0x8a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x00,0x02,0x74,0x00,0x00,0x00,0x00,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x33,0x9f,0xf6,0x6a,0x43,0x87,0xcc,0xce,0x8a,0x2c,0x7e,0x02,0x24,0x40,0x40,0x98,0x7f,0x35,0x0e,0x19,0x77,0x71,0x93,0xce,0x79,0x54,0x6a,0x4b,0x89,0x08,0x17,0xfa,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0xa8,0xb4,0x15,0x35,0x1c,0x11,0x5e,0xfe,0xdd,0x55,0xb5,0xc1,0x9a,0x19,0x17,0x45,0x8e,0xcf,0xa5,0x5b,0xe0,0x58,0x3f,0xbd,0x60,0xcd,0x63,0xed,0x7c,0x15,0x93 };
  test.raw_tx = fd_flamenco_native_prog_test_881_raw;
  test.raw_tx_len = 255UL;
  test.expected_result = -4;
  test.custom_err = 0;

  test.accs_len = test_accs_len;
  test.accs = test_accs;

  return fd_executor_run_test( &test, suite );
}
// https://explorer.solana.com/tx/inspector?message=AAACAzOf9mpDh8zOiix%2BAiRAQJh%2FNQ4Zd3GTznlUakuJCBf6BqHYF5E3VCqYNDe9%2Fip6slV%2FU1yKeHIraKSdwAAAAAAGp9UXGSxcUSGMyUw9SvF%2FWNruCJuh%2FUTj29mKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQECAAJ0AAAAADOf9mpDh8zOiix%2BAiRAQJh%2FNQ4Zd3GTznlUakuJCBf6M5%2F2akOHzM6KLH4CJEBAmH81Dhl3cZPOeVRqS4kIF%2FoAAAAAAAAAAAEAAAAAAAAAJqi0FTUcEV7%2B3VW1wZoZF0WOz6Vb4Fg%2FvWDNY%2B18FZM%3D
