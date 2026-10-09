// /Script/StaticMeshDescription.UVMapSettings
// size 0x38, declared in Engine/Source/Runtime/StaticMeshDescription/Public/UVMapSettings.h

USTRUCT()
struct FUVMapSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Size;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D UVTile;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x0020, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Scale;  // 0x002C, size 0xC
};
