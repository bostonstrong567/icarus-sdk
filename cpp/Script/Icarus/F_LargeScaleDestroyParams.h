// /Script/Icarus.LargeScaleDestroyParams
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DamageFunctionLibrary.generated.h

USTRUCT()
struct FLargeScaleDestroyParams
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDestroyPattern Pattern;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageToDestroyRatio;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StructuresDamageAmount;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NPCDamageAmount;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerDamageAmount;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageRadiusCm;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerDamageRadiusCm;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageDurationSec;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CleanupAfterDelay;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> IgnoreActors;  // 0x0030, size 0x10
};
