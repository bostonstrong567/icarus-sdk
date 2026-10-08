// /Script/CoreUObject.Field
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UField : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UField * Next;  // 0x0028

    // Virtual functions that start here:
    //   AddCppProperty, Bind
};
