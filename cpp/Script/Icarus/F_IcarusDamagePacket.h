// /Script/Icarus.IcarusDamagePacket
// size 0xD8, declared in Icarus/Source/Icarus/Systems/Damage/IcarusDamagePacket.h

USTRUCT()
struct FIcarusDamagePacket
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDamageEvent DamageEvent;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalDamage;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AppliedDamage;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSuppressDamageNumbers;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* EventInstigator;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* DamageCauser;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult HitResult;  // 0x0030, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeStamp;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWasRadialDamage;  // 0x00BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsKillCam;  // 0x00BD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitAreasEnum CriticalHitArea;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsStealthHit;  // 0x00D0, size 0x1
};
