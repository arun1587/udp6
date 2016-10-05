struct Ipv6 {
	unsigned char version;
	unsigned char diffserv;
	unsigned int flowlabel;
	unsigned short payloadLen;
	unsigned char nextHeader;
	unsigned char hopLimit;
	char *src;
	char *dst;
};

struct Udp {
	unsigned short esport;
	unsigned short lcport;
	unsigned short length;
	unsigned short checksum;
};

extern int V6Send(char *pdst_mac, struct Ipv6 ip6, struct Udp u, char *data, int datalen, char *inf);