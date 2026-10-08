// /Script/Icarus.RecordedSplineActorStruct
// size 0x88, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/SplineActorBase.generated.h

USTRUCT()
struct FRecordedSplineActorStruct
{
    UPROPERTY(SaveGame, BlueprintReadWrite) TMap<int32, FRecordedSplineIndexStructArray> ConnectionMap;  // 0x0000, size 0x50
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<int32> StartAtActorIDs;  // 0x0050, size 0x10
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<int32> EndAtActorIDs;  // 0x0060, size 0x10
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 SplineTypeEnum;  // 0x0070, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 UniqueSplineID;  // 0x0074, size 0x4
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FRecordedSplinePoint> SplinePoints;  // 0x0078, size 0x10
};
