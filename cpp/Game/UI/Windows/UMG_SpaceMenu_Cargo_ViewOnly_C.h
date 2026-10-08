// /Game/UI/Windows/UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x299, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpaceMenu_Cargo_ViewOnly_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimateIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemsOnDropsList_C* UMG_ItemsOnDropsList;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaInventory_ViewOnly_C* UMG_MetaInventory_ViewOnly;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0298, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SpaceMenu_Cargo_ViewOnly(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInsuranceEnabled(bool& Insured);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetPlayerLoadoutData(FPlayerLoadoutData& LoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void PlayOpenAnimation();
    UFUNCTION(BlueprintCallable) void SetPendingProspectInfo(FProspectInfo ProspectInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
