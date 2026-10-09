// /Script/UMG.WidgetInteractionComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x3F0, declared in Engine/Source/Runtime/UMG/Public/Components/WidgetInteractionComponent.h

UCLASS(Config=Engine)
class UWidgetInteractionComponent : public USceneComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnHoveredWidgetChanged OnHoveredWidgetChanged;  // 0x01F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VirtualUserIndex;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PointerIndex;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECollisionChannel> TraceChannel;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractionDistance;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EWidgetInteractionSource InteractionSource;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableHitTesting;  // 0x0229, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowDebug;  // 0x022A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DebugSphereLineThickness;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DebugLineThickness;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor DebugColor;  // 0x0234, size 0x10
protected:
    TSharedPtr<FSlateVirtualUserHandle,0> VirtualUser;  // 0x0208, not reflected
    FWeakWidgetPath LastWidgetPath;  // 0x0248, not reflected
    FModifierKeysState ModifierKeys;  // 0x0268, not reflected
    TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> PressedKeys;  // 0x0270, not reflected
    UPROPERTY(Transient) FHitResult CustomHitResult;  // 0x02C0, size 0x88
    UPROPERTY(Transient) FVector2D LocalHitLocation;  // 0x0348, size 0x8
    UPROPERTY(Transient) FVector2D LastLocalHitLocation;  // 0x0350, size 0x8
    UPROPERTY(Transient, Instanced) UWidgetComponent* HoveredWidgetComponent;  // 0x0358, size 0x8
    UPROPERTY(Transient) FHitResult LastHitResult;  // 0x0360, size 0x88
    UPROPERTY(Transient) bool bIsHoveredWidgetInteractable;  // 0x03E8, size 0x1
    UPROPERTY(Transient) bool bIsHoveredWidgetFocusable;  // 0x03E9, size 0x1
    UPROPERTY(Transient) bool bIsHoveredWidgetHitTestVisible;  // 0x03EA, size 0x1
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D Get2DHitLocation() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UWidgetComponent* GetHoveredWidgetComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FHitResult GetLastHitResult() const;  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOverFocusableWidget() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOverHitTestVisibleWidget() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOverInteractableWidget() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool PressAndReleaseKey(FKey Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool PressKey(FKey Key, bool bRepeat);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) void PressPointerKey(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool ReleaseKey(FKey Key);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ReleasePointerKey(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ScrollWheel(float ScrollDelta);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool SendKeyChar(FString Characters, bool bRepeat);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void SetCustomHitResult(const FHitResult& HitResult);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetFocus(UWidget* FocusWidget);  // parameters 0x8

    // Virtual functions that start here:
    //   FindHoveredWidgetPath, PerformTrace, PressAndReleaseKey, PressKey, PressPointerKey, ReleaseKey
    //   ReleasePointerKey, ScrollWheel, SendKeyChar
};
