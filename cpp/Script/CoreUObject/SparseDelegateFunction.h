// /Script/CoreUObject.SparseDelegateFunction
// Derives from: UDelegateFunction > UFunction > UStruct > UField > UObject
// size 0xF0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class USparseDelegateFunction : public UDelegateFunction
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FName OwningClassName;  // 0x00E0
    FName DelegateName;  // 0x00E8
};
