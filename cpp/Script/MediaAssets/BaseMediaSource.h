// /Script/MediaAssets.BaseMediaSource
// Derives from: UMediaSource > UObject
// size 0x88, declared in Engine/Source/Runtime/MediaAssets/Public/BaseMediaSource.h

UCLASS(Abstract, EditInlineNew)
class UBaseMediaSource : public UMediaSource
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) FName PlayerName;  // 0x0080, size 0x8
};
