// /Script/LiveLink.LiveLinkPreset
// Derives from: UObject
// size 0x48, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkPreset.h

UCLASS()
class ULiveLinkPreset : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<FLiveLinkSourcePreset> Sources;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) TArray<FLiveLinkSubjectPreset> Subjects;  // 0x0038, size 0x10
public:
    UFUNCTION(BlueprintCallable) bool AddToClient(bool bRecreatePresets) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable) bool ApplyToClient() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void BuildFromClient();
};
