/* ptolemy.cg.kernel.generic.GenericCodeGenerator
Generated by Ptolemy II (http://ptolemy.eecs.berkeley.edu)
Copyright (c) 2005-2016 The Regents of the University of California.
All rights reserved.
Permission is hereby granted, without written agreement and without
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the above
copyright notice and the following two paragraphs appear in all copies
of this software.
IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
SUCH DAMAGE.
THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
ENHANCEMENTS, OR MODIFICATIONS.
*/
#include "_ptTypes.h"
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Generate type resolution code for .DECGHelloWorld */
Token emptyToken;/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
Used by *_delete() and others. */
Token* convert(Token* t, char type) {
    if (t->type == type)
    return t;
    if (type == TYPE_String) {
        return String_convert(t);
    }
    if (type == TYPE_Boolean) {
        return Boolean_convert(t);
    }
    if (type == TYPE_Double) {
        return Double_convert(t);
    }
    return NULL;
}
char* InttoString (int i) {
    char* string = (char*) malloc(sizeof(char) * 12);
    sprintf((char*) string, "%d", i);
    return string;
}
char* LongtoString (long long l) {
    char* string = (char*) malloc(sizeof(char) * 22);
    sprintf(string, "%lld", l);
    return string;
}
char* DoubletoString (double d) {
    int index;
    char* string = (char*) malloc(sizeof(char) * 20);
    sprintf(string, "%.14g", d);
    // Make sure that there is a decimal point.
    if (strrchr(string, '.') == NULL) {
        index = strlen(string);
        if (index == 20) {
            string = (char*) realloc(string, sizeof(char) * 22);
        }
        string[index] = '.';
        string[index + 1] = '0';
        string[index + 2] = '\0';
    }
    return string;
}
char* BooleantoString (boolean b) {
    char *results;
    if (b) {
        // AVR does not have strdup
        results = (char*) malloc(sizeof(char) * 5);
        strcpy(results, "true");
    } else {
        results = (char*) malloc(sizeof(char) * 6);
        strcpy(results, "false");
    }
    return results;
}
char* UnsignedBytetoString (unsigned char b) {
    char* string = (char*) malloc(sizeof(char) * 3);
    sprintf(string, "%d", (int) b);
    return string;
}
/* We share one method between all scalar types so as to reduce code size. */
Token* scalarDelete(Token *token, ...) {
    /* We need to return something here because all the methods are declared
    * as returning a Token so we can use them in a table of functions.
    */
    return NULL;
}
// make a new integer token from the given value.
Token* Double_new(double d) {
    Token* result = calloc(1, sizeof(Token));
    result->type = TYPE_Double;
    result->payload.Double = d;
    return result;
}
/* Make a new integer token from the given value. */
Token* String_new(char* s) {
    Token* result = malloc(sizeof(Token));
    result->type = TYPE_String;
    if (!s) {
        result->payload.String = "";
    } else {
        result->payload.String = strdup(s);
    }
    return result;
}
Token* String_convert(Token* token, ...) {
    char* stringPointer;
    switch (token->type) {
        #ifdef TYPE_Boolean
        case TYPE_Boolean:
        stringPointer = BooleantoString(token->payload.Boolean);
        break;
        #endif
        #ifdef TYPE_Int
        case TYPE_Int:
        stringPointer = InttoString(token->payload.Int);
        break;
        #endif
        #ifdef TYPE_Double
        case TYPE_Double:
        stringPointer = DoubletoString(token->payload.Double);
        break;
        #endif
        default:
        // FIXME: not finished
        fprintf(stderr, "String_convert(): Conversion from an unsupported type. (%d)\n", token->type);
        break;
    }
    token->payload.String = stringPointer;
    token->type = TYPE_String;
    return token;
}
Token* String_delete(Token* token, ...) {
    free(token->payload.String);
    /* We need to return something here because all the methods are declared
    * as returning a Token so we can use them in a table of functions.
    */
    return NULL;
}
// Boolean Tokens can only be true or false and
// are immutable, so we have just two Booleans
Token* Boolean_False;
Token* Boolean_True;
// make a new integer token from the given value.
Token* Boolean_new(boolean b) {
    // Uncomment the next line to try the two Boolean apprach
    //#define TWO_BOOLEANS
    #ifdef TWO_BOOLEANS
    if (b) {
        if (Boolean_True == NULL) {
            Boolean_True = malloc(sizeof(Token));
            Boolean_True->type = TYPE_Boolean;
            Boolean_True->payload.Boolean = b;
        }
        return Boolean_True;
    } else {
        if (Boolean_False == NULL) {
            Boolean_False = malloc(sizeof(Token));
            Boolean_False->type = TYPE_Boolean;
            Boolean_False->payload.Boolean = b;
        }
        return Boolean_False;
    }
    #else
    // This code mallocs a token each time
    // it is called.
    Token* result = malloc(sizeof(Token));
    result->type = TYPE_Boolean;
    result->payload.Boolean = b;
    return result;
    #endif
}
Token* String_equals(Token* thisToken, ...) {
    va_list argp;
    Token* otherToken;
    va_start(argp, thisToken);
    otherToken = va_arg(argp, Token*);
    va_end(argp);
    return Boolean_new(!strcmp(thisToken->payload.String, otherToken->payload.String));
}
Token* Boolean_convert(Token* token, ...) {
    switch (token->type) {
        // FIXME: not finished
        default:
        fprintf(stderr, "Boolean_convert(): Conversion from an unsupported type. (%d)", token->type);
        break;
    }
    token->type = TYPE_Boolean;
    return token;
}
/* Instead of Boolean_delete(), we call scalarDelete(). */
Token* Boolean_equals(Token* thisToken, ...) {
    va_list argp;
    Token* otherToken;
    va_start(argp, thisToken);
    otherToken = va_arg(argp, Token*);
    va_end(argp);
    return Boolean_new(
    ( thisToken->payload.Boolean && otherToken->payload.Boolean ) ||
    ( !thisToken->payload.Boolean && !otherToken->payload.Boolean ));
}
Token* Double_convert(Token* token, ...) {
    switch (token->type) {
        #ifdef TYPE_String
        case TYPE_String:
        // FIXME: Is this safe?
        token->type = TYPE_Double;
        if (sscanf(token->payload.String, "%lg", &token->payload.Double) != 1) {
            fprintf(stderr, "Double_convert(): failed to convert \"%s\" to a Double\n", token->payload.String);
            exit(-1);
        }
        break;
        #endif
        #ifdef TYPE_Int
        case TYPE_Int:
        token->type = TYPE_Double;
        token->payload.Double = InttoDouble(token->payload.Int);
        break;
        #endif
        // FIXME: not finished
        default:
        fprintf(stderr, "Double_convert(): Conversion from an unsupported type. (%d)\n", token->type);
        exit(-1);
        break;
    }
    token->type = TYPE_Double;
    return token;
}
/* Instead of Double_delete(), we call scalarDelete(). */
Token* Double_isCloseTo(Token *thisToken, ...) {
    va_list argp;
    Token* otherToken;
    Token* tolerance;
    va_start(argp, thisToken);
    otherToken = va_arg(argp, Token*);
    tolerance = va_arg(argp, Token*);
    va_end(argp);
    return Boolean_new(fabs(thisToken->payload.Double - otherToken->payload.Double) < tolerance->payload.Double);
}
Token* (*functionTable[NUM_TYPE][NUM_FUNC])(Token*, ...)= {
{String_convert, String_delete, String_equals},
{Boolean_convert, scalarDelete, Boolean_equals},
{Double_convert, scalarDelete, Double_isCloseTo}
};
/* ptolemy.cg.kernel.generic.program.procedural.c.CCodeGenerator
end typeResolution code */