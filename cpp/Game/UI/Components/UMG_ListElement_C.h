// /Game/UI/Components/UMG_ListElement.UMG_ListElement_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ListElement_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x0268, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle ProcessorRecipe;  // 0x026C, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RecipeToolTip_C* RecipeToolTip;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_ButtonState> ButtonState;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Valid;  // 0x0299, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlwaysValid;  // 0x029A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MouseInteraction;  // 0x029B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRecipeSelected RecipeSelected;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseInput;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle HighlightFlag;  // 0x02B4, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WidgetHighlightBase_C* QuestHelper;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTagQueriesRowHandle> CachedQueries;  // 0x02D8, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateInputItem(const FItemData& CraftingInput, FText& Name, TSoftObjectPtr<UTexture2D>& Icon, int32& Count);  // parameters 0x234
    UFUNCTION(BlueprintCallable) void CreateOutputItem(const FItemData& CraftingOutput, FText& Name, TSoftObjectPtr<UTexture2D>& Icon);  // parameters 0x230
    UFUNCTION(BlueprintCallable) UUMG_RecipeElementImage_C* CreateResourceWidget(const FResourceItem& ResourceItem);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_UMG_ListElement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FullUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) UOverlay* GetHoverCornerWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UOverlay* GetOverlay();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProcessorInputs(TArray<FCraftingInput>& Items, TArray<FQueryInput>& Queries, TArray<FResourceItem>& Resources);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FQueryInput> GetProcessorInputsQuery();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FItemData> GetProcessorOutputs();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FProcessorRecipesRowHandle GetProcessorRecipe();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UTexture2D* GetResourceImage(EIcarusResourceType Type);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FResourceItem> GetResourceInputs();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FResourceItem> GetResourceOutputs();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void InitialiseIcons();
    UFUNCTION(BlueprintCallable) void InitialiseToolTip();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void RecipeSelected__DelegateSignature(FProcessorRecipesRowHandle Recipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetState(bool Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateTrigger();
    UFUNCTION(BlueprintCallable) void UpdateVisibility(const FTagQueriesRowHandle& ItemQuery, bool OnlyHide);  // parameters 0x19
};
