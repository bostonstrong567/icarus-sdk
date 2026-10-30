// /Game/BP/Settlement/UMG/UMG_Settlement_Building_Upgrade.UMG_Settlement_Building_Upgrade_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_Building_Upgrade_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* Items;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_17;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* UpgradeText;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlementBuilding* Building;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementBuildingsRowHandle Upgraded;  // 0x0290, size 0x18

    UFUNCTION() void BndEvt__UMG_Settlement_Building_Upgrade_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_Building_Upgrade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialise_Cost();  // named "Initialise Cost"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
