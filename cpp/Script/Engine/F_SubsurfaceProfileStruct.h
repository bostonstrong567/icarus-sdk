// /Script/Engine.SubsurfaceProfileStruct
// size 0x8C, declared in Engine/Source/Runtime/Engine/Classes/Engine/SubsurfaceProfile.h

USTRUCT()
struct FSubsurfaceProfileStruct
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor SurfaceAlbedo;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor MeanFreePathColor;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MeanFreePathDistance;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WorldUnitScale;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableBurley;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ScatterRadius;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor SubsurfaceColor;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor FalloffColor;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor BoundaryColorBleed;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ExtinctionScale;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NormalScale;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ScatteringDistribution;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float IOR;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Roughness0;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Roughness1;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LobeMix;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor TransmissionTintColor;  // 0x007C, size 0x10
};
