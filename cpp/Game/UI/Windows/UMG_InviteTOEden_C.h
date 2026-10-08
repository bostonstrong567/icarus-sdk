// /Game/UI/Windows/UMG_InviteTOEden.UMG_InviteTOEden_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E2, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InviteTOEden_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NPCNAME;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* OptionAButton;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* OptionBButton;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Main;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x02E1, size 0x1

    UFUNCTION() void BndEvt__UMG_InviteTOEden_OptionAButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_InviteTOEden_OptionBButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InviteTOEden(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
};
