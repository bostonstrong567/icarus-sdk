// /Game/UI/Windows/UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x370, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InsuranceClaimPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ClaimButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ClaimTime;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CloseButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* DeleteButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DisplayOnlyInventory_C* Inventory;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lbl_CharacterName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lbl_CharacterName_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lbl_ProspectName;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lbl_ProspectOwner;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Items;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimeUntilClaim;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInsured;  // 0x02EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CounterTimerHandle;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnClose OnClose;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnClaim OnClaim;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CharacterName;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PropsectName;  // 0x0330, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ProspectOwner;  // 0x0348, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnDelete OnDelete;  // 0x0360, size 0x10

    UFUNCTION() void BndEvt__UMG_InsuranceClaimPopup_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_InsuranceClaimPopup_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_InsuranceClaimPopup_DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InsuranceClaimPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRemainingTimeText(FText& TimeText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnCancelDelete();
    UFUNCTION(BlueprintCallable) void OnClaim__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnClose__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnConfirmDelete();
    UFUNCTION(BlueprintCallable) void OnDelete__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateClaimButton();
    UFUNCTION(BlueprintCallable) void UpdateTime();
};
