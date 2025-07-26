//reversepointer.h
//Praise be to my Lord for my code!!!
//Jesus Christ Is King
//He who believes in him shall not perish but have eternal life!

#ifndef __REVERSE_POINTER_H__
#define __REVERSE_POINTER_H__

//search for key pointers
const char * code[];

//reverse int pointer
const char * ReverseInt(){
    const char* _type = "<-int";
    if( code == _type ){
       return "";
    }
    return *code[*_type];
}

//reverse float pointer
const char* ReverseFloat(){
    const char* _type = "<-float";
    if( code == _type ){
        return "";
    }
    return *code[*_type];
}

//reverse bool pointer
const char* ReverseBool(){
    const char* _type = "<-bool";
    if( code == _type ){
        return "";
    }
    return *code[*_type];
}

//reverse double pointer
const char* ReverseDouble(){
    const char* _type = "<-double";
    if( code == _type ){
        return "";
    }
    return *code[*_type];
}

//reverse class pointer
const char* ReverseClass(){
    //have to use symbols because class is not a variable
    const char* declrcptr = "<-::@";
    if( code == declrcptr ){
        return "";
    }
    return *code[*declrcptr];
}

#endif
