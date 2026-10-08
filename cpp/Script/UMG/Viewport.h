// /Script/UMG.Viewport
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x168, declared in Engine/Source/Runtime/UMG/Public/Components/Viewport.h

UCLASS()
class UViewport : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere) FLinearColor BackgroundColor;  // 0x0120, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SAutoRefreshViewport,0> ViewportWidget;  // 0x0130, protected
    FEngineShowFlags ShowFlags;  // 0x0140, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetViewLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetViewRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) UWorld* GetViewportWorld() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetViewLocation(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetViewRotation(FRotator Rotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) AActor* Spawn(TSubclassOf<AActor> ActorClass);  // parameters 0x10
};
