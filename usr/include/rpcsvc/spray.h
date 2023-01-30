/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SPRAY_H_RPCGEN
#define _SPRAY_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>

#ifndef _RPCSVC_SPRAY_H_
#define _RPCSVC_SPRAY_H_

#define SPRAYOVERHEAD 86
#define SPRAYMAX 8845

struct spraytimeval {
	u_int sec;
	u_int usec;
};
typedef struct spraytimeval spraytimeval;
#ifdef __cplusplus
extern "C" bool_t xdr_spraytimeval(XDR *, spraytimeval *);
#elif defined(__STDC__)
extern bool_t xdr_spraytimeval(XDR *, spraytimeval *);
#else /* Old Style C */
bool_t xdr_spraytimeval();
#endif /* Old Style C */


struct spraycumul {
	u_int counter;
	spraytimeval clock;
};
typedef struct spraycumul spraycumul;
#ifdef __cplusplus
extern "C" bool_t xdr_spraycumul(XDR *, spraycumul *);
#elif defined(__STDC__)
extern bool_t xdr_spraycumul(XDR *, spraycumul *);
#else /* Old Style C */
bool_t xdr_spraycumul();
#endif /* Old Style C */


typedef struct {
	u_int sprayarr_len;
	char *sprayarr_val;
} sprayarr;
#ifdef __cplusplus
extern "C" bool_t xdr_sprayarr(XDR *, sprayarr *);
#elif defined(__STDC__)
extern bool_t xdr_sprayarr(XDR *, sprayarr *);
#else /* Old Style C */
bool_t xdr_sprayarr();
#endif /* Old Style C */


#endif /* _RPCSVC_SPRAY_H_ */

#define SPRAYPROG ((u_long)100012)
#define SPRAYVERS ((u_long)1)

#ifdef __cplusplus
#define SPRAYPROC_SPRAY ((u_long)1)
extern "C" void * sprayproc_spray_1(sprayarr *, CLIENT *);
extern "C" void * sprayproc_spray_1_svc(sprayarr *, struct svc_req *);
#define SPRAYPROC_GET ((u_long)2)
extern "C" spraycumul * sprayproc_get_1(void *, CLIENT *);
extern "C" spraycumul * sprayproc_get_1_svc(void *, struct svc_req *);
#define SPRAYPROC_CLEAR ((u_long)3)
extern "C" void * sprayproc_clear_1(void *, CLIENT *);
extern "C" void * sprayproc_clear_1_svc(void *, struct svc_req *);

#elif defined(__STDC__)
#define SPRAYPROC_SPRAY ((u_long)1)
extern void * sprayproc_spray_1(sprayarr *, CLIENT *);
extern void * sprayproc_spray_1_svc(sprayarr *, struct svc_req *);
#define SPRAYPROC_GET ((u_long)2)
extern spraycumul * sprayproc_get_1(void *, CLIENT *);
extern spraycumul * sprayproc_get_1_svc(void *, struct svc_req *);
#define SPRAYPROC_CLEAR ((u_long)3)
extern void * sprayproc_clear_1(void *, CLIENT *);
extern void * sprayproc_clear_1_svc(void *, struct svc_req *);

#else /* Old Style C */
#define SPRAYPROC_SPRAY ((u_long)1)
extern void * sprayproc_spray_1();
extern void * sprayproc_spray_1_svc();
#define SPRAYPROC_GET ((u_long)2)
extern spraycumul * sprayproc_get_1();
extern spraycumul * sprayproc_get_1_svc();
#define SPRAYPROC_CLEAR ((u_long)3)
extern void * sprayproc_clear_1();
extern void * sprayproc_clear_1_svc();
#endif /* Old Style C */

#endif /* !_SPRAY_H_RPCGEN */
