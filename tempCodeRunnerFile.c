union{
        short value;
        char union_bytes[sizeof(short)];
    }test;
    test.value=0x0102;
    if((test.union_bytes[0]=1)&&(test.union_bytes[1]==2)){
        printf("bigendian\n");
    }else if((test.union_bytes[0]==2)&&(test.union_bytes[1]==1)){
        printf("littleendian\n");
    }else{
        printf("unknown...\n");
    }