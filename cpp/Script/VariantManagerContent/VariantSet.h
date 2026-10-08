// /Script/VariantManagerContent.VariantSet
// Derives from: UObject
// size 0x78, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/VariantSet.h

UCLASS()
class UVariantSet : public UObject
{
public:
    UPROPERTY(Deprecated) FText DisplayText;  // 0x0028, size 0x18
    UPROPERTY() bool bExpanded;  // 0x0058, size 0x1
    UPROPERTY() TArray<UVariant*> Variants;  // 0x0060, size 0x10
    UPROPERTY() UTexture2D* Thumbnail;  // 0x0070, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FText DisplayText;  // 0x0040, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDisplayText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVariants() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ULevelVariantSets* GetParent();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UTexture2D* GetThumbnail();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UVariant* GetVariant(int32 VariantIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UVariant* GetVariantByName(FString VariantName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetDisplayText(const FText& NewDisplayText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetThumbnailFromCamera(UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);  // parameters 0x4C
    UFUNCTION(BlueprintCallable) void SetThumbnailFromEditorViewport();
    UFUNCTION(BlueprintCallable) void SetThumbnailFromFile(FString FilePath);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetThumbnailFromTexture(UTexture2D* NewThumbnail);  // parameters 0x8
};
