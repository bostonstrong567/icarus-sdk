// /Script/Icarus.RecordedSplinePoint
// size 0x50, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SplineRecorderComponent.h

USTRUCT()
struct FRecordedSplinePoint
{
public:
    UPROPERTY(SaveGame, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(SaveGame, BlueprintReadWrite) bool HasNode;  // 0x000C, size 0x1
    UPROPERTY(SaveGame, BlueprintReadWrite) FTransform NodeTransform;  // 0x0010, size 0x30
    UPROPERTY(SaveGame, BlueprintReadWrite) TEnumAsByte<ESplinePointType> PointType;  // 0x0040, size 0x1
};
