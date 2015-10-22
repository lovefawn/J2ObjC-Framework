//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/InfoAccessSyntax.java
//

#ifndef _OrgApacheHarmonySecurityX509InfoAccessSyntax_H_
#define _OrgApacheHarmonySecurityX509InfoAccessSyntax_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/apache/harmony/security/x509/ExtensionValue.h>

@class IOSByteArray;
@class JavaLangStringBuilder;
@class OrgApacheHarmonySecurityAsn1ASN1Type;

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with the SubjectInfoAccessSyntax and AuthorityInfoAccessSyntax
 which are a part of X.509 framework
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 SubjectInfoAccessSyntax  ::=
 SEQUENCE SIZE (1..MAX) OF AccessDescriptions
 AuthorityInfoAccessSyntax  ::=
 SEQUENCE SIZE (1..MAX) OF AccessDescriptions
 AccessDescription  ::=  SEQUENCE {
 accessMethod          OBJECT IDENTIFIER,
 accessLocation        GeneralName  }
 */
@interface OrgApacheHarmonySecurityX509InfoAccessSyntax : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

+ (OrgApacheHarmonySecurityX509InfoAccessSyntax *)decodeWithByteArray:(IOSByteArray *)encoding;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

/*!
 @brief Returns ASN.1 encoded form of this X.509 InfoAccessSyntax.
 */
- (IOSByteArray *)getEncoded;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509InfoAccessSyntax)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Type *OrgApacheHarmonySecurityX509InfoAccessSyntax_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509InfoAccessSyntax, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509InfoAccessSyntax *OrgApacheHarmonySecurityX509InfoAccessSyntax_decodeWithByteArray_(IOSByteArray *encoding);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509InfoAccessSyntax)

#endif // _OrgApacheHarmonySecurityX509InfoAccessSyntax_H_