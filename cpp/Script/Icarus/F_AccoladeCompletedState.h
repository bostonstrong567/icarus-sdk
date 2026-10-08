// /Script/Icarus.AccoladeCompletedState
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/LocalPlayer/AccoladeSaveData.h

USTRUCT()
struct FAccoladeCompletedState
{
    UPROPERTY(SaveGame, BlueprintReadOnly) FAccoladesRowHandle Accolade;  // 0x0000, size 0x18
    UPROPERTY(SaveGame, BlueprintReadOnly) FDateTime TimeCompleted;  // 0x0018, size 0x8
    UPROPERTY(SaveGame, BlueprintReadOnly) FString ProspectID;  // 0x0020, size 0x10
};
