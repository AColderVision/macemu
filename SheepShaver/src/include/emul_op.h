/*
 *  emul_op.h - 68k opcodes for ROM patches
 *
 *  SheepShaver (C) 1997-2008 Christian Bauer and Marc Hellwig
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef EMUL_OP_H
#define EMUL_OP_H

// PowerPC opcodes
const uint32 POWERPC_NOP = 0x60000000;
const uint32 POWERPC_ILLEGAL = 0x00000000;
const uint32 POWERPC_BLR = 0x4e800020;
const uint32 POWERPC_BCTR = 0x4e800420;
const uint32 POWERPC_EMUL_OP = 0x18000000;	// Base opcode for EMUL_OP opcodes (only used with PPC emulation)

// 68k opcodes
const uint16 M68K_ILLEGAL = 0x4afc;
const uint16 M68K_NOP = 0x4e71;
const uint16 M68K_RTS = 0x4e75;
const uint16 M68K_RTD = 0x4e74;
const uint16 M68K_JMP = 0x4ef9;
const uint16 M68K_JMP_A0 = 0x4ed0;
const uint16 M68K_JSR = 0x4eb9;
const uint16 M68K_JSR_A0 = 0x4e90;
enum {	// Selectors for EMUL_OP opcodes
	OP_BREAK, OP_XPRAM1, OP_XPRAM2, OP_XPRAM3, OP_NVRAM1, OP_NVRAM2, OP_NVRAM3,
	OP_FIX_MEMTOP, OP_FIX_MEMSIZE, OP_FIX_BOOTSTACK,
	OP_SONY_OPEN, OP_SONY_PRIME, OP_SONY_CONTROL, OP_SONY_STATUS,
	OP_DISK_OPEN, OP_DISK_PRIME, OP_DISK_CONTROL, OP_DISK_STATUS,
	OP_CDROM_OPEN, OP_CDROM_PRIME, OP_CDROM_CONTROL, OP_CDROM_STATUS,
	OP_AUDIO_DISPATCH, OP_SOUNDIN_OPEN, OP_SOUNDIN_PRIME, OP_SOUNDIN_CONTROL, OP_SOUNDIN_STATUS, OP_SOUNDIN_CLOSE,
	OP_ADBOP, OP_INSTIME, OP_RMVTIME, OP_PRIMETIME, OP_MICROSECONDS, OP_ZERO_SCRAP, OP_PUT_SCRAP, OP_GET_SCRAP,
	OP_DEBUG_STR, OP_INSTALL_DRIVERS, OP_NAME_REGISTRY, OP_RESET, OP_IRQ,
	OP_SCSI_DISPATCH, OP_SCSI_ATOMIC,
	OP_CHECK_SYSV, OP_NTRB_17_PATCH, OP_NTRB_17_PATCH2, OP_NTRB_17_PATCH3, OP_NTRB_17_PATCH4, OP_CHECKLOAD,
	OP_EXTFS_COMM, OP_EXTFS_HFS, OP_IDLE_TIME, OP_IDLE_TIME_2,
	OP_MAX
};
const uint16 M68K_EMUL_RETURN = 0xfe40;	// Extended opcodes
const uint16 M68K_EXEC_RETURN = 0xfe41;
const uint16 M68K_EXEC_NATIVE = 0xfe42;
const uint16 M68K_EMUL_BREAK = 0xfe43;
const uint16 M68K_EMUL_OP_XPRAM1 = M68K_EMUL_BREAK + OP_XPRAM1;
const uint16 M68K_EMUL_OP_XPRAM2 = M68K_EMUL_BREAK + OP_XPRAM2;
const uint16 M68K_EMUL_OP_XPRAM3 = M68K_EMUL_BREAK + OP_XPRAM3;
const uint16 M68K_EMUL_OP_NVRAM1 = M68K_EMUL_BREAK + OP_NVRAM1;
const uint16 M68K_EMUL_OP_NVRAM2 = M68K_EMUL_BREAK + OP_NVRAM2;
const uint16 M68K_EMUL_OP_NVRAM3 = M68K_EMUL_BREAK + OP_NVRAM3;
const uint16 M68K_EMUL_OP_FIX_MEMTOP = M68K_EMUL_BREAK + OP_FIX_MEMTOP;
const uint16 M68K_EMUL_OP_FIX_MEMSIZE = M68K_EMUL_BREAK + OP_FIX_MEMSIZE;
const uint16 M68K_EMUL_OP_FIX_BOOTSTACK = M68K_EMUL_BREAK + OP_FIX_BOOTSTACK;
const uint16 M68K_EMUL_OP_SONY_OPEN = M68K_EMUL_BREAK + OP_SONY_OPEN;
const uint16 M68K_EMUL_OP_SONY_PRIME = M68K_EMUL_BREAK + OP_SONY_PRIME;
const uint16 M68K_EMUL_OP_SONY_CONTROL = M68K_EMUL_BREAK + OP_SONY_CONTROL;
const uint16 M68K_EMUL_OP_SONY_STATUS = M68K_EMUL_BREAK + OP_SONY_STATUS;
const uint16 M68K_EMUL_OP_DISK_OPEN = M68K_EMUL_BREAK + OP_DISK_OPEN;
const uint16 M68K_EMUL_OP_DISK_PRIME = M68K_EMUL_BREAK + OP_DISK_PRIME;
const uint16 M68K_EMUL_OP_DISK_CONTROL = M68K_EMUL_BREAK + OP_DISK_CONTROL;
const uint16 M68K_EMUL_OP_DISK_STATUS = M68K_EMUL_BREAK + OP_DISK_STATUS;
const uint16 M68K_EMUL_OP_CDROM_OPEN = M68K_EMUL_BREAK + OP_CDROM_OPEN;
const uint16 M68K_EMUL_OP_CDROM_PRIME = M68K_EMUL_BREAK + OP_CDROM_PRIME;
const uint16 M68K_EMUL_OP_CDROM_CONTROL = M68K_EMUL_BREAK + OP_CDROM_CONTROL;
const uint16 M68K_EMUL_OP_CDROM_STATUS = M68K_EMUL_BREAK + OP_CDROM_STATUS;
const uint16 M68K_EMUL_OP_AUDIO_DISPATCH = M68K_EMUL_BREAK + OP_AUDIO_DISPATCH;
const uint16 M68K_EMUL_OP_SOUNDIN_OPEN = M68K_EMUL_BREAK + OP_SOUNDIN_OPEN;
const uint16 M68K_EMUL_OP_SOUNDIN_CLOSE = M68K_EMUL_BREAK + OP_SOUNDIN_CLOSE;
const uint16 M68K_EMUL_OP_SOUNDIN_PRIME = M68K_EMUL_BREAK + OP_SOUNDIN_PRIME;
const uint16 M68K_EMUL_OP_SOUNDIN_CONTROL = M68K_EMUL_BREAK + OP_SOUNDIN_CONTROL;
const uint16 M68K_EMUL_OP_SOUNDIN_STATUS = M68K_EMUL_BREAK + OP_SOUNDIN_STATUS;
const uint16 M68K_EMUL_OP_ADBOP = M68K_EMUL_BREAK + OP_ADBOP;
const uint16 M68K_EMUL_OP_INSTIME = M68K_EMUL_BREAK + OP_INSTIME;
const uint16 M68K_EMUL_OP_RMVTIME = M68K_EMUL_BREAK + OP_RMVTIME;
const uint16 M68K_EMUL_OP_PRIMETIME = M68K_EMUL_BREAK + OP_PRIMETIME;
const uint16 M68K_EMUL_OP_MICROSECONDS = M68K_EMUL_BREAK + OP_MICROSECONDS;
const uint16 M68K_EMUL_OP_ZERO_SCRAP = M68K_EMUL_BREAK + OP_ZERO_SCRAP;
const uint16 M68K_EMUL_OP_PUT_SCRAP = M68K_EMUL_BREAK + OP_PUT_SCRAP;
const uint16 M68K_EMUL_OP_GET_SCRAP = M68K_EMUL_BREAK + OP_GET_SCRAP;
const uint16 M68K_EMUL_OP_DEBUG_STR = M68K_EMUL_BREAK + OP_DEBUG_STR;
const uint16 M68K_EMUL_OP_INSTALL_DRIVERS = M68K_EMUL_BREAK + OP_INSTALL_DRIVERS;
const uint16 M68K_EMUL_OP_NAME_REGISTRY = M68K_EMUL_BREAK + OP_NAME_REGISTRY;
const uint16 M68K_EMUL_OP_RESET = M68K_EMUL_BREAK + OP_RESET;
const uint16 M68K_EMUL_OP_IRQ = M68K_EMUL_BREAK + OP_IRQ;
const uint16 M68K_EMUL_OP_SCSI_DISPATCH = M68K_EMUL_BREAK + OP_SCSI_DISPATCH;
const uint16 M68K_EMUL_OP_SCSI_ATOMIC = M68K_EMUL_BREAK + OP_SCSI_ATOMIC;
const uint16 M68K_EMUL_OP_CHECK_SYSV = M68K_EMUL_BREAK + OP_CHECK_SYSV;
const uint16 M68K_EMUL_OP_NTRB_17_PATCH = M68K_EMUL_BREAK + OP_NTRB_17_PATCH;
const uint16 M68K_EMUL_OP_NTRB_17_PATCH2 = M68K_EMUL_BREAK + OP_NTRB_17_PATCH2;
const uint16 M68K_EMUL_OP_NTRB_17_PATCH3 = M68K_EMUL_BREAK + OP_NTRB_17_PATCH3;
const uint16 M68K_EMUL_OP_NTRB_17_PATCH4 = M68K_EMUL_BREAK + OP_NTRB_17_PATCH4;
const uint16 M68K_EMUL_OP_CHECKLOAD = M68K_EMUL_BREAK + OP_CHECKLOAD;
const uint16 M68K_EMUL_OP_EXTFS_COMM = M68K_EMUL_BREAK + OP_EXTFS_COMM;
const uint16 M68K_EMUL_OP_EXTFS_HFS = M68K_EMUL_BREAK + OP_EXTFS_HFS;
const uint16 M68K_EMUL_OP_IDLE_TIME = M68K_EMUL_BREAK + OP_IDLE_TIME;
const uint16 M68K_EMUL_OP_IDLE_TIME_2 = M68K_EMUL_BREAK + OP_IDLE_TIME_2;

extern "C" void EmulOp(M68kRegisters *r, uint32 pc, int selector);

#endif
