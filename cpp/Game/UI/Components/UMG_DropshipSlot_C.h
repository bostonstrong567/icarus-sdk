// /Game/UI/Components/UMG_DropshipSlot.UMG_DropshipSlot_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropshipSlot_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* ClearButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Empty;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SlotPosition;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CurrentItem;  // 0x0288, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery Query;  // 0x0478, size 0x48
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DropshipEditor_Dropship_C* EditorDropship;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropshipPartType Part;  // 0x04C8, size 0x1

    UFUNCTION() void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_DropshipSlot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UUMG_DropshipEditor_Dropship_C* Parent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LoadIcon(TSoftObjectPtr<UTexture2D> Texture);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnLoaded_95C42B9A4E4569F2B77ACA92D0F18F50(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void Update(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void UpdateState();
};
