// /Script/Icarus.RecordedSplineIndexStruct
// size 0x8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SplineRecorderComponent.h

USTRUCT()
struct FRecordedSplineIndexStruct
{
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 SplineActorID;  // 0x0000, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 SplineIndex;  // 0x0004, size 0x4
};
