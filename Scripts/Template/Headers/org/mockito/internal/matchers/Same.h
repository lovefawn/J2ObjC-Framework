//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Same.java
//

#ifndef _OrgMockitoInternalMatchersSame_H_
#define _OrgMockitoInternalMatchersSame_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/org/mockito/ArgumentMatcher.h>

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersSame : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)wanted;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersSame)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersSame_initWithId_(OrgMockitoInternalMatchersSame *self, id wanted);

FOUNDATION_EXPORT OrgMockitoInternalMatchersSame *new_OrgMockitoInternalMatchersSame_initWithId_(id wanted) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersSame)

#endif // _OrgMockitoInternalMatchersSame_H_