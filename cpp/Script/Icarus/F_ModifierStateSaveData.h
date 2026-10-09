// /Script/Icarus.ModifierStateSaveData
// size 0x18, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FModifierStateSaveData
{
public:
    UPROPERTY(SaveGame, BlueprintReadWrite) FName RowName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame, BlueprintReadWrite) float TimeRemaining;  // 0x0008, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) float InitialModifierLifeTime;  // 0x000C, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) float DurationBuffModifier;  // 0x0010, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 ModifierEffectiveness;  // 0x0014, size 0x4
};
