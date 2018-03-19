/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_NETDEVICE_H
#define _UAPI_LINUX_NETDEVICE_H
#define UAPI_LINUX_NETDEVICE_H
#define UAPI_LINUX_NETDEVICE_H_
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_NETDEVICE_H
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_NETDEVICE_H_
#define NDK_ANDROID_SUPPORT_LINUX_NETDEVICE_H
#define NDK_ANDROID_SUPPORT_LINUX_NETDEVICE_H_
#define _LINUX_NETDEVICE_H
#define _LINUX_NETDEVICE_H_
#define _UAPI_LINUX_NETDEVICE_H_
#include <museum/6.0.1/bionic/libc/linux/if.h>
#include <museum/6.0.1/bionic/libc/linux/if_ether.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/6.0.1/bionic/libc/linux/if_packet.h>
#include <museum/6.0.1/bionic/libc/linux/if_link.h>
#define MAX_ADDR_LEN 32
#define INIT_NETDEV_GROUP 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NET_NAME_UNKNOWN 0
#define NET_NAME_ENUM 1
#define NET_NAME_PREDICTABLE 2
#define NET_NAME_USER 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NET_NAME_RENAMED 4
enum {
  IF_PORT_UNKNOWN = 0,
  IF_PORT_10BASE2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IF_PORT_10BASET,
  IF_PORT_AUI,
  IF_PORT_100BASET,
  IF_PORT_100BASETX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IF_PORT_100BASEFX
};
#define NET_ADDR_PERM 0
#define NET_ADDR_RANDOM 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NET_ADDR_STOLEN 2
#define NET_ADDR_SET 3
#endif