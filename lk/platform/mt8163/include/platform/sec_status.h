/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef _SEC_STATUS_H_
#define _SEC_STATUS_H_

typedef enum {
	B_OK = 0,

	/* ==========================*/
	/* operation error codes */
	INVALID_PARAMETER           = 0x1000,
	INVALID_NAME_SIZE,
	INVALID_BUFFER_SIZE,
	INFO_NOT_FOUND,
	ROM_INFO_NOT_FOUND,
	CUST_NAME_NOT_FOUND,
	PRELOADER_NOT_FOUND,
	STORAGE_DRIVER_NOT_FOUND,
	STORAGE_READ_FAILED,
	LIST_ENTRY_ALLOCATION_FAILED,
	SECURE_DATA_BUF_OVERFLOW,
	PART_GET_INDEX_FAIL,
	PART_GET_DEV_FAIL,
	PART_ERASE_FAIL,
	PART_WRITE_FAIL,
	PART_READ_FAIL,

	/* ==========================*/
	/* security image releated error code */
	SECHDR_NOT_FOUND            = 0x2000,
	SECEXTHDR_NOT_FOUND,
	SECEXTHDR_CORRUPTED,
	SECHDR_NOT_PARSED_YET,
	SECVER_NOT_SUPPORTED,
	SECEXTHDR_NOT_SUPPORTED,
	HASH_TYPE_NOT_SUPPORTED,
	SIG_TYPE_NOT_SUPPORTED,
	INCORRECT_SIG_SIZE,
	INVALID_SIG,
	VERIFY_BUF_TOO_SMALL,
	HASH_FAILED,
	AUTH_FAILED,
	CIPHER_MODE_INVALID,
	CIPHER_KEY_INVALID,
	CIPHER_DATA_UNALIGNED,
	/* 0x2010 */
	WAITING_SECURE_DATA,
	CHUNK_VERIFY_FAILED,
	SEC_DOWNLOAD_NOT_SUPPORT_THIS_IMAGE,
	SEC_DOWNLOAD_SIGNATURE_NOT_REQUIRED,
	SW_SEC_BOOT_IMAGE_DL_IS_NOT_ALLOWED,
	SW_SEC_BOOT_SIGNATURE_NOT_REQUIRED,
	SIG_NOT_FOUND,
	SW_SEC_BOOT_SIGNATURE_REQUIRED,
	SEC_IMG_VERSION_NOT_ALLOWED,
	SEC_CUSTOMER_NAME_NOT_ALLOWED,
	SEC_UNSIGNED_IMAGE_IS_REQUIRED,
	SEC_SIGNED_IMAGE_IS_REQUIRED,

	/* ==========================*/
	/* seccfg related error code */
	ROM_INFO_NOT_INIT       = 0x3000,
	SECCFG_NOT_FOUND,
	SECCFG_MAGIC_INCORRECT,
	SECCFG_CAN_NOT_WRITE_TO_FIRST_BLOCK,
	SECCFG_EXT_REGION_SPACE_OVERFLOW,
	ERASE_SECCFG_NAND_PARTITION_FAILED,
	IMAGE_INFO_CHECK_CMD_EXT_HEADER_SELF_COPY_FAIL,
	IMAGE_INFO_CHECK_CMD_EXT_HEADER_OFFSET_INVALID,
	SECCFG_NOT_VALID,
	/* ==========================*/
	/* secro related error code */
	S_SECURITY_AC_REGION_NOT_FOUND_IN_SECROIMG  = 0x4000,
	S_SECURITY_SECRO_MEMORY_ALLOCATE_FAIL,
	S_SECURITY_SECRO_ANTICLONE_LENGTH_INVALID,
	S_SECURITY_SECRO_HASH_INCORRECT,
	SECRO_NOT_FOUND,

	/* ==========================*/
	/* sec status code */
	S_SECURITY_GO_ON_CHECK = 0x5000,
	S_SECURITY_UNKONWN_STATUS,

	/* secure boot error code */
	ERR_LIB_SEC_CFG_NOT_EXIST = 0x6000,
	ERR_IMG_VERIFY_THIS_IMG_INFO_NOT_EXIST,
	ERR_IMG_VERIFY_INVALID_IMG_INFO_ATTR,
	ERR_IMG_NOT_FOUND,
	ERR_IMG_EXTENSION_MAGIC_WRONG,
	ERR_IMG_EXTENSION_TYPE_NOT_SUPPORT,
	ERR_IMG_EXTENSION_HDR_NOT_FOUND,
	ERR_IMG_SIGN_FORMAT_NOT_MATCH,
	ERR_IMG_EXTENSION_HASH_CAL_FAIL,
	ERR_IMG_VERIFY_SIGNATURE_FAIL,
	ERR_IMG_VERIFY_HASH_COMPARE_FAIL,

	/* ==========================*/
	/* fastboot unlock error code */
	ERR_UNLOCK_KEY_WRONG_LENGTH = 0x7000,
	ERR_UNLOCK_WRONG_KEY_CODE,
	ERR_SECURE_DOWNLOAD_NOT_SUPPORTED,

	/* ==========================*/
	/* sml data sync error code */
	ERR_PROTECT1_PART_NOT_FOUND,
	ERR_PROTECT2_PART_NOT_FOUND,
	ERR_PROTECT1_PART_OFF_NOT_FOUND,
	ERR_PROTECT2_PART_OFF_NOT_FOUND,
	ERR_GEN_RANDOM_PATTERN_FAILED,
	ERR_MAGIC_PATTERN_NOT_MATCH,
	ERR_MAGIC_PATTERN_NOT_EXIST,
	ERR_EMMC_READ_FAILED,
	ERR_EMMC_WRITE_FAILED,

	/* ==========================*/
	/* cert engine error code */
	ERR_INVALID_OID_SZ,
	ERR_INVALID_OID_DER_SZ,
	ERR_END_OF_CERT,
	ERR_OBJ_ID_NOT_MATCH,
	ERR_OBJ_LEN_NOT_MATCH,
	ERR_OBJ_TRAVERSE_UNKNOWN_MODE,
	ERR_INVALID_OID_IDX,
	ERR_OID_NOT_FOUND,
	ERR_OBJ_NOT_FOUND,
	ERR_E_KEY_LEN_NOT_MATCH,
	ERR_E_KEY_NOT_MATCH,
	ERR_N_KEY_LEN_NOT_MATCH,
	ERR_N_KEY_NOT_MATCH,
	ERR_PUBK_AUTH_FAIL,
	ERR_SW_ID_MISMATCH,
	ERR_RETRY_WITH_VERIFIED_BOOT,
	ERR_NO_VERIFIED_BOOT_SIG,

	/* crypto op */
	ERR_SHA256_OP_FAIL,
	ERR_PSS_OP_FAIL,
	ERR_SIG_VFY_FAIL,
	ERR_IMG_HDR_HASH_NOT_MATCH,
	ERR_IMG_HASH_NOT_MATCH,

	/* invalid size */
	ERR_INVALID_SIG_SZ,
	ERR_INVALID_PUBK_SZ,
	ERR_INVALID_CERT_SZ,
	ERR_INVALID_HASH_SZ,

	/* image */
	ERR_INVALID_IMG_HDR,
	ERR_UNEXPECTED_IMG_TYPE,

	/* buffer */
	ERR_BUF_ALLOCATE_FAIL,

} STATUS;

#endif /* _SEC_STATUS_H_ */
