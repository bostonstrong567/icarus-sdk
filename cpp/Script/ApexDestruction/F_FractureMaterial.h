// /Script/ApexDestruction.FractureMaterial
// size 0x24, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleFractureSettings.h

USTRUCT()
struct FFractureMaterial
{
public:
    UPROPERTY(EditAnywhere) FVector2D UVScale;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FVector2D UVOffset;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FVector Tangent;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) float UAngle;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) int32 InteriorElementIndex;  // 0x0020, size 0x4
};
