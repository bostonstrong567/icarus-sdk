// /Game/UI/Windows/UMG_InsurancePanel.UMG_InsurancePanel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InsurancePanel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ColourCornerInsurance;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_218;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InsuranceBG;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* InsuranceCheck;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* InsuranceCostBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InsurancePanel;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InsuranceRewardInfo;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InsuranceTitle;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OnDropInsuranceInfoBox;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastInsuranceValue;  // 0x02C9, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_PlayerLoadoutPanel_C* LoadoutUI;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowOnDropExtraInfo;  // 0x02D8, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InsurancePanel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindMetaItemCost(FItemsStaticRowHandle ItemRow, bool& Found, TArray<FWorkshopCost>& Cost);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ForceInsuranceLocked();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInsuranceEnabled(bool& Insured);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnEnvirosuitChanged();
    UFUNCTION(BlueprintCallable) void OnInsuranceCheckChanged(bool Checked, bool WasForced);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnLoadoutChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPendingProspectInfo(FProspectInfo ProspectInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void SetPlayerLoadout(UUMG_PlayerLoadoutPanel_C* Loadout);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateInsuranceAvailable();
    UFUNCTION(BlueprintCallable) void UpdateInsuranceCost();
};
