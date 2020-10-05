#include "my_DoSomething.h"
#include <string.h>

extern "C" {
/*
 * Class:     my_DoSomething
 * Method:    sayHelloTo
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_my_DoSomething_sayHelloTo
  (JNIEnv * env, jobject jobj, jstring name) {
    char msg[100] = "hello ";
    const char* _name = env -> GetStringUTFChars(name, NULL);
    return env -> NewStringUTF(strcat(msg, _name));
}

}

