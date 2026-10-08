// /Script/CoreUObject.Transform
// size 0x30, declared in Engine/Source/Runtime/Core/Public/Math/TransformVectorized.h

USTRUCT()
struct FTransform
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FQuat Rotation;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector Translation;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector Scale3D;  // 0x0020, size 0xC
};
