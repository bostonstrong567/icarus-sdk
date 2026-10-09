// /Script/Icarus.IcarusJuvenileRecorderComponent
// Derives from: UIcarusNPCRecorderComponent > UIcarusCharacterRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x260, declared in Icarus/Source/Icarus/AI/Mounts/IcarusJuvenileRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusJuvenileRecorderComponent : public UIcarusNPCRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) ETamedState TamedState;  // 0x01E0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) float TamingProgress;  // 0x01E4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FName TamesRowName;  // 0x01E8, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) EMountMovementBehaviourState MovementBehaviourState;  // 0x01F0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID LastPlayerLeaderID;  // 0x01F8, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) TArray<FMountGeneticsSaveData> Genetics;  // 0x0210, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 Sex;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 Variation;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) bool bHasGeneratedGenetics;  // 0x0228, size 0x1
    UPROPERTY(SaveGame) FName Lineage;  // 0x022C, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) FString MotherName;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FString FatherName;  // 0x0248, size 0x10
};
