/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_singun_wrapper_WebRTC_NoiseSuppress */

#ifndef _Included_com_singun_wrapper_WebRTC_NoiseSuppress
#define _Included_com_singun_wrapper_WebRTC_NoiseSuppress
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_singun_wrapper_WebRTC_NoiseSuppress
 * Method:    initNoiseSuppress
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_singun_wrapper_WebRTC_NoiseSuppress_initNoiseSuppress
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_singun_wrapper_WebRTC_NoiseSuppress
 * Method:    setNoiseSuppressMode
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_singun_wrapper_WebRTC_NoiseSuppress_setNoiseSuppressMode
        (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_singun_wrapper_WebRTC_NoiseSuppress
 * Method:    processNoiseSuppress
 * Signature: (I[SI)[S
 */
JNIEXPORT jshortArray JNICALL Java_com_singun_wrapper_WebRTC_NoiseSuppress_processNoiseSuppress
  (JNIEnv *, jobject, jint, jshortArray, jint);

/*
 * Class:     com_singun_wrapper_WebRTC_NoiseSuppress
 * Method:    releaseNoiseSuppress
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_singun_wrapper_WebRTC_NoiseSuppress_releaseNoiseSuppress
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
