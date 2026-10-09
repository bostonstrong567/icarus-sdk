// /Script/Engine.ExposedValueHandler
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h

USTRUCT()
struct FExposedValueHandler
{
public:
    UPROPERTY() FName BoundFunction;  // 0x0000, size 0x8
    UPROPERTY() TArray<FExposedValueCopyRecord> CopyRecords;  // 0x0008, size 0x10
    UPROPERTY() UFunction* Function;  // 0x0018, size 0x8
    UPROPERTY() FFieldPath ValueHandlerNodeProperty;  // 0x0020, size 0x20
    const FPropertyAccessLibrary * PropertyAccessLibrary;  // 0x0040, not reflected
    bool bInitialized;  // 0x0048, not reflected
};
