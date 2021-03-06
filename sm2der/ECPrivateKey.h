/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Sm2derSimplfied"
 * 	found in "module.asn1"
 */

#ifndef	_ECPrivateKey_H_
#define	_ECPrivateKey_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include "SM2PrivateKey.h"
#include "SM2PublicKey.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Parameters;

/* ECPrivateKey */
typedef struct ECPrivateKey {
	INTEGER_t	 version;
	SM2PrivateKey_t	 privateKey;
	struct Parameters	*parameters	/* OPTIONAL */;
	SM2PublicKey_t	 publicKey;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ECPrivateKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ECPrivateKey;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Parameters.h"

#endif	/* _ECPrivateKey_H_ */
