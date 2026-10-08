// /Script/Engine.CustomAttribute
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/CustomAttributes.h

USTRUCT()
struct FCustomAttribute
{
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 VariantType;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) TArray<float> Times;  // 0x0010, size 0x10

    // Not reflected:
    TArray<FVariant,TSizedDefaultAllocator<32> > Values;  // 0x0020
};
