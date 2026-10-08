// /Game/UI/Components/UMG_ModifierStateContainer.UMG_ModifierStateContainer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x294, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ModifierStateContainer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* Modifiers;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxX;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTimer;  // 0x0274, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FModifiersUpdated ModifiersUpdated;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSimpleAnimations;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLayoutDirty;  // 0x0289, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowRemoveButton;  // 0x028A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ModifierTranslation;  // 0x028C, size 0x8

    UFUNCTION(BlueprintCallable) void AddModifier(UModifierStateComponent* Modifier_Component, bool SkipAnimation);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void ArrayIndexToGridPosition(int32 InArrayIndex, int32& OutRow, int32& OutColumn) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ClearAllModifiers();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DirtyLayout();
    UFUNCTION() void ExecuteUbergraph_UMG_ModifierStateContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InsertOrderedModifierComponent(UUMG_ModifierState_C* Modifier, TArray<UUMG_ModifierState_C*>& OrderedList) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ModifiersUpdated__DelegateSignature(int32 Modifiers);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnVisibilityChanged_Event_0(ESlateVisibility InVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveModifier(const UModifierStateComponent*& Modifier_Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SanitiseModifier(UUMG_ModifierState_C* Modifier);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateLayout();
    UFUNCTION(BlueprintCallable) void UpdateTimers();
};
