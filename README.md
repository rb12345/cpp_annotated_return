C++ Annotated Return Example
============================

This code is intended as an example of one way to return both an error code and
return value from a C++ function.  This is done via a templated struct type
`AnnotatedReturn<T,V> {T errorCode;V returnValue;}`.  This could also be done
via a class, which may be cleaner depending on your point of view (since the
constructor can populate both values).
