// /Script/Engine.AnimNotifyTrack
// size 0x38, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FAnimNotifyTrack
{
public:
    UPROPERTY() FName TrackName;  // 0x0000, size 0x8
    UPROPERTY() FLinearColor TrackColor;  // 0x0008, size 0x10
    TArray<FAnimNotifyEvent *,TSizedDefaultAllocator<32> > Notifies;  // 0x0018, not reflected
    TArray<FAnimSyncMarker *,TSizedDefaultAllocator<32> > SyncMarkers;  // 0x0028, not reflected
};
