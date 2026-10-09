// /Script/Icarus.FocusableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Traits/FocusableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFocusableComponent : public UTraitComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsFocused;  // 0x00D0, size 0x1
protected:
    UPROPERTY(BlueprintReadOnly) FFocusableData CachedFocusableData;  // 0x00E0, size 0x1F0
public:
    UFUNCTION(BlueprintCallable) void Focus();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFocusableData(FFocusableData& OutData) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) void GetIdleAnim(TSoftObjectPtr<UAnimSequence>& OutFPIdleAnim, TSoftObjectPtr<UAnimSequence>& OutTPStandingIdleAnim, TSoftObjectPtr<UAnimSequence>& OutTPCrouchedIdleAnim);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) AActor* GetInvokingActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void NotifyMeshChanged();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnFocused();
    UFUNCTION() void OnRep_IsFocused();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnUnfocused();
    UFUNCTION(BlueprintCallable) void Unfocus();

    // Virtual functions that start here:
    //   GetIdleAnim_Implementation, GetInvokingActor_Implementation, OnFocused_Implementation
    //   OnUnfocused_Implementation
};
