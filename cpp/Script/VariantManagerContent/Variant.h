// /Script/VariantManagerContent.Variant
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/Variant.h

UCLASS()
class UVariant : public UObject
{
public:
    UPROPERTY() TArray<FVariantDependency> Dependencies;  // 0x0028, size 0x10
    UPROPERTY(Deprecated) FText DisplayText;  // 0x0038, size 0x18
    UPROPERTY() TArray<UVariantObjectBinding*> ObjectBindings;  // 0x0068, size 0x10
    UPROPERTY() UTexture2D* Thumbnail;  // 0x0078, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FText DisplayText;  // 0x0050, private

    UFUNCTION() int32 AddDependency(FVariantDependency& Dependency);  // parameters 0x5C
    UFUNCTION() void DeleteDependency(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetActor(int32 ActorIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVariantDependency GetDependency(int32 Index);  // parameters 0x60
    UFUNCTION(BlueprintCallable) TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDisplayText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumActors();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumDependencies();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UVariantSet* GetParent();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UTexture2D* GetThumbnail();  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool IsActive();  // parameters 0x1
    UFUNCTION() void SetDependency(int32 Index, FVariantDependency& Dependency);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SetDisplayText(const FText& NewDisplayText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetThumbnailFromCamera(UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);  // parameters 0x4C
    UFUNCTION(BlueprintCallable) void SetThumbnailFromEditorViewport();
    UFUNCTION(BlueprintCallable) void SetThumbnailFromFile(FString FilePath);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetThumbnailFromTexture(UTexture2D* NewThumbnail);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SwitchOn();
};
