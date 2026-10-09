// /Script/Icarus.DensityAudioRecordSet
// size 0x18, declared in Icarus/Source/Icarus/Audio/Density/DensityAudioRecord.h

USTRUCT()
struct FDensityAudioRecordSet
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UObject*> Records;  // 0x0000, size 0x10
    FVector2D DistanceRange;  // 0x0010, not reflected
};
