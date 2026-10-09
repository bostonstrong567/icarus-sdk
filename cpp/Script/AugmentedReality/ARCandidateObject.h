// /Script/AugmentedReality.ARCandidateObject
// Derives from: UDataAsset > UObject
// size 0x70, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTypes.h

UCLASS()
class UARCandidateObject : public UDataAsset
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<uint8> CandidateObjectData;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) FString FriendlyName;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) FBox BoundingBox;  // 0x0050, size 0x1C
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FBox GetBoundingBox() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<uint8> GetCandidateObjectData() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetFriendlyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetBoundingBox(const FBox& InBoundingBox);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetFriendlyName(FString NewName);  // parameters 0x10
};
