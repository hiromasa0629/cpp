# Casting

## Static Cast
Ref: https://en.cppreference.com/w/cpp/language/static_cast
```cpp
// Returns a value of type new_type
static_cast<new_type>(expression) 
```

## Dynamic Cast
Ref: https://en.cppreference.com/w/cpp/language/dynamic_cast
```cpp
// Works with pointer and references only, when the casting fails for pointer, it returns a pointer pointing to null, if the casting fails for references it throws an error std::bas_cast exception
dynamic_cast<new_type>(expression) 
```

## Reinterpret Cast
Ref: https://en.cppreference.com/w/cpp/language/reinterpret_cast
```cpp
// Returns a value of type new_type but it instruct the compiler to treat expression as if it had the type new_type
reinterpret_cast(new_type)(expression)
```

