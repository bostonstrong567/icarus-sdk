// /Script/CoreUObject.Property
// Derives from: UField > UObject
// size 0x70, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UProperty : public UField
{
public:
    int32 ArrayDim;  // 0x0030, not reflected
    int32 ElementSize;  // 0x0034, not reflected
    EPropertyFlags PropertyFlags;  // 0x0038, not reflected
    uint16 RepIndex;  // 0x0040, not reflected
    TEnumAsByte<enum ELifetimeCondition> BlueprintReplicationCondition;  // 0x0042, not reflected
    int32 Offset_Internal;  // 0x0044, not reflected
    FName RepNotifyFunc;  // 0x0048, not reflected
    UProperty * PropertyLinkNext;  // 0x0050, not reflected
    UProperty * NextRef;  // 0x0058, not reflected
    UProperty * DestructorLinkNext;  // 0x0060, not reflected
    UProperty * PostConstructLinkNext;  // 0x0068, not reflected
};
