// /Script/Icarus.SubtitleQueue
// Derives from: UObject
// size 0x38, declared in Icarus/Source/Icarus/Systems/Dialogue/SubtitleQueue.h

UCLASS()
class USubtitleQueue : public UObject
{
private:
    TArray<FSubtitle,TSizedDefaultAllocator<32> > Queue;  // 0x0028, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddDialogue(FDialogueRowHandle Dialogue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ClearSubtitles();
    UFUNCTION(BlueprintCallable) void ClearSubtitlesWithCallback(const FSubtitleCallbackSignature& OnSubtitleCleared);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasQueuedSubtitles() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickSubtitles(float DeltaTime, const FSubtitleCallbackSignature& OnSubtitleReadyToPlay);  // parameters 0x14
};
