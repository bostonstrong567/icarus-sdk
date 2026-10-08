// /Game/BP/Hunting/BP_HuntingClueSpawnerInstanceGroup.BP_HuntingClueSpawnerInstanceGroup_C
// Derives from: UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_HuntingClueSpawnerInstanceGroup_C : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHuntingClueSetup ClueSetup;  // 0x0028, size 0x90
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHuntingClueSetupRowHandle ClueSetupRow;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_HuntingClue_C* PreviousClue;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_HuntingClue_C*> Clues;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ABP_HuntingClue_C> ClueClass;  // 0x00E8, size 0x8
};
