// /Game/UI/Windows/UMG_ItemsOnDrop.UMG_ItemsOnDrop_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x7C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemsOnDrop_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharName_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InsuranceOverlay;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DisplayOnlyInventory_C* Inventory;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* LoadoutButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoItems;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectOwner;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SettledOverlay;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Insured;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x02B8, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText HostName;  // 0x0358, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Items;  // 0x0370, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CharacterName;  // 0x0380, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DropName;  // 0x0398, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerLoadoutData PlayerLoadoutData;  // 0x03B0, size 0x3E0
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnInsuranceClaimed OnInsuranceClaimed;  // 0x0790, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InsuranceClaimPopup_C* CurrentPopup;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Settled;  // 0x07A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanReclaimLoadout;  // 0x07A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnLoadoutDeleted OnLoadoutDeleted;  // 0x07B0, size 0x10

    UFUNCTION() void BndEvt__UMG_ItemsOnDrop_Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CacheDropName();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void EDITOR_FillData();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemsOnDrop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GatherItems();
    UFUNCTION(BlueprintCallable) void GetCharacterName();
    UFUNCTION(BlueprintCallable) void GetHostInfo();
    UFUNCTION(BlueprintCallable) void OnClaimInsurance();
    UFUNCTION(BlueprintCallable) void OnDeleteLoadout();
    UFUNCTION(BlueprintCallable) void OnFailure_25A6710546032D088E33AA9D784DA123(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnInsuranceClaimed__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnInsurancePopupClosed();
    UFUNCTION(BlueprintCallable) void OnLoadoutDeleted__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnSuccess_25A6710546032D088E33AA9D784DA123(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void Reconstruct(FPlayerLoadoutData PlayerLoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void ResetUI();
    UFUNCTION(BlueprintCallable) void ShowInsurancePopup();
};
