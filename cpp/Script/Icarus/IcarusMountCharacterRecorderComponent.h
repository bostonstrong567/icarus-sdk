// /Script/Icarus.IcarusMountCharacterRecorderComponent
// Derives from: UIcarusNPCRecorderComponent > UIcarusCharacterRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/AI/Mounts/IcarusMountCharacterRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusMountCharacterRecorderComponent : public UIcarusNPCRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) TArray<FStomachContentSaveData> StomachContents;  // 0x01E0, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FString MountName;  // 0x01F0, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID OwnerCharacterID;  // 0x0200, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) FString OwnerName;  // 0x0218, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) EMountCombatBehaviourState CombatBehaviourState;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) EMountMovementBehaviourState MovementBehaviourState;  // 0x0229, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) EMountConsumptionBehaviourState ConsumptionBehaviourState;  // 0x022A, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) EMountGrazingBehaviourState GrazingBehaviourState;  // 0x022B, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) TArray<FMountTalentSaveData> Talents;  // 0x0230, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 Experience;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) TArray<FMountGeneticsSaveData> Genetics;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 Sex;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 Variation;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 GestationProgress;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FChildDNASaveData ChildDNA;  // 0x0268, size 0x40
    UPROPERTY(EditAnywhere, SaveGame) bool bHasGeneratedGenetics;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FName Lineage;  // 0x02AC, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) FString MotherName;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FString FatherName;  // 0x02C8, size 0x10
};
