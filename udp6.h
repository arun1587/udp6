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

struct Foo {
	int a;
	char *b;
};

struct Udp {
	unsigned short esport;
	unsigned short lcport;
	unsigned short length;
	unsigned short checksum;
};

extern int Stest(struct Foo f);
extern int V6Send(struct Ipv6 ip6, char *pdst_mac, struct Udp u);