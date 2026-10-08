// /Script/MediaAssets.StreamMediaSource
// Derives from: UBaseMediaSource > UMediaSource > UObject
// size 0x98, declared in Engine/Source/Runtime/MediaAssets/Public/StreamMediaSource.h

UCLASS(EditInlineNew)
class UStreamMediaSource : public UBaseMediaSource
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StreamUrl;  // 0x0088, size 0x10
};
