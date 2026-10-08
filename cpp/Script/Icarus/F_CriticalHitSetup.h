// /Script/Icarus.CriticalHitSetup
// size 0xB0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CriticalHitSetupLibrary.generated.h

USTRUCT()
struct FCriticalHitSetup : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitPlayer PlayerConfig;  // 0x0018, size 0x34
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitProjectile ProjectileConfig;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCritialHitTarget TargetConfig;  // 0x0078, size 0x34
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FinishTime;  // 0x00AC, size 0x4
};
