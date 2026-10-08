// /Game/UI/Hab/DropTerminal/UMG_LoadoutSelection.UMG_LoadoutSelection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LoadoutSelection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpaceMenu_Cargo_C* UMG_SpaceMenu_Cargo;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FConfirmLoadout ConfirmLoadout;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBack Back;  // 0x0290, size 0x10

    UFUNCTION(BlueprintCallable) void Back__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ConfirmLoadout__DelegateSignature(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION() void ExecuteUbergraph_UMG_LoadoutSelection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
