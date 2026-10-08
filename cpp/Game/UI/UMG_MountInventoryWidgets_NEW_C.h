// /Game/UI/UMG_MountInventoryWidgets_NEW.UMG_MountInventoryWidgets_NEW_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountInventoryWidgets_NEW_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* APPointBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AttributeGlow;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Button_MountCargo;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Button_Skills;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* TalentMenuSlot;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TalentPoints;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountInventory_C* UMG_MountInventory;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_MountInventory;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Linked_Actor;  // 0x02B0, size 0x8, named "Linked Actor"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnShowMoreStatsClicked OnShowMoreStatsClicked;  // 0x02B8, size 0x10

    UFUNCTION() void BndEvt__UMG_MountInventoryWidgets_Button_MountCargo_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MountInventoryWidgets_Button_Skills_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MountInventoryWidgets_NEW(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MountTalentModelUpdated(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnShowMoreStatsClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void SetLinkedActor(AActor* LinkedActor);  // parameters 0x8
};
