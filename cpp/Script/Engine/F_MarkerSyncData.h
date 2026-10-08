// /Script/Engine.MarkerSyncData
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FMarkerSyncData
{
    UPROPERTY() TArray<FAnimSyncMarker> AuthoredSyncMarkers;  // 0x0000, size 0x10

    // Not reflected:
    TArray<FName,TSizedDefaultAllocator<32> > UniqueMarkerNames;  // 0x0010
};
