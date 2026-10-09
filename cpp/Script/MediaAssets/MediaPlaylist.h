// /Script/MediaAssets.MediaPlaylist
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/MediaAssets/Public/MediaPlaylist.h

UCLASS()
class UMediaPlaylist : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) TArray<UMediaSource*> Items;  // 0x0028, size 0x10
public:
    UFUNCTION(BlueprintCallable) bool Add(UMediaSource* MediaSource);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool AddFile(FString FilePath);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool AddUrl(FString Url);  // parameters 0x11
    UFUNCTION(BlueprintCallable) UMediaSource* Get(int32 Index);  // parameters 0x10
    UFUNCTION(BlueprintCallable) UMediaSource* GetNext(int32& InOutIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) UMediaSource* GetPrevious(int32& InOutIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) UMediaSource* GetRandom(int32& OutIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Insert(UMediaSource* MediaSource, int32 Index);  // parameters 0xC
    UFUNCTION(BlueprintCallable) int32 Num();  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool Remove(UMediaSource* MediaSource);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveAt(int32 Index);  // parameters 0x5
    UFUNCTION(BlueprintCallable) bool Replace(int32 Index, UMediaSource* Replacement);  // parameters 0x11
};
