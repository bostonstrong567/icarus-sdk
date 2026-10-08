// /Script/Foliage.ProceduralFoliageInstance
// size 0x50, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageInstance.h

USTRUCT()
struct FProceduralFoliageInstance
{
    UPROPERTY() FQuat Rotation;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Age;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Normal;  // 0x0020, size 0xC
    UPROPERTY() float Scale;  // 0x002C, size 0x4
    UPROPERTY() UFoliageType* Type;  // 0x0030, size 0x8

    // Not reflected:
    UActorComponent * BaseComponent;  // 0x0038
    bool bBlocker;  // 0x0040
    bool bAlive;  // 0x0041
};
