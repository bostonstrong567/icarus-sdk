// /Script/CoreUObject.Property
// Derives from: UField > UObject
// size 0x70, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UProperty : public UField
{
public:

    // Not reflected: the engine's scripting cannot see these.
    int32 ArrayDim;  // 0x0030
    int32 ElementSize;  // 0x0034
    EPropertyFlags PropertyFlags;  // 0x0038
    uint16 RepIndex;  // 0x0040
    TEnumAsByte<enum ELifetimeCondition> BlueprintReplicationCondition;  // 0x0042
    int32 Offset_Internal;  // 0x0044
    FName RepNotifyFunc;  // 0x0048
    UProperty * PropertyLinkNext;  // 0x0050
    UProperty * NextRef;  // 0x0058
    UProperty * DestructorLinkNext;  // 0x0060
    UProperty * PostConstructLinkNext;  // 0x0068
};
