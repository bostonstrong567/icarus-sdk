// /Script/AugmentedReality.ARSharedWorldGameState
// Derives from: AGameState > AGameStateBase > AInfo > AActor > UObject
// size 0x2C8, declared in Engine/Source/Runtime/AugmentedReality/Public/ARSharedWorldGameState.h

UCLASS(NotPlaceable, Config=Game)
class AARSharedWorldGameState : public AGameState
{
public:
    UPROPERTY(BlueprintReadOnly) TArray<uint8> PreviewImageData;  // 0x0290, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<uint8> ARWorldData;  // 0x02A0, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 PreviewImageBytesTotal;  // 0x02B0, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 ARWorldBytesTotal;  // 0x02B4, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 PreviewImageBytesDelivered;  // 0x02B8, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 ARWorldBytesDelivered;  // 0x02BC, size 0x4
private:
    bool bFiredCompletionEvent;  // 0x02C0, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void K2_OnARWorldMapIsReady();
};
