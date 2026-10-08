// /Script/MediaAssets.TimeSynchronizableMediaSource
// Derives from: UBaseMediaSource > UMediaSource > UObject
// size 0x98, declared in Engine/Source/Runtime/MediaAssets/Public/TimeSynchronizableMediaSource.h

UCLASS(Abstract, EditInlineNew)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseTimeSynchronization;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) int32 FrameDelay;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) double TimeDelay;  // 0x0090, size 0x8
};
