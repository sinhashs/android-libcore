/*
 * Copyright 2006 The Android Open Source Project 
 *
 * Native functions for java.lang.Math.
 */
#include "jni.h"
#include "JNIHelp.h"

#include <stdlib.h>
#include <math.h>

/* native public static double sin(double a); */
static jdouble jsin(JNIEnv* env, jclass clazz, jdouble a)
{
    return sin(a);
}

/* native public static double cos(double a); */
static jdouble jcos(JNIEnv* env, jclass clazz, jdouble a)
{
    return cos(a);
}

/* native public static double tan(double a); */
static jdouble jtan(JNIEnv* env, jclass clazz, jdouble a)
{
    return tan(a);
}

/* native public static double asin(double a); */
static jdouble jasin(JNIEnv* env, jclass clazz, jdouble a)
{
    return asin(a);
}

/* native public static double acos(double a); */
static jdouble jacos(JNIEnv* env, jclass clazz, jdouble a)
{
    return acos(a);
}

/* native public static double atan(double a); */
static jdouble jatan(JNIEnv* env, jclass clazz, jdouble a)
{
    return atan(a);
}

/* native public static double exp(double a); */
static jdouble jexp(JNIEnv* env, jclass clazz, jdouble a)
{
    return exp(a);
}

/* native public static double log(double a); */
static jdouble jlog(JNIEnv* env, jclass clazz, jdouble a)
{
    return log(a);
}

/* native public static double sqrt(double a); */
static jdouble jsqrt(JNIEnv* env, jclass clazz, jdouble a)
{
    return sqrt(a);
}

/* native public static double IEEEremainder(double a, double b); */
static jdouble jieee_remainder(JNIEnv* env, jclass clazz, jdouble a, jdouble b)
{
    return remainder(a, b);
}

/* native public static double floor(double a); */
static jdouble jfloor(JNIEnv* env, jclass clazz, jdouble a)
{
    return floor(a);
}

/* native public static double ceil(double a); */
static jdouble jceil(JNIEnv* env, jclass clazz, jdouble a)
{
    return ceil(a);
}

/* native public static double rint(double a); */
static jdouble jrint(JNIEnv* env, jclass clazz, jdouble a)
{
    return rint(a);
}

/* native public static double atan2(double a, double b); */
static jdouble jatan2(JNIEnv* env, jclass clazz, jdouble a, jdouble b)
{
    return atan2(a, b);
}

/* native public static double pow(double a, double b); */
static jdouble jpow(JNIEnv* env, jclass clazz, jdouble a, jdouble b)
{
    return pow(a, b);
}

/* native public static double sinh(double a); */
static jdouble jsinh(JNIEnv* env, jclass clazz, jdouble a)
{
    return sinh(a);
}

/* native public static double tanh(double a); */
static jdouble jtanh(JNIEnv* env, jclass clazz, jdouble a)
{
    return tanh(a);
}

/* native public static double cosh(double a); */
static jdouble jcosh(JNIEnv* env, jclass clazz, jdouble a)
{
    return cosh(a);
}

/* native public static double log10(double a); */
static jdouble jlog10(JNIEnv* env, jclass clazz, jdouble a)
{
    return log10(a);
}

/* native public static double cbrt(double a); */
static jdouble jcbrt(JNIEnv* env, jclass clazz, jdouble a)
{
    return cbrt(a);
}

/* native public static double expm1(double a); */
static jdouble jexpm1(JNIEnv* env, jclass clazz, jdouble a)
{
    return expm1(a);
}

/* native public static double hypot(double a, double b); */
static jdouble jhypot(JNIEnv* env, jclass clazz, jdouble a, jdouble b)
{
    return hypot(a, b);
}

/* native public static double log1p(double a); */
static jdouble jlog1p(JNIEnv* env, jclass clazz, jdouble a)
{
    return log1p(a);
}

/* native public static double nextafter(double a, double b); */
static jdouble jnextafter(JNIEnv* env, jclass clazz, jdouble a, jdouble b)
{
    return nextafter(a, b);
}

/* native public static float nextafterf(float a, float b); */
static jfloat jnextafterf(JNIEnv* env, jclass clazz, jfloat a, jfloat b)
{
    return nextafterf(a, b);
}

static jdouble copySign(JNIEnv* env, jclass clazz, jdouble a, jdouble b) {
    return copysign(a, b);
}

static jfloat copySign_f(JNIEnv* env, jclass clazz, jfloat a, jfloat b) {
    return copysignf(a, b);
}

/*
 * JNI registration.
 */
static JNINativeMethod gMethods[] = {
    /* name, signature, funcPtr */
    { "IEEEremainder", "(DD)D", jieee_remainder },
    { "acos",   "(D)D", jacos },
    { "asin",   "(D)D", jasin },
    { "atan",   "(D)D", jatan },
    { "atan2",  "(DD)D", jatan2 },
    { "cbrt",   "(D)D", jcbrt },
    { "ceil",   "(D)D", jceil },
    { "copySign",  "(DD)D", copySign },
    { "copySign",  "(FF)F", copySign_f },
    { "cos",    "(D)D", jcos },
    { "cosh",   "(D)D", jcosh },
    { "exp",    "(D)D", jexp },
    { "expm1",  "(D)D", jexpm1 },
    { "floor",  "(D)D", jfloor },
    { "hypot",  "(DD)D", jhypot },
    { "log",    "(D)D", jlog },
    { "log10",  "(D)D", jlog10 },
    { "log1p",  "(D)D", jlog1p },
    { "nextafter",  "(DD)D", jnextafter },
    { "nextafterf",  "(FF)F", jnextafterf },
    { "pow",    "(DD)D", jpow },
    { "rint",   "(D)D", jrint },
    { "sin",    "(D)D", jsin },
    { "sinh",   "(D)D", jsinh },
    { "sqrt",   "(D)D", jsqrt },
    { "tan",    "(D)D", jtan },
    { "tanh",   "(D)D", jtanh },
};

int register_java_lang_Math(JNIEnv* env)
{
    return jniRegisterNativeMethods(env, "java/lang/Math", gMethods,
        NELEM(gMethods));
}
