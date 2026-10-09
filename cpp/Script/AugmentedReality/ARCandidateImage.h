// /Script/AugmentedReality.ARCandidateImage
// Derives from: UDataAsset > UObject
// size 0x58, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTypes.h

UCLASS()
class UARCandidateImage : public UDataAsset
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) UTexture2D* CandidateTexture;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FString FriendlyName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) float Width;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float Height;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) EARCandidateImageOrientation Orientation;  // 0x0050, size 0x1
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UTexture2D* GetCandidateTexture() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetFriendlyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EARCandidateImageOrientation GetOrientation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPhysicalHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPhysicalWidth() const;  // parameters 0x4
};
