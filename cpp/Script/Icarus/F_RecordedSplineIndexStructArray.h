// /Script/Icarus.RecordedSplineIndexStructArray
// size 0x10, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SplineRecorderComponent.h

USTRUCT()
struct FRecordedSplineIndexStructArray
{
public:
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FRecordedSplineIndexStruct> IndexArray;  // 0x0000, size 0x10
};
