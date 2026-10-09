// /Script/Icarus.BuildingInfo
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/BuildingGridBase.generated.h

USTRUCT()
struct FBuildingInfo
{
public:
    UPROPERTY(SaveGame, BlueprintReadWrite) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 Variation;  // 0x0030, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 IcarusUID;  // 0x0034, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) float BurnTimeRemaining;  // 0x0038, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 HealthPercentage;  // 0x003C, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FBuildingRecordStatData> AdditionalStats;  // 0x0040, size 0x10
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FBuildingRecordAlterationData> Alterations;  // 0x0050, size 0x10
    UPROPERTY(SaveGame, BlueprintReadWrite) bool bIsInCave;  // 0x0060, size 0x1
    UPROPERTY(SaveGame, BlueprintReadWrite) bool bSupportedByGround;  // 0x0061, size 0x1
    UPROPERTY(SaveGame, BlueprintReadWrite) float AnchorStrength;  // 0x0064, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FModifierStateSaveData> Modifiers;  // 0x0068, size 0x10
};
