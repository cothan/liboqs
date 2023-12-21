/**
 * \file rand_nist_internal.h
 * \brief Functions for manipulating the state of the NIST DRBG; not part of the OQS public API
 *
 * Contains definitions for functions for manipulating the NIST DRBG state, intended to be used
 * by the kat_kem and kat_sig test programs.
 *
 * <b>Note this is not part of the OQS public API: implementations within liboqs can use these
 * functions, but external consumers of liboqs should not use these functions.</b>
 *
 * \author Spencer Wilson
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef OQS_RAND_NIST_INTERNAL_H
#define OQS_RAND_NIST_INTERNAL_H

/**
 * Writes the current state of the NIST DRBG into the provided memory.
 */
void OQS_randombytes_nist_kat_get_state(void *out);

/**
 * Overwrites the current state of the NIST DRBG from the provided memory.
 */
void OQS_randombytes_nist_kat_set_state(const void *in);

#endif
