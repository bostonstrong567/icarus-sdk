// /Script/Engine.PainCausingVolume
// Derives from: APhysicsVolume > AVolume > ABrush > AActor > UObject
// size 0x290, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PainCausingVolume.h

UCLASS(Config=Engine)
class APainCausingVolume : public APhysicsVolume
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPainCausing : 1;  // 0x0268, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagePerSec;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UDamageType> DamageType;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PainInterval;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEntryPain : 1;  // 0x027C, mask 0x01
    UPROPERTY() uint8 BACKUP_bPainCausing : 1;  // 0x027C, mask 0x02
    UPROPERTY() AController* DamageInstigator;  // 0x0280, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle TimerHandle_PainTimer;  // 0x0288, protected

    // Virtual functions that start here:
    //   CausePainTo, PainTimer
};
