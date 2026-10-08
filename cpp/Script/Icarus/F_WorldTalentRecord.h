// /Script/Icarus.WorldTalentRecord
// size 0x18, declared in Icarus/Source/Icarus/Systems/WorldTalents/WorldTalentManagerRecorderComponent.h

USTRUCT()
struct FWorldTalentRecord
{
    UPROPERTY(SaveGame, BlueprintReadOnly) FString RowName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 Rank;  // 0x0010, size 0x4
};
