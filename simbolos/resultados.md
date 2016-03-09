## salida de nm

```
0000000000000000 t add_abs
000000000000002a T main
                 U printf
0000000000000000 r val1
0000000000000004 R val2
0000000000000000 d val3
0000000000000004 D val4
```

+ add_abs texto ejecutable no visible 
+ main    texto ejecutable visible
+ printf  función indefinida a determinar linkeando con otro objeto
+ val1    solo lectura no visible
+ val2    solo lectura  visible
+ val3    dato   no visible
+ val4    dato  visible
