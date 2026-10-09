// /Script/Icarus.ThermalData
// size 0x60, declared in Icarus/Source/Icarus/Traits/Behaviours/ThermalData.h

USTRUCT()
struct FThermalData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InnerRadius;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OuterRadius;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EffectFalloff;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TemperatureChange;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanBeObstructed;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OcclusionTraceOffset;  // 0x002C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EffectOriginOffset;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStartsEnabled;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavAreaBase> FireNavigationModifierClass;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireNavigationModifierRadius;  // 0x0050, size 0x4
private:
    int32 InnerRadiusSquared;  // 0x0054, not reflected
    int32 OuterRadiusSquared;  // 0x0058, not reflected
};
