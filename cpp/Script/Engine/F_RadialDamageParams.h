// /Script/Engine.RadialDamageParams
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRadialDamageParams
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseDamage;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumDamage;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterRadius;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageFalloff;  // 0x0010, size 0x4
};
