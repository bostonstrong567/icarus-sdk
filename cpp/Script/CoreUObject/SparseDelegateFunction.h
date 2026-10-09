// /Script/CoreUObject.SparseDelegateFunction
// Derives from: UDelegateFunction > UFunction > UStruct > UField > UObject
// size 0xF0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class USparseDelegateFunction : public UDelegateFunction
{
public:
    FName OwningClassName;  // 0x00E0, not reflected
    FName DelegateName;  // 0x00E8, not reflected
};
