//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Serializable.java
//

#ifndef _JavaIoSerializable_H_
#define _JavaIoSerializable_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief Marks classes that can be serialized by <code>ObjectOutputStream</code> and
 deserialized by <code>ObjectInputStream</code>.
 <p><strong>Warning:</strong> this interface limits how its implementing
 classes can change in the future. By implementing <code>Serializable</code> you
 expose your flexible in-memory implementation details as a rigid binary
 representation. Simple code changes--like renaming private fields--are
 not safe when the changed class is serializable.
 <h3>The Serialized Form</h3>
 By default, the serialization mechanism encodes an object's class name, the
 names of its non-transient fields (including non-public fields), and the
 values of all of those fields. The output is an opaque sequence of bytes.
 Those bytes can be decoded into a new, equivalent instance as long as the
 decoder has compatible versions of the originating classes.
 <p>Changing the class name, field names or field types breaks serialization
 compatibility and complicates interoperability between old and new versions
 of the serializable class. Adding or removing fields also complicates
 serialization between versions of a class because it requires your code to
 cope with missing fields.
 <p>Every serializable class is assigned a version identifier called a <code>serialVersionUID</code>
 . By default, this identifier is computed by hashing the
 class declaration and its members. This identifier is included in the
 serialized form so that version conflicts can be detected during
 deserialization. If the local <code>serialVersionUID</code> differs from the
 <code>serialVersionUID</code> in the serialized data, deserialization will fail
 with an <code>InvalidClassException</code>.
 <p>You can avoid this failure by declaring an explicit <code>serialVersionUID</code>
 . Declaring an explicit <code>serialVersionUID</code> tells the
 serialization mechanism that the class is forward and backward compatible
 with all versions that share that <code>serialVersionUID</code>. Declaring a
 <code>serialVersionUID</code> looks like this: 
@code
       private static final long serialVersionUID = 0L;
 
@endcode
 If you declare a <code>serialVersionUID</code>, you should increment it each
 time your class changes incompatibly with the previous version. Typically
 this is when you add, change or remove a non-transient field.
 <p>You can take control of your serialized form by implementing these two
 methods with these exact signatures in your serializable classes:
 @code
     private void writeObject(java.io.ObjectOutputStream out)
       throws IOException 
     // write 'this' to 'out'...
   }
   private void readObject(java.io.ObjectInputStream in)
       throws IOException, ClassNotFoundException {
     // populate the fields of 'this' from the data in 'in'...
   }
  
@endcode
 It is impossible to maintain serialization compatibility across a class name
 change. For this reason, implementing <code>Serializable</code> in anonymous
 inner classes is highly discouraged: simply reordering the members in the
 file could change the generated class name and break serialization
 compatibility.
 <p>You can exclude member fields from serialization by giving them the <code>transient</code>
  modifier. Upon deserialization, the transient field's value will
 be null, 0, or false according to its type.
 <h3>Implement Serializable Judiciously</h3>
 Refer to <i>Effective Java</i>'s chapter on serialization for thorough
 coverage of the serialization API. The book explains how to use this
 interface without harming your application's maintainability.
 <h3>Recommended Alternatives</h3>
 <strong>JSON</strong> is concise, human-readable and efficient. Android
 includes both a android.util.JsonReader streaming API and a <code>tree API</code>
  to read and write JSON. Use a binding library
 like <a href="http://code.google.com/p/google-gson/">GSON</a> to read and
 write Java objects directly.
 */
@protocol JavaIoSerializable < NSObject, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSerializable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSerializable)

#endif // _JavaIoSerializable_H_