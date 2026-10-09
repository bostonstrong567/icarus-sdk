// /Script/UMG.PanelWidget
// Derives from: UWidget > UVisual > UObject
// size 0x120, declared in Engine/Source/Runtime/UMG/Public/Components/PanelWidget.h

UCLASS(Abstract)
class UPanelWidget : public UWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<UPanelSlot*> Slots;  // 0x0108, size 0x10
    bool bCanHaveMultipleChildren;  // 0x0118, not reflected
public:
    UFUNCTION(BlueprintCallable) UPanelSlot* AddChild(UWidget* Content);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ClearChildren();
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UWidget*> GetAllChildren() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UWidget* GetChildAt(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetChildIndex(UWidget* Content) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetChildrenCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAnyChildren() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasChild(UWidget* Content) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveChild(UWidget* Content);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool RemoveChildAt(int32 Index);  // parameters 0x5

    // Virtual functions that start here:
    //   ClearChildren, GetSlotClass, OnSlotAdded, OnSlotRemoved
};
