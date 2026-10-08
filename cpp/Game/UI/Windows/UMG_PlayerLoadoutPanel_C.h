// /Game/UI/Windows/UMG_PlayerLoadoutPanel.UMG_PlayerLoadoutPanel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerLoadoutPanel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Cargo;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MountWarning;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MountWarningPrompt;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* SuitClearButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadoutEnvirosuit_C* UMG_LoadoutEnvirosuit;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropCargo_C* UMG_LoadoutSelection;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FEnvirosuitChanged EnvirosuitChanged;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x02B0, size 0x18

    UFUNCTION() void BndEvt__SuitClearButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void EnvirosuitChanged__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerLoadoutPanel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetPlayerLoadoutData(FPlayerLoadoutData& LoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* Loadout);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnEnvirosuitChanged();
    UFUNCTION(BlueprintCallable) void OnLoadoutChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateMountWarning();
};
