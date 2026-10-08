// /Script/Icarus.DensityAudioRecordSet
// size 0x18, declared in Icarus/Source/Icarus/Audio/Density/DensityAudioRecord.h

USTRUCT()
struct FDensityAudioRecordSet
{
    UPROPERTY() TArray<UObject*> Records;  // 0x0000, size 0x10

    // Not reflected:
    FVector2D DistanceRange;  // 0x0010
};
