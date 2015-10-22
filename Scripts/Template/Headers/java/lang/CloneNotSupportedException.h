//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/CloneNotSupportedException.java
//

#ifndef _JavaLangCloneNotSupportedException_H_
#define _JavaLangCloneNotSupportedException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Exception.h>

/*!
 @brief Thrown when a program attempts to clone an object which does not support the
 <code>Cloneable</code> interface.
 */
@interface JavaLangCloneNotSupportedException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>CloneNotSupportedException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>CloneNotSupportedException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangCloneNotSupportedException)

FOUNDATION_EXPORT void JavaLangCloneNotSupportedException_init(JavaLangCloneNotSupportedException *self);

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *new_JavaLangCloneNotSupportedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangCloneNotSupportedException_initWithNSString_(JavaLangCloneNotSupportedException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *new_JavaLangCloneNotSupportedException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangCloneNotSupportedException)

#endif // _JavaLangCloneNotSupportedException_H_