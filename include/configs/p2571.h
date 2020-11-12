/*
 * Copyright (c) 2013-2020, NVIDIA CORPORATION. All rights reserved.
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef _P2571_H
#define _P2571_H

#include <linux/sizes.h>

#include "tegra210-common.h"

/* High-level configuration options */
#define CONFIG_TEGRA_BOARD_STRING	"NVIDIA P2571"

/* Board-specific serial config */
#define CONFIG_SERIAL_MULTI
#define CONFIG_TEGRA_ENABLE_UARTA

/* I2C */
#define CONFIG_SYS_I2C_TEGRA

/* SD/MMC */
#define CONFIG_MMC
#define CONFIG_GENERIC_MMC
#define CONFIG_TEGRA_MMC

/* Environment in eMMC, at the end of 2nd "boot sector" */
#define CONFIG_ENV_IS_IN_MMC
#define CONFIG_SYS_MMC_ENV_DEV		0
#define CONFIG_SYS_MMC_ENV_PART		2
#define CONFIG_ENV_OFFSET		(-OFFSET_OF_UBOOT_ENV)

/* SPI */
#define CONFIG_SF_DEFAULT_MODE		SPI_MODE_0
#define CONFIG_SF_DEFAULT_SPEED		24000000
#define CONFIG_SPI_FLASH_SIZE		(4 << 20)

/* USB2.0 Host support */
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_TEGRA
#define CONFIG_USB_STORAGE

/* USB networking support */
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_ASIX

/* General networking support */

#include "tegra-common-usb-gadget.h"
#include "tegra-common-post.h"

#endif /* _P2571_H */
