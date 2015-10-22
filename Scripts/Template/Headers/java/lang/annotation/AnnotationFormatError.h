//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/AnnotationFormatError.java
//

#ifndef _JavaLangAnnotationAnnotationFormatError_H_
#define _JavaLangAnnotationAnnotationFormatError_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Error.h>

@class JavaLangThrowable;

/*!
 @brief Indicates that an annotation in the binary representation of a class is
 syntactically incorrect and the annotation parser is unable to process it.
 This exception is unlikely to ever occur, given that the code has been
 compiled by an ordinary Java compiler.
 @since 1.5
 */
@interface JavaLangAnnotationAnnotationFormatError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs an instance with the message provided.
 @param message
 the details of the error.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs an instance with a message and a cause.
 @param message
 the details of the error.
 @param cause
 the cause of the error or <code>null</code> if none.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs an instance with a cause.
 If the cause is not
 <code>null</code>, then <code>cause.toString()</code> is used as the
 error's message.
 @param cause
 the cause of the error or <code>null</code> if none.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationAnnotationFormatError)

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationFormatError_initWithNSString_(JavaLangAnnotationAnnotationFormatError *self, NSString *message);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *new_JavaLangAnnotationAnnotationFormatError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationFormatError_initWithNSString_withJavaLangThrowable_(JavaLangAnnotationAnnotationFormatError *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *new_JavaLangAnnotationAnnotationFormatError_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationFormatError_initWithJavaLangThrowable_(JavaLangAnnotationAnnotationFormatError *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *new_JavaLangAnnotationAnnotationFormatError_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationAnnotationFormatError)

#endif // _JavaLangAnnotationAnnotationFormatError_H_