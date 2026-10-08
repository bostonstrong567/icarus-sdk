// /Game/UI/Components/UMG_DropshipSelector.UMG_DropshipSelector_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropshipSelector_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CreateDropshipButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* DropshipComboBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* DropshipContainer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Empty;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* EmptyOverlay;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SelectedShip;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDropshipSelected DropshipSelected;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_DropshipEntry_C*> Toggles;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDropshipCount;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Dropships;  // 0x02C0, size 0x10

    UFUNCTION() void BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void DropshipSelectedHandler(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DropshipSelected__DelegateSignature(FDropship Dropship);  // parameters 0xE0
    UFUNCTION() void ExecuteUbergraph_UMG_DropshipSelector(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindDropshipIndex(FString Name, int32& DropshipIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Update();
};
