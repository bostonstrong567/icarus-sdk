// /Script/MediaAssets.MediaSource
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/MediaAssets/Public/MediaSource.h

UCLASS(Abstract, EditInlineNew)
class UMediaSource : public UObject
{
private:
    TMap<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0> > MediaOptionsMap;  // 0x0030, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetUrl() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMediaOptionBool(const FName& Key, bool Value);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetMediaOptionFloat(const FName& Key, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetMediaOptionInt64(const FName& Key, int64 Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMediaOptionString(const FName& Key, FString Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool Validate() const;  // parameters 0x1

    // Virtual functions that start here:
    //   GetUrl, Validate
};
