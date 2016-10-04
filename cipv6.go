package main

/*
#cgo CFLAGS: -I/home/acklio/Desktop/Trial/udp6sh
#cgo LDFLAGS: -L/home/acklio/Desktop/Trial/udp6sh -ludp6
#include "udp6.h"
#include <stdint.h>
*/
import "C" //no blank line between the bulk comment and this line

type IPHeader struct {
	Version    uint8  // protocol version
	DiffServ   uint8  // traffic class
	FlowLabel  uint32 // flow label
	PayloadLen uint16 // payload length
	NextHeader uint8  // next header
	HopLimit   uint8  // hop limit
	Src        string // Source IPv6 Address
	Dst        string // Destination IPv6 Address
}

type UDPHeader struct {
	ESPort   uint16
	LCPort   uint16
	Length   uint16
	Checksum uint16
}

func main() {
	// Sample structure
	ci := C.int(8)
	cs := C.CString("Go string")
	foo := C.struct_Foo{a: ci, b: cs}

	// IPv6 Header
	src_ip := C.CString("2001:face::6cf2:65e:dead:beef")
	dst_ip := C.CString("2001:face::1acf:5eff:fe37:d8a9")
	dst_mac := C.CString("18:cf:5e:37:d8:a9")
	ip := C.struct_Ipv6{src: src_ip, dst: dst_ip, hopLimit: 10, nextHeader: 17}

	// UDP Header
	src_port := C.ushort(4950)
	dst_port := C.ushort(5940)
	udp := C.struct_Udp{esport: src_port, lcport: dst_port, checksum: C.ushort(24566)}

	// Send the packet using C library
	C.Stest(foo)
	C.V6Send(ip, dst_mac, udp)
}
