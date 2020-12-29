# Rules for c++

+ Class name `MY_CLASS`

``` c++
class MY_CLASS{
    
}
```

+ Struct and system variable `mode my_mode`, `int time_for_counter`.

``` c++
struct mode {

}
mode my_mode;
int time_for_counter;
```

+ Function `myFunction` or `thisFuncMakeFun`

```c++
void myFunction();
bool thisFuncMakeFun(){ return false; }
```

+ Tempolary variable `__var`. This variable use in a function and disable when func return.

```c++
    bool thisFuncMakeFun(){
        bool __result; // this var use for return function
        __result &= (0x00) || 0xFF; 
        return __result;
    }
```

+ Variable assign to function : `_var`

``` c++
void myFunnyFunc(int _number_a, int _number_b);
```

+ to be continue