// /Game/UI/Windows/UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpaceMenu_Cargo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimateIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipSelector_C* UMG_DropshipSelector;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InsurancePanel_C* UMG_InsurancePanel;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemsOnDropsList_C* UMG_ItemsOnDropsList;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaInventory_C* UMG_MetaInventory;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PersistentMountList_C* UMG_PersistentMountList;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerLoadoutPanel_C* UMG_PlayerLoadoutPanel;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02A0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SpaceMenu_Cargo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInsuranceEnabled(bool& Insured);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetPlayerLoadoutData(FPlayerLoadoutData& LoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void PlayOpenAnimation();
    UFUNCTION(BlueprintCallable) void SetPendingProspectInfo(FProspectInfo ProspectInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
