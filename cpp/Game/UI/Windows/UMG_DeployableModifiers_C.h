// /Game/UI/Windows/UMG_DeployableModifiers.UMG_DeployableModifiers_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeployableModifiers_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* ModifierGrid;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Modifiers;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ModifiersDivider;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ParentBox;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CachedLinkedActor;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ShownModifierCount;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HorizontalSlotCount;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnModifiersChanged OnModifiersChanged;  // 0x0298, size 0x10

    UFUNCTION(BlueprintCallable) void CleanupVisibility();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DeployableModifiers(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HasContent(bool& GotContent);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HideModifiers();
    UFUNCTION(BlueprintCallable) void InitialiseSingleModifier(UModifierStateComponent* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialize(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitializeModifiers();
    UFUNCTION(BlueprintCallable) void OnModifierUpdated(UModifierStateComponent* ModifierState, bool WasRemoved);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnModifiersChanged__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
