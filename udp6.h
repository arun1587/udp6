typedef struct cipv6 {
	unsigned char version;
	unsigned char diffserv;
	unsigned int flowlabel;
	unsigned short payloadLen;
	unsigned char nextHeader;
	unsigned char hopLimit;
	char *src;
	char *dst;
} cIpv6;

typedef struct cudp {
	unsigned short esport;
	unsigned short lcport;
	unsigned short length;
	unsigned short checksum;
} cUdp;


typedef struct {
	int real;
	int es;
} Foo;

//extern int V6Send(char *psrc_ip, char *pdst_ip, char *pdst_mac);
//extern int V6Send(struct cipv6, struct cudp, char *pdst_mac);
//extern int V6Send(Foo *f, char *psrc_ip, char *pdst_ip, char *pdst_mac, unsigned short esport, unsigned short lcport);
extern int V6Send(char *psrc_ip, char *pdst_ip, char *pdst_mac, unsigned short esport, unsigned short lcport, char hopLimit);
